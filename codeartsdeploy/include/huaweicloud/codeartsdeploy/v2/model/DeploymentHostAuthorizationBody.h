
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostAuthorizationBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostAuthorizationBody_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 登录主机鉴权，使用密码登录则填写密码即可，使用密钥则填写密钥，二选一即可。
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostAuthorizationBody
    : public ModelBase
{
public:
    DeploymentHostAuthorizationBody();
    virtual ~DeploymentHostAuthorizationBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeploymentHostAuthorizationBody members

    /// <summary>
    /// 用户名，可输入中英文，数字和符号(-_.)。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 密码，认证类型为0时，密码必填。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 密钥，认证类型为1时，密钥必填
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// 认证类型，0表示使用密码认证，1表示使用密钥认证
    /// </summary>

    int32_t getTrustedType() const;
    bool trustedTypeIsSet() const;
    void unsettrustedType();
    void setTrustedType(int32_t value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t trustedType_;
    bool trustedTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostAuthorizationBody_H_
