
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditInstanceListBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditInstanceListBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 审计实例列表bean
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditInstanceListBean
    : public ModelBase
{
public:
    AuditInstanceListBean();
    virtual ~AuditInstanceListBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditInstanceListBean members

    /// <summary>
    /// 付费模式  - Period：包周期 - Demand：按需。
    /// </summary>

    std::string getChargeModel() const;
    bool chargeModelIsSet() const;
    void unsetchargeModel();
    void setChargeModel(const std::string& value);

    /// <summary>
    /// 备注信息。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 配置的数据库总数。
    /// </summary>

    int32_t getConfigNum() const;
    bool configNumIsSet() const;
    void unsetconfigNum();
    void setConfigNum(int32_t value);

    /// <summary>
    /// 连接地址。
    /// </summary>

    std::string getConnectIp() const;
    bool connectIpIsSet() const;
    void unsetconnectIp();
    void setConnectIp(const std::string& value);

    /// <summary>
    /// ipv6连接地址。
    /// </summary>

    std::string getConnectIpv6() const;
    bool connectIpv6IsSet() const;
    void unsetconnectIpv6();
    void setConnectIpv6(const std::string& value);

    /// <summary>
    /// CPU个数
    /// </summary>

    int32_t getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 支持的数据库总数
    /// </summary>

    int32_t getDatabaseLimit() const;
    bool databaseLimitIsSet() const;
    void unsetdatabaseLimit();
    void setDatabaseLimit(int32_t value);

    /// <summary>
    /// 实例结果状态 - 1:冻结可释放  - 2:冻结不可释放 - 3:冻结后不可续费
    /// </summary>

    int32_t getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(int32_t value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpired() const;
    bool expiredIsSet() const;
    void unsetexpired();
    void setExpired(const std::string& value);

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 剩余天数
    /// </summary>

    std::string getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(const std::string& value);

    /// <summary>
    /// 实例别名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 如果有返回，则需要升级，如果没有，则为null。
    /// </summary>

    std::string getNewVersion() const;
    bool newVersionIsSet() const;
    void unsetnewVersion();
    void setNewVersion(const std::string& value);

    /// <summary>
    /// 绑定弹性IP的port ID
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 内存
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 实例所在region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 到期天数
    /// </summary>

    std::string getRemainDays() const;
    bool remainDaysIsSet() const;
    void unsetremainDays();
    void setRemainDays(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 实例的规格
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 场景
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 安全组
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 实例规格
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// 实例状态  - SHUTOFF :已关闭  - ACTIVE: 运行中，允许任何操作   - DELETING: 删除中，不允许任何操作  - BUILD: 创建中，不允许任何操作  - DELETED: 已删除，不需要展示  - ERROR: 故障，只允许删除  - HAWAIT: 等待备机创建成功，不允许任何操作  - FROZEN: 已冻结，只允许续费、绑定/解绑  - UPGRADING: 升级中，不允许升级操作
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 任务状态  - powering-on: 正在开启，实例可以绑定、解绑  - powering-off: 正在关闭，实例可以绑定、解绑  - rebooting: 正在重启，实例可以绑定、解绑  - delete_wait: 等待删除，集群与实例不允许任何操作  - NO_TASK: 不展示
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// 实例的当前版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 虚拟私有云
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 可用区
    /// </summary>

    std::string getZone() const;
    bool zoneIsSet() const;
    void unsetzone();
    void setZone(const std::string& value);


protected:
    std::string chargeModel_;
    bool chargeModelIsSet_;
    std::string comment_;
    bool commentIsSet_;
    int32_t configNum_;
    bool configNumIsSet_;
    std::string connectIp_;
    bool connectIpIsSet_;
    std::string connectIpv6_;
    bool connectIpv6IsSet_;
    int32_t cpu_;
    bool cpuIsSet_;
    std::string created_;
    bool createdIsSet_;
    int32_t databaseLimit_;
    bool databaseLimitIsSet_;
    int32_t effect_;
    bool effectIsSet_;
    std::string expired_;
    bool expiredIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string keepDays_;
    bool keepDaysIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string newVersion_;
    bool newVersionIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string remainDays_;
    bool remainDaysIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string specification_;
    bool specificationIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string task_;
    bool taskIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string zone_;
    bool zoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditInstanceListBean_H_
