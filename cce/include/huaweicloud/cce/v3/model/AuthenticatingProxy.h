
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AuthenticatingProxy_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AuthenticatingProxy_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// authenticatingProxy模式相关配置。认证模式为authenticating_proxy时必选
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AuthenticatingProxy
    : public ModelBase
{
public:
    AuthenticatingProxy();
    virtual ~AuthenticatingProxy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthenticatingProxy members

    /// <summary>
    /// authenticating_proxy模式配置的x509格式CA证书(base64编码)。当集群认证模式为authenticating_proxy时，此项必须填写。   最大长度：1M 
    /// </summary>

    std::string getCa() const;
    bool caIsSet() const;
    void unsetca();
    void setCa(const std::string& value);

    /// <summary>
    /// authenticating_proxy模式配置的x509格式CA证书签发的客户端证书，用于kube-apiserver到扩展apiserver的认证。(base64编码)。当集群认证模式为authenticating_proxy时，此项必须填写。 
    /// </summary>

    std::string getCert() const;
    bool certIsSet() const;
    void unsetcert();
    void setCert(const std::string& value);

    /// <summary>
    /// authenticating_proxy模式配置的x509格式CA证书签发的客户端证书时对应的私钥，用于kube-apiserver到扩展apiserver的认证。Kubernetes集群使用的私钥尚不支持密码加密，请使用未加密的私钥。(base64编码)。当集群认证模式为authenticating_proxy时，此项必须填写。 
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);


protected:
    std::string ca_;
    bool caIsSet_;
    std::string cert_;
    bool certIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AuthenticatingProxy_H_
