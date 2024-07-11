
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentHostInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentHostInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentHostPermission.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  EnvironmentHostInfo
    : public ModelBase
{
public:
    EnvironmentHostInfo();
    virtual ~EnvironmentHostInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnvironmentHostInfo members

    /// <summary>
    /// 主机id
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

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
    /// 
    /// </summary>

    EnvironmentHostPermission getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const EnvironmentHostPermission& value);

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
    /// 代理机id
    /// </summary>

    std::string getProxyHostId() const;
    bool proxyHostIdIsSet() const;
    void unsetproxyHostId();
    void setProxyHostId(const std::string& value);

    /// <summary>
    /// 代理机名称
    /// </summary>

    std::string getProxyHostName() const;
    bool proxyHostNameIsSet() const;
    void unsetproxyHostName();
    void setProxyHostName(const std::string& value);

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
    /// 连通性状态
    /// </summary>

    std::string getConnectionStatus() const;
    bool connectionStatusIsSet() const;
    void unsetconnectionStatus();
    void setConnectionStatus(const std::string& value);

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
    int32_t port_;
    bool portIsSet_;
    EnvironmentHostPermission permission_;
    bool permissionIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    std::string proxyHostId_;
    bool proxyHostIdIsSet_;
    std::string proxyHostName_;
    bool proxyHostNameIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string connectionStatus_;
    bool connectionStatusIsSet_;
    std::string lastestConnectionTime_;
    bool lastestConnectionTimeIsSet_;
    std::string connectionResult_;
    bool connectionResultIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentHostInfo_H_
