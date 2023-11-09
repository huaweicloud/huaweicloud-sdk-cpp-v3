
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployDetail_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployDetail_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可信节点部署详情
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsAgentDeployDetail
    : public ModelBase
{
public:
    TicsAgentDeployDetail();
    virtual ~TicsAgentDeployDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsAgentDeployDetail members

    /// <summary>
    /// 可信节点访问地址
    /// </summary>

    std::string getAgentAccessAddress() const;
    bool agentAccessAddressIsSet() const;
    void unsetagentAccessAddress();
    void setAgentAccessAddress(const std::string& value);

    /// <summary>
    /// 可信节点Id
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 可信节点所在cce集群的Id
    /// </summary>

    std::string getCceClusterId() const;
    bool cceClusterIdIsSet() const;
    void unsetcceClusterId();
    void setCceClusterId(const std::string& value);

    /// <summary>
    /// 可信节点所在cce集群的名称
    /// </summary>

    std::string getCceClusterName() const;
    bool cceClusterNameIsSet() const;
    void unsetcceClusterName();
    void setCceClusterName(const std::string& value);

    /// <summary>
    /// 可信节点所在ip
    /// </summary>

    std::string getConsoleIp() const;
    bool consoleIpIsSet() const;
    void unsetconsoleIp();
    void setConsoleIp(const std::string& value);

    /// <summary>
    /// 可信节点服务端口
    /// </summary>

    int32_t getConsolePort() const;
    bool consolePortIsSet() const;
    void unsetconsolePort();
    void setConsolePort(int32_t value);

    /// <summary>
    /// 主机挂载路径，本地挂载才会有值
    /// </summary>

    std::string getHostPath() const;
    bool hostPathIsSet() const;
    void unsethostPath();
    void setHostPath(const std::string& value);

    /// <summary>
    /// 命名空间名称
    /// </summary>

    std::string getNamespaceName() const;
    bool namespaceNameIsSet() const;
    void unsetnamespaceName();
    void setNamespaceName(const std::string& value);

    /// <summary>
    /// 可信节点CCE部署场景，对象文件存储PVC
    /// </summary>

    std::string getObsPvcName() const;
    bool obsPvcNameIsSet() const;
    void unsetobsPvcName();
    void setObsPvcName(const std::string& value);

    /// <summary>
    /// 持久化存储唯一标识
    /// </summary>

    std::string getPersistenceId() const;
    bool persistenceIdIsSet() const;
    void unsetpersistenceId();
    void setPersistenceId(const std::string& value);

    /// <summary>
    /// 代理部署规格
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 可信节点访问端口
    /// </summary>

    int32_t getWebPort() const;
    bool webPortIsSet() const;
    void unsetwebPort();
    void setWebPort(int32_t value);


protected:
    std::string agentAccessAddress_;
    bool agentAccessAddressIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;
    std::string cceClusterId_;
    bool cceClusterIdIsSet_;
    std::string cceClusterName_;
    bool cceClusterNameIsSet_;
    std::string consoleIp_;
    bool consoleIpIsSet_;
    int32_t consolePort_;
    bool consolePortIsSet_;
    std::string hostPath_;
    bool hostPathIsSet_;
    std::string namespaceName_;
    bool namespaceNameIsSet_;
    std::string obsPvcName_;
    bool obsPvcNameIsSet_;
    std::string persistenceId_;
    bool persistenceIdIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    int32_t webPort_;
    bool webPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployDetail_H_
