
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/HostAuthorizationBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionHostDetailNew.h>
#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/HostInfo.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  HostInfo
    : public ModelBase
{
public:
    HostInfo();
    virtual ~HostInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostInfo members

    /// <summary>
    /// 主机id
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

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
    /// 端口
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
    /// 主机名称
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
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 代理机id
    /// </summary>

    std::string getProxyHostId() const;
    bool proxyHostIdIsSet() const;
    void unsetproxyHostId();
    void setProxyHostId(const std::string& value);

    /// <summary>
    /// 主机所属人id
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

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

    HostInfo getProxyHost() const;
    bool proxyHostIsSet() const;
    void unsetproxyHost();
    void setProxyHost(const HostInfo& value);

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
    /// 主机所属人昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 导入状态
    /// </summary>

    std::string getImportStatus() const;
    bool importStatusIsSet() const;
    void unsetimportStatus();
    void setImportStatus(const std::string& value);

    /// <summary>
    /// 关联环境数量
    /// </summary>

    int32_t getEnvCount() const;
    bool envCountIsSet() const;
    void unsetenvCount();
    void setEnvCount(int32_t value);


protected:
    std::string uuid_;
    bool uuidIsSet_;
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
    std::string hostName_;
    bool hostNameIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    HostInfo* proxyHost_;
    bool proxyHostIsSet_;
    std::string connectionStatus_;
    bool connectionStatusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastestConnectionTime_;
    bool lastestConnectionTimeIsSet_;
    std::string connectionResult_;
    bool connectionResultIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string importStatus_;
    bool importStatusIsSet_;
    int32_t envCount_;
    bool envCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostInfo_H_
