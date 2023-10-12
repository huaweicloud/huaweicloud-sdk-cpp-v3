
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/Tag.h>
#include <huaweicloud/drs/v3/model/QuerySmnInfoResp.h>
#include <huaweicloud/drs/v3/model/DatabaseObjectInfo.h>
#include <string>
#include <huaweicloud/drs/v3/model/PeriodOrderResp.h>
#include <huaweicloud/drs/v3/model/DefaultRootDb.h>
#include <huaweicloud/drs/v3/model/InstInfo.h>
#include <vector>
#include <huaweicloud/drs/v3/model/Endpoint.h>
#include <huaweicloud/drs/v3/model/GetDataTransformationResp.h>
#include <huaweicloud/drs/v3/model/SpeedLimitInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryJobResp
    : public ModelBase
{
public:
    QueryJobResp();
    virtual ~QueryJobResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryJobResp members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 父任务id。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务状态。 - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - PAUSING：已暂停 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - REBUILD_NODE_STARTED：故障恢复中 - REBUILD_NODE_FAILED：故障恢复失败 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - DELETED：已删除 - CHILD_TRANSFER_STARTING：再编辑子任务启动中 - CHILD_TRANSFER_STARTED：再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE：再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED：再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：再编辑子任务已结束 - NODE_UPGRADE_START：升级开始 - NODE_UPGRADE_COMPLETE：升级完成 - NODE_UPGRADE_FAILED：升级失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建时间，时间戳格式。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 迁移模式
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Endpoint getSourceEndpoint() const;
    bool sourceEndpointIsSet() const;
    void unsetsourceEndpoint();
    void setSourceEndpoint(const Endpoint& value);

    /// <summary>
    /// 
    /// </summary>

    Endpoint getDmqEndpoint() const;
    bool dmqEndpointIsSet() const;
    void unsetdmqEndpoint();
    void setDmqEndpoint(const Endpoint& value);

    /// <summary>
    /// 物理源库信息。
    /// </summary>

    std::vector<Endpoint>& getSourceSharding();
    bool sourceShardingIsSet() const;
    void unsetsourceSharding();
    void setSourceSharding(const std::vector<Endpoint>& value);

    /// <summary>
    /// 
    /// </summary>

    Endpoint getTargetEndpoint() const;
    bool targetEndpointIsSet() const;
    void unsettargetEndpoint();
    void setTargetEndpoint(const Endpoint& value);

    /// <summary>
    /// 网络类型
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getFailedReason() const;
    bool failedReasonIsSet() const;
    void unsetfailedReason();
    void setFailedReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InstInfo getInstInfo() const;
    bool instInfoIsSet() const;
    void unsetinstInfo();
    void setInstInfo(const InstInfo& value);

    /// <summary>
    /// 实际启动时间，时间戳格式。
    /// </summary>

    std::string getActualStartTime() const;
    bool actualStartTimeIsSet() const;
    void unsetactualStartTime();
    void setActualStartTime(const std::string& value);

    /// <summary>
    /// 全量完成时间，时间戳格式。
    /// </summary>

    std::string getFullTransferCompleteTime() const;
    bool fullTransferCompleteTimeIsSet() const;
    void unsetfullTransferCompleteTime();
    void setFullTransferCompleteTime(const std::string& value);

    /// <summary>
    /// 更新时间，时间戳格式
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 任务方向
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 迁移场景 - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 是否需要重启
    /// </summary>

    bool isNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(bool value);

    /// <summary>
    /// 指定目标实例是否限制为只读
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// 冲突忽略策略 - stop：冲突失败 - overwrite：冲突覆盖 - ignore：冲突忽略
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// 过滤DDL策略 - drop_database：过滤drop_database - drop_databasefilter_all：过滤所有ddl - \&quot;\&quot;：不过滤
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// 迁移速度限制。
    /// </summary>

    std::vector<SpeedLimitInfo>& getSpeedLimit();
    bool speedLimitIsSet() const;
    void unsetspeedLimit();
    void setSpeedLimit(const std::vector<SpeedLimitInfo>& value);

    /// <summary>
    /// 迁移方案 - Replication-主从复制 - Tungsten-日志解析 - PGBaseBackup-PG备份
    /// </summary>

    std::string getSchemaType() const;
    bool schemaTypeIsSet() const;
    void unsetschemaType();
    void setSchemaType(const std::string& value);

    /// <summary>
    /// 节点个数。
    /// </summary>

    std::string getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(const std::string& value);

    /// <summary>
    /// 对象选择开关
    /// </summary>

    bool isObjectSwitch() const;
    bool objectSwitchIsSet() const;
    void unsetobjectSwitch();
    void setObjectSwitch(bool value);

    /// <summary>
    /// 主任务Id。
    /// </summary>

    std::string getMasterJobId() const;
    bool masterJobIdIsSet() const;
    void unsetmasterJobId();
    void setMasterJobId(const std::string& value);

    /// <summary>
    /// 全量快照模式。
    /// </summary>

    std::string getFullMode() const;
    bool fullModeIsSet() const;
    void unsetfullMode();
    void setFullMode(const std::string& value);

    /// <summary>
    /// 是否迁移结构。
    /// </summary>

    bool isStructTrans() const;
    bool structTransIsSet() const;
    void unsetstructTrans();
    void setStructTrans(bool value);

    /// <summary>
    /// 否迁移索引。
    /// </summary>

    bool isIndexTrans() const;
    bool indexTransIsSet() const;
    void unsetindexTrans();
    void setIndexTrans(bool value);

    /// <summary>
    /// 是否使用目标库的用户替换掉definer。
    /// </summary>

    bool isReplaceDefiner() const;
    bool replaceDefinerIsSet() const;
    void unsetreplaceDefiner();
    void setReplaceDefiner(bool value);

    /// <summary>
    /// 是否迁移用户。
    /// </summary>

    bool isMigrateUser() const;
    bool migrateUserIsSet() const;
    void unsetmigrateUser();
    void setMigrateUser(bool value);

    /// <summary>
    /// 是否库级同步。
    /// </summary>

    bool isSyncDatabase() const;
    bool syncDatabaseIsSet() const;
    void unsetsyncDatabase();
    void setSyncDatabase(bool value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DefaultRootDb getTargetRootDb() const;
    bool targetRootDbIsSet() const;
    void unsettargetRootDb();
    void setTargetRootDb(const DefaultRootDb& value);

    /// <summary>
    /// node所在AZ
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// node所在VPC
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// node所在子网
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// node所在安全组
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 是否多主灾备任务,双主灾备时有值为true
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// 是否支持IPV6
    /// </summary>

    bool isSupportIpV6() const;
    bool supportIpV6IsSet() const;
    void unsetsupportIpV6();
    void setSupportIpV6(bool value);

    /// <summary>
    /// 继承的任务ID，Oracle_Mrskafka链路时使用。
    /// </summary>

    std::string getInheritId() const;
    bool inheritIdIsSet() const;
    void unsetinheritId();
    void setInheritId(const std::string& value);

    /// <summary>
    /// 断点的GTID集合
    /// </summary>

    std::string getGtid() const;
    bool gtidIsSet() const;
    void unsetgtid();
    void setGtid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QuerySmnInfoResp getAlarmNotify() const;
    bool alarmNotifyIsSet() const;
    void unsetalarmNotify();
    void setAlarmNotify(const QuerySmnInfoResp& value);

    /// <summary>
    /// 增量任务启动位点
    /// </summary>

    std::string getIncreStartPosition() const;
    bool increStartPositionIsSet() const;
    void unsetincreStartPosition();
    void setIncreStartPosition(const std::string& value);

    /// <summary>
    /// 是否是主备任务。
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// node所在节点AZ名称。
    /// </summary>

    std::string getAzName() const;
    bool azNameIsSet() const;
    void unsetazName();
    void setAzName(const std::string& value);

    /// <summary>
    /// 主备任务主AZ。
    /// </summary>

    std::string getMasterAz() const;
    bool masterAzIsSet() const;
    void unsetmasterAz();
    void setMasterAz(const std::string& value);

    /// <summary>
    /// 主备任务备AZ。
    /// </summary>

    std::string getSlaveAz() const;
    bool slaveAzIsSet() const;
    void unsetslaveAz();
    void setSlaveAz(const std::string& value);

    /// <summary>
    /// 任务主备角色。
    /// </summary>

    std::string getNodeRole() const;
    bool nodeRoleIsSet() const;
    void unsetnodeRole();
    void setNodeRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodOrderResp getPeriodOrder() const;
    bool periodOrderIsSet() const;
    void unsetperiodOrder();
    void setPeriodOrder(const PeriodOrderResp& value);

    /// <summary>
    /// 已同步对象信息。
    /// </summary>

    std::vector<DatabaseObjectInfo>& getObjectInfos();
    bool objectInfosIsSet() const;
    void unsetobjectInfos();
    void setObjectInfos(const std::vector<DatabaseObjectInfo>& value);

    /// <summary>
    /// 初始任务方向。 取值： - up：入云，灾备场景时对应本云为备。 - down：出云，灾备场景时对应本云为主。 - non-dbs：自建。
    /// </summary>

    std::string getOriginalJobDirection() const;
    bool originalJobDirectionIsSet() const;
    void unsetoriginalJobDirection();
    void setOriginalJobDirection(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetDataTransformationResp getDataTransformation() const;
    bool dataTransformationIsSet() const;
    void unsetdataTransformation();
    void setDataTransformation(const GetDataTransformationResp& value);

    /// <summary>
    /// DRS任务标签
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    Endpoint sourceEndpoint_;
    bool sourceEndpointIsSet_;
    Endpoint dmqEndpoint_;
    bool dmqEndpointIsSet_;
    std::vector<Endpoint> sourceSharding_;
    bool sourceShardingIsSet_;
    Endpoint targetEndpoint_;
    bool targetEndpointIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string failedReason_;
    bool failedReasonIsSet_;
    InstInfo instInfo_;
    bool instInfoIsSet_;
    std::string actualStartTime_;
    bool actualStartTimeIsSet_;
    std::string fullTransferCompleteTime_;
    bool fullTransferCompleteTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    bool needRestart_;
    bool needRestartIsSet_;
    bool isTargetReadonly_;
    bool isTargetReadonlyIsSet_;
    std::string conflictPolicy_;
    bool conflictPolicyIsSet_;
    std::string filterDdlPolicy_;
    bool filterDdlPolicyIsSet_;
    std::vector<SpeedLimitInfo> speedLimit_;
    bool speedLimitIsSet_;
    std::string schemaType_;
    bool schemaTypeIsSet_;
    std::string nodeNum_;
    bool nodeNumIsSet_;
    bool objectSwitch_;
    bool objectSwitchIsSet_;
    std::string masterJobId_;
    bool masterJobIdIsSet_;
    std::string fullMode_;
    bool fullModeIsSet_;
    bool structTrans_;
    bool structTransIsSet_;
    bool indexTrans_;
    bool indexTransIsSet_;
    bool replaceDefiner_;
    bool replaceDefinerIsSet_;
    bool migrateUser_;
    bool migrateUserIsSet_;
    bool syncDatabase_;
    bool syncDatabaseIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    DefaultRootDb targetRootDb_;
    bool targetRootDbIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    bool multiWrite_;
    bool multiWriteIsSet_;
    bool supportIpV6_;
    bool supportIpV6IsSet_;
    std::string inheritId_;
    bool inheritIdIsSet_;
    std::string gtid_;
    bool gtidIsSet_;
    QuerySmnInfoResp alarmNotify_;
    bool alarmNotifyIsSet_;
    std::string increStartPosition_;
    bool increStartPositionIsSet_;
    bool isMultiAz_;
    bool isMultiAzIsSet_;
    std::string azName_;
    bool azNameIsSet_;
    std::string masterAz_;
    bool masterAzIsSet_;
    std::string slaveAz_;
    bool slaveAzIsSet_;
    std::string nodeRole_;
    bool nodeRoleIsSet_;
    PeriodOrderResp periodOrder_;
    bool periodOrderIsSet_;
    std::vector<DatabaseObjectInfo> objectInfos_;
    bool objectInfosIsSet_;
    std::string originalJobDirection_;
    bool originalJobDirectionIsSet_;
    GetDataTransformationResp dataTransformation_;
    bool dataTransformationIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_
