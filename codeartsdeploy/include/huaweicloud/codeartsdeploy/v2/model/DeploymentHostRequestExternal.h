
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequestExternal_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequestExternal_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostAuthorizationBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostRequestExternal
    : public ModelBase
{
public:
    DeploymentHostRequestExternal();
    virtual ~DeploymentHostRequestExternal();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentHostRequestExternal members

    /// <summary>
    /// 是否为代理主机
    /// </summary>

    bool isAsProxy() const;
    bool asProxyIsSet() const;
    void unsetasProxy();
    void setAsProxy(bool value);

    /// <summary>
    /// 
    /// </summary>

    DeploymentHostAuthorizationBody getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const DeploymentHostAuthorizationBody& value);

    /// <summary>
    /// 主机名称
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 主机ip，如：161.17.101.12
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// ssh端口，如：22
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 代理主机id
    /// </summary>

    std::string getProxyHostId() const;
    bool proxyHostIdIsSet() const;
    void unsetproxyHostId();
    void setProxyHostId(const std::string& value);

    /// <summary>
    /// 是否同步主机信息
    /// </summary>

    bool isSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(bool value);

    /// <summary>
    /// 是否安装icAgent
    /// </summary>

    bool isInstallIcagent() const;
    bool installIcagentIsSet() const;
    void unsetinstallIcagent();
    void setInstallIcagent(bool value);


protected:
    bool asProxy_;
    bool asProxyIsSet_;
    DeploymentHostAuthorizationBody authorization_;
    bool authorizationIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    bool sync_;
    bool syncIsSet_;
    bool installIcagent_;
    bool installIcagentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequestExternal_H_
