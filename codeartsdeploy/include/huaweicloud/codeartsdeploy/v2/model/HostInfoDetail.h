
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfoDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfoDetail_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/HostAuthorizationBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionHostDetailNew.h>
#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/HostInfoDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机详情信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  HostInfoDetail
    : public ModelBase
{
public:
    HostInfoDetail();
    virtual ~HostInfoDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostInfoDetail members

    /// <summary>
    /// 主机ID
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 主机IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 主机操作系统
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 端口号
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    HostAuthorizationBody getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const HostAuthorizationBody& value);

    /// <summary>
    /// 
    /// </summary>

    PermissionHostDetailNew getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const PermissionHostDetailNew& value);

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 主机名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 是否为代理机
    /// </summary>

    bool isAsProxy() const;
    bool asProxyIsSet() const;
    void unsetasProxy();
    void setAsProxy(bool value);

    /// <summary>
    /// 代理机ID
    /// </summary>

    std::string getProxyHostId() const;
    bool proxyHostIdIsSet() const;
    void unsetproxyHostId();
    void setProxyHostId(const std::string& value);

    /// <summary>
    /// 主机所属人名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HostInfoDetail getProxyHost() const;
    bool proxyHostIsSet() const;
    void unsetproxyHost();
    void setProxyHost(const HostInfoDetail& value);

    /// <summary>
    /// 连通性状态
    /// </summary>

    std::string getConnectionStatus() const;
    bool connectionStatusIsSet() const;
    void unsetconnectionStatus();
    void setConnectionStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 上次连通时间
    /// </summary>

    std::string getLastestConnectionTime() const;
    bool lastestConnectionTimeIsSet() const;
    void unsetlastestConnectionTime();
    void setLastestConnectionTime(const std::string& value);

    /// <summary>
    /// 连通性验证结果
    /// </summary>

    std::string getConnectionResult() const;
    bool connectionResultIsSet() const;
    void unsetconnectionResult();
    void setConnectionResult(const std::string& value);

    /// <summary>
    /// 免费启用应用运维服务（AOM），提供指标监控、日志查询、告警功能（自动安装数据采集器 ICAgent，仅支持华为云linux主机）
    /// </summary>

    bool isInstallIcagent() const;
    bool installIcagentIsSet() const;
    void unsetinstallIcagent();
    void setInstallIcagent(bool value);

    /// <summary>
    /// 创建人昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);


protected:
    std::string hostId_;
    bool hostIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string os_;
    bool osIsSet_;
    int32_t port_;
    bool portIsSet_;
    HostAuthorizationBody authorization_;
    bool authorizationIsSet_;
    PermissionHostDetailNew permission_;
    bool permissionIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    HostInfoDetail* proxyHost_;
    bool proxyHostIsSet_;
    std::string connectionStatus_;
    bool connectionStatusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string lastestConnectionTime_;
    bool lastestConnectionTimeIsSet_;
    std::string connectionResult_;
    bool connectionResultIsSet_;
    bool installIcagent_;
    bool installIcagentIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfoDetail_H_
