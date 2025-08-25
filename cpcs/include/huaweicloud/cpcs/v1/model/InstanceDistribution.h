
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_InstanceDistribution_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_InstanceDistribution_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  InstanceDistribution
    : public ModelBase
{
public:
    InstanceDistribution();
    virtual ~InstanceDistribution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceDistribution members

    /// <summary>
    /// 加解密服务实例数量
    /// </summary>

    int32_t getEncryptDecrypt() const;
    bool encryptDecryptIsSet() const;
    void unsetencryptDecrypt();
    void setEncryptDecrypt(int32_t value);

    /// <summary>
    /// 签名验签服务实例数量
    /// </summary>

    int32_t getSignVerify() const;
    bool signVerifyIsSet() const;
    void unsetsignVerify();
    void setSignVerify(int32_t value);

    /// <summary>
    /// 密钥管理服务实例数量
    /// </summary>

    int32_t getKms() const;
    bool kmsIsSet() const;
    void unsetkms();
    void setKms(int32_t value);

    /// <summary>
    /// 时间戳服务实例数量
    /// </summary>

    int32_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int32_t value);

    /// <summary>
    /// 协同签名服务实例数量
    /// </summary>

    int32_t getCollaSign() const;
    bool collaSignIsSet() const;
    void unsetcollaSign();
    void setCollaSign(int32_t value);

    /// <summary>
    /// 动态口令服务实例数量
    /// </summary>

    int32_t getOtp() const;
    bool otpIsSet() const;
    void unsetotp();
    void setOtp(int32_t value);

    /// <summary>
    /// 数据库加密服务实例数量
    /// </summary>

    int32_t getDbEncrypt() const;
    bool dbEncryptIsSet() const;
    void unsetdbEncrypt();
    void setDbEncrypt(int32_t value);

    /// <summary>
    /// 文件加密服务实例数量
    /// </summary>

    int32_t getFileEncrypt() const;
    bool fileEncryptIsSet() const;
    void unsetfileEncrypt();
    void setFileEncrypt(int32_t value);

    /// <summary>
    /// 电子签章服务实例数量
    /// </summary>

    int32_t getDigitSeal() const;
    bool digitSealIsSet() const;
    void unsetdigitSeal();
    void setDigitSeal(int32_t value);

    /// <summary>
    /// ssl vpn服务实例数量
    /// </summary>

    int32_t getSslVpn() const;
    bool sslVpnIsSet() const;
    void unsetsslVpn();
    void setSslVpn(int32_t value);


protected:
    int32_t encryptDecrypt_;
    bool encryptDecryptIsSet_;
    int32_t signVerify_;
    bool signVerifyIsSet_;
    int32_t kms_;
    bool kmsIsSet_;
    int32_t timestamp_;
    bool timestampIsSet_;
    int32_t collaSign_;
    bool collaSignIsSet_;
    int32_t otp_;
    bool otpIsSet_;
    int32_t dbEncrypt_;
    bool dbEncryptIsSet_;
    int32_t fileEncrypt_;
    bool fileEncryptIsSet_;
    int32_t digitSeal_;
    bool digitSealIsSet_;
    int32_t sslVpn_;
    bool sslVpnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_InstanceDistribution_H_
