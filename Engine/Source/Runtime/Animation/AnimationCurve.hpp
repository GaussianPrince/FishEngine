#pragma once

#include "Keyframe.hpp"
#include "WrapMode.hpp"

namespace FishEngine
{
	class AnimationCurve
	{
	public:
		AnimationCurve()
		{
			Init({});
		}

		AnimationCurve(std::vector<Keyframe> const & keys)
		{
			Init(keys);
		}

		~AnimationCurve()
		{
			Cleanup();
		}

		std::vector<Keyframe> & keys()
		{
			return m_keys;
		}

		void setKeys(std::vector<Keyframe> const & keys)
		{
			m_keys = keys;
		}

		Keyframe operator[](int index)
		{
			return m_keys[index];
		}

		int length() const
		{
			return m_length;
		}

		float Evaluate(float time);
		float AddKey(float time, float value);
		int AddKey(Keyframe const & key);
		int MoveKey(int index, Keyframe const & key);
		void RemoveKey(int index);
		void SetKeys(std::vector<Keyframe> const & keys);
		std::vector<Keyframe> & GetKeys() { return m_keys; }

		void SmoothTangents(int index, float weight);

		static AnimationCurve Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
		{
			float num = (valueEnd - valueStart) / (timeEnd - timeStart);
			Keyframe[] keys = new Keyframe[]
			{
				new Keyframe(timeStart, valueStart, 0f, num),
				new Keyframe(timeEnd, valueEnd, num, 0f)
			};
			return new AnimationCurve(keys);
		}

		static AnimationCurve EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
		{
			Keyframe[] keys = new Keyframe[]
			{
				new Keyframe(timeStart, valueStart, 0f, 0f),
				new Keyframe(timeEnd, valueEnd, 0f, 0f)
			};
			return new AnimationCurve(keys);
		}


	private:
		void Cleanup();
		void Init(std::vector<Keyframe> const & keys);

	private:
		std::vector<Keyframe> m_keys;
		int m_length;
		WrapMode m_preWrapMode;
		WrapMode m_postWrapMode;
	};
}