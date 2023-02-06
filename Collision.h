#pragma once

#include "CollisionPrimitive.h"

class Collision
{
public:
	static bool ChackSphere2Plane(const Sphere& sphere, const Plane&
		plane, DirectX::XMVECTOR* inter = nullptr);

	static void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point,
		const Triangle& triangle, DirectX::XMVECTOR* closest);

	static bool CheckSphere2Triangle(const Sphere& sphere, const Triangle&
		triangle, DirectX::XMVECTOR* inter = nullptr);

	static bool CheakRay2Plane(const Ray& ray, const Plane& plane,
		float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);

};

