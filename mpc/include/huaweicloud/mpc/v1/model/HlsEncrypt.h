
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  HlsEncrypt
    : public ModelBase
{
public:
    HlsEncrypt();
    virtual ~HlsEncrypt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HlsEncrypt members

    /// <summary>
    /// 内容加密秘钥 
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 秘钥获取服务的地址 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 初始向量，base64binary，随机数 
    /// </summary>

    std::string getIv() const;
    bool ivIsSet() const;
    void unsetiv();
    void setIv(const std::string& value);

    /// <summary>
    /// 加密算法。 - AES-128-CTR - AES-128-CBC - SM4CBC  默认值：AES-128-CTR 
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string iv_;
    bool ivIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_
