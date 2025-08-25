
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Authentication_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Authentication_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AuthenticatingProxy.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Authentication
    : public ModelBase
{
public:
    Authentication();
    virtual ~Authentication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Authentication members

    /// <summary>
    /// 集群认证模式。 - kubernetes 1.11及之前版本的集群支持“x509”、“rbac”和“authenticating_proxy”，默认取值为“x509”。 - kubernetes 1.13及以上版本的集群支持“rbac”和“authenticating_proxy”，默认取值为“rbac”。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuthenticatingProxy getAuthenticatingProxy() const;
    bool authenticatingProxyIsSet() const;
    void unsetauthenticatingProxy();
    void setAuthenticatingProxy(const AuthenticatingProxy& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    AuthenticatingProxy authenticatingProxy_;
    bool authenticatingProxyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Authentication_H_
