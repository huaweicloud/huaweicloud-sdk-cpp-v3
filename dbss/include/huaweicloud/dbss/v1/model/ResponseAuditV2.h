
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseAuditV2_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseAuditV2_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ResponseAuditV2
    : public ModelBase
{
public:
    ResponseAuditV2();
    virtual ~ResponseAuditV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseAuditV2 members

    /// <summary>
    /// 绑定数据库类型
    /// </summary>

    std::string getBindingDbType() const;
    bool bindingDbTypeIsSet() const;
    void unsetbindingDbType();
    void setBindingDbType(const std::string& value);

    /// <summary>
    /// 付费模式  - Period：包周期 - Demand：按需。
    /// </summary>

    std::string getChargeModel() const;
    bool chargeModelIsSet() const;
    void unsetchargeModel();
    void setChargeModel(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 已配置数据库数量
    /// </summary>

    int32_t getConfigNum() const;
    bool configNumIsSet() const;
    void unsetconfigNum();
    void setConfigNum(int32_t value);

    /// <summary>
    /// IPV6
    /// </summary>

    std::string getConnectIpv6() const;
    bool connectIpv6IsSet() const;
    void unsetconnectIpv6();
    void setConnectIpv6(const std::string& value);

    /// <summary>
    /// IPV4
    /// </summary>

    std::string getConnectIp() const;
    bool connectIpIsSet() const;
    void unsetconnectIp();
    void setConnectIp(const std::string& value);

    /// <summary>
    /// CPU数量
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
    /// 数据库数量限额
    /// </summary>

    int32_t getDatabaseLimit() const;
    bool databaseLimitIsSet() const;
    void unsetdatabaseLimit();
    void setDatabaseLimit(int32_t value);

    /// <summary>
    /// 实例结果状态 - 1：冻结可释放  - 2：冻结不可释放 - 3：冻结后不可续费
    /// </summary>

    int32_t getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(int32_t value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpired() const;
    bool expiredIsSet() const;
    void unsetexpired();
    void setExpired(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailedReason() const;
    bool failedReasonIsSet() const;
    void unsetfailedReason();
    void setFailedReason(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 在线天数
    /// </summary>

    std::string getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 最新版本
    /// </summary>

    std::string getNewVersion() const;
    bool newVersionIsSet() const;
    void unsetnewVersion();
    void setNewVersion(const std::string& value);

    /// <summary>
    /// 端口ID
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 内存大小
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 所属区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 剩余天数
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
    /// 资源规格编码
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 冻结场景  - POLICE: 公安冻结  - ILLEGAL: 违规冻结  - VERIFY: 未实名认证冻结  - PARTNER: 合作伙伴冻结 - ARREARS: 普通冻结（普通）
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 规格
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// 实例状态  - SHUTOFF: 已关闭  - ACTIVE: 运行中，允许任何操作   - DELETING: 删除中，不允许任何操作  - BUILD: 创建中，不允许任何操作  - DELETED: 已删除，不需要展示  - ERROR: 故障，只允许删除  - HAWAIT: 等待备机创建成功，不允许任何操作  - FROZEN: 已冻结，只允许续费、绑定/解绑  - UPGRADING: 升级中，不允许升级操作
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
    /// 功能列表
    /// </summary>

    std::vector<std::string>& getSupportedFeature();
    bool supportedFeatureIsSet() const;
    void unsetsupportedFeature();
    void setSupportedFeature(const std::vector<std::string>& value);

    /// <summary>
    /// 任务状态  - powering-on: 正在开启，实例可以绑定、解绑  - powering-off: 正在关闭，实例可以绑定、解绑  - rebooting: 正在重启，实例可以绑定、解绑  - delete_wait: 等待删除，集群与实例不允许任何操作  - NO_TASK: 不展示
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// 时区
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);

    /// <summary>
    /// 升级日志
    /// </summary>

    std::string getUpgradeLog() const;
    bool upgradeLogIsSet() const;
    void unsetupgradeLog();
    void setUpgradeLog(const std::string& value);

    /// <summary>
    /// 实例版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// VPC私有云ID
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
    std::string bindingDbType_;
    bool bindingDbTypeIsSet_;
    std::string chargeModel_;
    bool chargeModelIsSet_;
    std::string comment_;
    bool commentIsSet_;
    int32_t configNum_;
    bool configNumIsSet_;
    std::string connectIpv6_;
    bool connectIpv6IsSet_;
    std::string connectIp_;
    bool connectIpIsSet_;
    int32_t cpu_;
    bool cpuIsSet_;
    std::string created_;
    bool createdIsSet_;
    int32_t databaseLimit_;
    bool databaseLimitIsSet_;
    int32_t effect_;
    bool effectIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string expired_;
    bool expiredIsSet_;
    std::string failedReason_;
    bool failedReasonIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
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
    std::vector<std::string> supportedFeature_;
    bool supportedFeatureIsSet_;
    std::string task_;
    bool taskIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;
    std::string upgradeLog_;
    bool upgradeLogIsSet_;
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResponseAuditV2_H_
