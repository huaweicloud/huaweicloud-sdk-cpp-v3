
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  KmsInfo
    : public ModelBase
{
public:
    KmsInfo();
    virtual ~KmsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KmsInfo members

    /// <summary>
    /// AES_256算法密钥数量
    /// </summary>

    int32_t getAes256() const;
    bool aes256IsSet() const;
    void unsetaes256();
    void setAes256(int32_t value);

    /// <summary>
    /// SM4算法密钥数量
    /// </summary>

    int32_t getSm4() const;
    bool sm4IsSet() const;
    void unsetsm4();
    void setSm4(int32_t value);

    /// <summary>
    /// RSA_2048算法密钥数量
    /// </summary>

    int32_t getRsa2048() const;
    bool rsa2048IsSet() const;
    void unsetrsa2048();
    void setRsa2048(int32_t value);

    /// <summary>
    /// RSA_3072算法密钥数量
    /// </summary>

    int32_t getRsa3072() const;
    bool rsa3072IsSet() const;
    void unsetrsa3072();
    void setRsa3072(int32_t value);

    /// <summary>
    /// RSA_4096算法密钥数量
    /// </summary>

    int32_t getRsa4096() const;
    bool rsa4096IsSet() const;
    void unsetrsa4096();
    void setRsa4096(int32_t value);

    /// <summary>
    /// EC_P256算法密钥数量
    /// </summary>

    int32_t getEcP256() const;
    bool ecP256IsSet() const;
    void unsetecP256();
    void setEcP256(int32_t value);

    /// <summary>
    /// EC_P384务算法密钥数量
    /// </summary>

    int32_t getEcP384() const;
    bool ecP384IsSet() const;
    void unsetecP384();
    void setEcP384(int32_t value);

    /// <summary>
    /// SM2算法密钥数量
    /// </summary>

    int32_t getSm2() const;
    bool sm2IsSet() const;
    void unsetsm2();
    void setSm2(int32_t value);


protected:
    int32_t aes256_;
    bool aes256IsSet_;
    int32_t sm4_;
    bool sm4IsSet_;
    int32_t rsa2048_;
    bool rsa2048IsSet_;
    int32_t rsa3072_;
    bool rsa3072IsSet_;
    int32_t rsa4096_;
    bool rsa4096IsSet_;
    int32_t ecP256_;
    bool ecP256IsSet_;
    int32_t ecP384_;
    bool ecP384IsSet_;
    int32_t sm2_;
    bool sm2IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsInfo_H_
