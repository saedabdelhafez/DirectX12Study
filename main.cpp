#include <iostream>
#include <DirectXMath.h>

int main()
{

	
	DirectX::XMVECTOR vA = DirectX::XMVectorSet( 1.0f,2.0f,3.0f,4.0f );
	DirectX::XMVECTOR vB = DirectX::XMVectorSet( 5.0f,6.0f,7.0f,8.0f );
	float v1 = DirectX::XMVectorGetX(vA);
	float v2 = DirectX::XMVectorGetZ(vA);
	std::cout << v1 << std::endl; // accessing individual vectors elements X,Y,Z
	std::cout << v2 << std::endl;

	DirectX::XMFLOAT4A m;	// accessing all vectors by building a memory structure as m and storing the vector in the memory m
	DirectX::XMStoreFloat4A(&m, vA);
	std::cout << m.y << std::endl;

	DirectX::XMVECTOR vC = DirectX::XMVectorAdd(vA, vB); // adding two vectors together for more information https://docs.microsoft.com/en-us/windows/desktop/dxmath/ovw-xnamath-reference-functions-vector-arithmetic 

	DirectX::XMFLOAT4A b;
	DirectX::XMStoreFloat4A(&b, vC);
	std::cout << b.y << std::endl;

	DirectX::XMVECTOR vALenght = DirectX::XMVector4Length(vA); // Computes the length of a 4D vector and assign it to a vector
	float v4 = DirectX::XMVectorGetZ(vALenght);
	std::cout << v4 << std::endl;


	DirectX::XMVECTOR vBNormal = DirectX::XMVector4Normalize(vB);

	DirectX::XMVector4Dot(vA, vBNormal);


	//DirectX::XMFLOAT4A m2;
	//DirectX::XMStoreFloat4A(&m2, vALenght);
	//std::cout << vALenght.m128_f32 << std::endl;









	







	
	return 0;
}
