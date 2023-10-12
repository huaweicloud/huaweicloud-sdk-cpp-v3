
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DeploymentUpdateHost.h>
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
/// 主机信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostRequest
    : public ModelBase
{
public:
    DeploymentHostRequest();
    virtual ~DeploymentHostRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentHostRequest members

    /// <summary>
    /// 主机名称
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// IP，请输入弹性ip格式：161.17.101.12
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
    /// 是否为代理机
    /// </summary>

    bool isAsProxy() const;
    bool asProxyIsSet() const;
    void unsetasProxy();
    void setAsProxy(bool value);

    /// <summary>
    /// 代理机id
    /// </summary>

    std::string getProxyHostId() const;
    bool proxyHostIdIsSet() const;
    void unsetproxyHostId();
    void setProxyHostId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeploymentHostAuthorizationBody getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const DeploymentHostAuthorizationBody& value);

    /// <summary>
    /// 免费启用应用运维服务（AOM），提供指标监控、日志查询、告警功能（自动安装数据采集器 ICAgent，仅支持华为云linux主机）
    /// </summary>

    bool isInstallIcagent() const;
    bool installIcagentIsSet() const;
    void unsetinstallIcagent();
    void setInstallIcagent(bool value);

    /// <summary>
    /// 是否将当前主机的密码信息同步到同一项目下其他主机集群中具有相同IP、用户名、端口的主机。
    /// </summary>

    bool isSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(bool value);


protected:
    std::string hostName_;
    bool hostNameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t port_;
    bool portIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    DeploymentHostAuthorizationBody authorization_;
    bool authorizationIsSet_;
    bool installIcagent_;
    bool installIcagentIsSet_;
    bool sync_;
    bool syncIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostRequest_H_
