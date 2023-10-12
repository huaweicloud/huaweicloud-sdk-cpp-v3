
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostDetail_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostDetail.h>
#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostAuthorizationBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostInfo.h>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionHostDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机信息详情
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostDetail
    : public ModelBase
{
public:
    DeploymentHostDetail();
    virtual ~DeploymentHostDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentHostDetail members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

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
    /// 操作系统：windows|linux，需要和主机集群保持一致
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

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
    /// 主机ID
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeploymentHostDetail getProxyHost() const;
    bool proxyHostIsSet() const;
    void unsetproxyHost();
    void setProxyHost(const DeploymentHostDetail& value);

    /// <summary>
    /// 主机集群名
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PermissionHostDetail getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const PermissionHostDetail& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 最后连接时间
    /// </summary>

    std::string getLastestConnectionTime() const;
    bool lastestConnectionTimeIsSet() const;
    void unsetlastestConnectionTime();
    void setLastestConnectionTime(const std::string& value);

    /// <summary>
    /// 连接状态
    /// </summary>

    std::string getConnectionStatus() const;
    bool connectionStatusIsSet() const;
    void unsetconnectionStatus();
    void setConnectionStatus(const std::string& value);

    /// <summary>
    /// 拥有者名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 维护者id
    /// </summary>

    std::string getUpdatorId() const;
    bool updatorIdIsSet() const;
    void unsetupdatorId();
    void setUpdatorId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 拥有者id
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// 维护者名称
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);

    /// <summary>
    /// 连接结果
    /// </summary>

    std::string getConnectionResult() const;
    bool connectionResultIsSet() const;
    void unsetconnectionResult();
    void setConnectionResult(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string os_;
    bool osIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    DeploymentHostAuthorizationBody authorization_;
    bool authorizationIsSet_;
    bool installIcagent_;
    bool installIcagentIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    DeploymentHostDetail* proxyHost_;
    bool proxyHostIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    PermissionHostDetail permission_;
    bool permissionIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string lastestConnectionTime_;
    bool lastestConnectionTimeIsSet_;
    std::string connectionStatus_;
    bool connectionStatusIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string updatorId_;
    bool updatorIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;
    std::string connectionResult_;
    bool connectionResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostDetail_H_
