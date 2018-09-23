#include <iostream>
#include <DirectXMath.h>

int main()
{

	std::cout << "HelloWorld" << std::endl;
	DirectX::XMVECTOR vA = DirectX::XMVectorSet( 1.0f,2.0f,3.0f,4.0f );
	DirectX::XMVECTOR vB = DirectX::XMVectorSet( 5.0f,6.0f,7.0f,8.0f );
	DirectX::XMVECTOR vR = vA * vB;
	return 0;
}
