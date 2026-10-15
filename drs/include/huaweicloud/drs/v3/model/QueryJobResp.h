
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QuerySmnInfoResp.h>
#include <huaweicloud/drs/v3/model/DatabaseObjectInfo.h>
#include <string>
#include <huaweicloud/drs/v3/model/FailedToBindEipChildInfo.h>
#include <vector>
#include <huaweicloud/drs/v3/model/SpeedLimitInfo.h>
#include <huaweicloud/drs/v3/model/PublicIpConfig.h>
#include <huaweicloud/drs/v3/model/Tag.h>
#include <huaweicloud/drs/v3/model/PeriodOrderResp.h>
#include <huaweicloud/drs/v3/model/DefaultRootDb.h>
#include <huaweicloud/drs/v3/model/InstInfo.h>
#include <huaweicloud/drs/v3/model/Endpoint.h>
#include <huaweicloud/drs/v3/model/GetDataTransformationResp.h>

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
    /// **参数解释**：  任务ID，用于唯一标识一个数据复制任务。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  父任务ID，多任务场景下子任务所归属的父任务标识。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称，用户创建任务时自定义的名称，用于区分和识别不同的数据复制任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务当前运行状态。  **约束限制**：  不涉及。  **取值范围**：  - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - PAUSING：已暂停 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - REBUILD_NODE_STARTED：故障恢复中 - REBUILD_NODE_FAILED：故障恢复失败 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - DELETED：已删除 - CHILD_TRANSFER_STARTING：再编辑子任务启动中 - CHILD_TRANSFER_STARTED：再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE：再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED：再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：再编辑子任务已结束 - NODE_UPGRADE_START：升级开始 - NODE_UPGRADE_COMPLETE：升级完成 - NODE_UPGRADE_FAILED：升级失败  **默认取值**：  不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务描述信息，用户创建任务时自定义的备注说明。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的创建时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  不涉及。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量 - INCR_TRANS：增量迁移，仅同步数据变更  **默认取值**：  不涉及
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
    /// **参数解释**：  物理分片源库信息列表，多对一场景下存在多个源库时返回，每个元素为Endpoint结构。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  不涉及。  **取值范围**：  - vpn：虚拟专用网络 - vpc：虚拟私有云 - eip：弹性公网IP  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务失败原因，任务状态为失败时返回该字段。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
    /// **参数解释**：  任务实际启动时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getActualStartTime() const;
    bool actualStartTimeIsSet() const;
    void unsetactualStartTime();
    void setActualStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  全量迁移完成时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getFullTransferCompleteTime() const;
    bool fullTransferCompleteTimeIsSet() const;
    void unsetfullTransferCompleteTime();
    void setFullTransferCompleteTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务最近一次更新时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移任务的业务场景类型。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备  **默认取值**：  不涉及
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务配置变更后是否需要重启迁移实例才能生效。  **约束限制**：  不涉及。  **取值范围**：  - true：需要重启 - false：不需要重启  **默认取值**：  不涉及
    /// </summary>

    bool isNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(bool value);

    /// <summary>
    /// **参数解释**：  指定目标数据库实例在迁移过程中是否限制为只读状态。  **约束限制**：  不涉及。  **取值范围**：  - true：目标实例限制为只读 - false：目标实例不限制为只读  **默认取值**：  不涉及
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// **参数解释**：  数据迁移过程中的冲突忽略策略，指定当目标库已存在相同数据时的处理方式。  **约束限制**：  不涉及。  **取值范围**：  - stop：冲突失败，遇到冲突时停止任务 - overwrite：冲突覆盖，用源库数据覆盖目标库已有数据 - ignore：冲突忽略，跳过冲突数据继续迁移  **默认取值**：  不涉及
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  过滤DDL策略，指定迁移过程中需要过滤的DDL操作类型。  **约束限制**：  不涉及。  **取值范围**：  - drop_database：过滤drop_database操作 - drop_databasefilter_all：过滤所有DDL操作 - \&quot;\&quot;：不过滤  **默认取值**：  不涉及
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移速度限制信息，详情请参见SpeedLimitInfo对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<SpeedLimitInfo>& getSpeedLimit();
    bool speedLimitIsSet() const;
    void unsetspeedLimit();
    void setSpeedLimit(const std::vector<SpeedLimitInfo>& value);

    /// <summary>
    /// **参数解释**：  DRS任务的迁移方案，指定数据复制的底层实现方式。  **约束限制**：  不涉及。  **取值范围**：  - Replication：主从复制 - Tungsten：日志解析 - PGBaseBackup：PG备份  **默认取值**：  不涉及
    /// </summary>

    std::string getSchemaType() const;
    bool schemaTypeIsSet() const;
    void unsetschemaType();
    void setSchemaType(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例节点个数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// **参数解释**：  对象选择开关，标识是否已开启对象选择功能。  **约束限制**：  不涉及。  **取值范围**：  - true：开启对象选择 - false：关闭对象选择  **默认取值**：  不涉及
    /// </summary>

    bool isObjectSwitch() const;
    bool objectSwitchIsSet() const;
    void unsetobjectSwitch();
    void setObjectSwitch(bool value);

    /// <summary>
    /// **参数解释**：  主任务ID，多任务场景下子任务所归属的主任务标识。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getMasterJobId() const;
    bool masterJobIdIsSet() const;
    void unsetmasterJobId();
    void setMasterJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  全量快照模式。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getFullMode() const;
    bool fullModeIsSet() const;
    void unsetfullMode();
    void setFullMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否迁移结构。  **约束限制**：  不涉及。  **取值范围**：  - true：迁移结构 - false：不迁移结构  **默认取值**：  不涉及
    /// </summary>

    bool isStructTrans() const;
    bool structTransIsSet() const;
    void unsetstructTrans();
    void setStructTrans(bool value);

    /// <summary>
    /// **参数解释**：  是否迁移索引。  **约束限制**：  不涉及。  **取值范围**：  - true：迁移索引 - false：不迁移索引  **默认取值**：  不涉及
    /// </summary>

    bool isIndexTrans() const;
    bool indexTransIsSet() const;
    void unsetindexTrans();
    void setIndexTrans(bool value);

    /// <summary>
    /// **参数解释**：  是否使用目标库的用户替换掉definer。  **约束限制**：  不涉及。  **取值范围**：  - true：使用目标库用户替换definer - false：不替换definer  **默认取值**：  不涉及
    /// </summary>

    bool isReplaceDefiner() const;
    bool replaceDefinerIsSet() const;
    void unsetreplaceDefiner();
    void setReplaceDefiner(bool value);

    /// <summary>
    /// **参数解释**：  是否迁移用户。  **约束限制**：  不涉及。  **取值范围**：  - true：迁移用户 - false：不迁移用户  **默认取值**：  不涉及
    /// </summary>

    bool isMigrateUser() const;
    bool migrateUserIsSet() const;
    void unsetmigrateUser();
    void setMigrateUser(bool value);

    /// <summary>
    /// **参数解释**：  是否库级同步。  **约束限制**：  不涉及。  **取值范围**：  - true：库级同步 - false：非库级同步  **默认取值**：  不涉及
    /// </summary>

    bool isSyncDatabase() const;
    bool syncDatabaseIsSet() const;
    void unsetsyncDatabase();
    void setSyncDatabase(bool value);

    /// <summary>
    /// **参数解释**：  错误码，当任务报错时返回的错误代码。  **约束限制**：  不涉及。  **取值范围**：  格式为DRS.XXXXXX。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误详细信息，当任务执行失败时返回的具体错误描述。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
    /// **参数解释**：  迁移实例节点所在的可用区（AZ，Availability Zone）编码。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例节点所在的虚拟私有云（VPC，Virtual Private Cloud）ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例节点所在的子网ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例节点所在的安全组ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否多主灾备任务，双主灾备场景下该值为true。  **约束限制**：  不涉及。  **取值范围**：  - true：多主灾备任务 - false：非多主灾备任务  **默认取值**：  不涉及
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// **参数解释**：  是否支持IPv6。  **约束限制**：  不涉及。  **取值范围**：  - true：支持IPv6 - false：不支持IPv6  **默认取值**：  不涉及
    /// </summary>

    bool isSupportIpV6() const;
    bool supportIpV6IsSet() const;
    void unsetsupportIpV6();
    void setSupportIpV6(bool value);

    /// <summary>
    /// **参数解释**：  继承的任务ID，Oracle到Kafka链路时使用。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getInheritId() const;
    bool inheritIdIsSet() const;
    void unsetinheritId();
    void setInheritId(const std::string& value);

    /// <summary>
    /// **参数解释**：  断点的GTID（Global Transaction Identifier）集合，用于记录增量同步的断点位置。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
    /// **参数解释**：  增量任务启动位点，标识增量同步起始的数据位置。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getIncreStartPosition() const;
    bool increStartPositionIsSet() const;
    void unsetincreStartPosition();
    void setIncreStartPosition(const std::string& value);

    /// <summary>
    /// **参数解释**：  标识任务是否为跨可用区（AZ）部署的主备任务。  **约束限制**：  不涉及。  **取值范围**：  - true：跨AZ主备任务 - false：非跨AZ任务  **默认取值**：  不涉及
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// **参数解释**：  迁移实例节点所在的可用区（AZ）名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getAzName() const;
    bool azNameIsSet() const;
    void unsetazName();
    void setAzName(const std::string& value);

    /// <summary>
    /// **参数解释**：  主备任务中主实例所在的可用区（AZ）。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getMasterAz() const;
    bool masterAzIsSet() const;
    void unsetmasterAz();
    void setMasterAz(const std::string& value);

    /// <summary>
    /// **参数解释**：  主备任务中备实例所在的可用区（AZ）。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSlaveAz() const;
    bool slaveAzIsSet() const;
    void unsetslaveAz();
    void setSlaveAz(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务主备角色，标识当前节点在主备任务中的角色。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
    /// **参数解释**：  已同步对象信息列表，每个元素为DatabaseObjectInfo结构。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<DatabaseObjectInfo>& getObjectInfos();
    bool objectInfosIsSet() const;
    void unsetobjectInfos();
    void setObjectInfos(const std::vector<DatabaseObjectInfo>& value);

    /// <summary>
    /// **参数解释**：  任务创建时的初始方向，表示任务首次创建时配置的迁移方向，不会随灾备倒换而改变。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
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
    /// **参数解释**：  DRS任务标签列表，每个元素为Tag结构。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// **参数解释**：  指定公网IP的信息列表，每个元素为PublicIpConfig结构。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<PublicIpConfig>& getPublicIpList();
    bool publicIpListIsSet() const;
    void unsetpublicIpList();
    void setPublicIpList(const std::vector<PublicIpConfig>& value);

    /// <summary>
    /// **参数解释**：  公网IP绑定状态，标识是否成功绑定公网IP。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getBindPublicIpState() const;
    bool bindPublicIpStateIsSet() const;
    void unsetbindPublicIpState();
    void setBindPublicIpState(const std::string& value);

    /// <summary>
    /// **参数解释**：  子任务绑定失败信息列表，多任务场景下存在子任务绑定公网IP失败时返回，每个元素为FailedToBindEipChildInfo结构。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<FailedToBindEipChildInfo>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<FailedToBindEipChildInfo>& value);

    /// <summary>
    /// **参数解释**：  是否开启云数据库RDS for MySQL或MariaDB的Binlog快速清理。  **约束限制**：  不涉及。  **取值范围**：  - true：开启Binlog快速清理 - false：不开启Binlog快速清理  **默认取值**：  不涉及
    /// </summary>

    bool isIsOpenFastClean() const;
    bool isOpenFastCleanIsSet() const;
    void unsetisOpenFastClean();
    void setIsOpenFastClean(bool value);

    /// <summary>
    /// **参数解释**：  灾备任务内核方向。非倒换中与job_direction取值相同，倒换中与job_direction取值相反。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主  **默认取值**：  不涉及
    /// </summary>

    std::string getJobKernelDirection() const;
    bool jobKernelDirectionIsSet() const;
    void unsetjobKernelDirection();
    void setJobKernelDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  同步任务的同步模式，指定数据同步的粒度级别。  **约束限制**：  不涉及。  **取值范围**：  - DB_LEVEL：库级同步 - SCHEMA_LEVEL：schema级同步 - TABLE_LEVEL：表级同步 - FILE_IMPORT：文件导入 - INSTANCE_LEVEL：实例级同步  **默认取值**：  不涉及
    /// </summary>

    std::string getSyncMode() const;
    bool syncModeIsSet() const;
    void unsetsyncMode();
    void setSyncMode(const std::string& value);


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
    int32_t nodeNum_;
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
    std::vector<PublicIpConfig> publicIpList_;
    bool publicIpListIsSet_;
    std::string bindPublicIpState_;
    bool bindPublicIpStateIsSet_;
    std::vector<FailedToBindEipChildInfo> children_;
    bool childrenIsSet_;
    bool isOpenFastClean_;
    bool isOpenFastCleanIsSet_;
    std::string jobKernelDirection_;
    bool jobKernelDirectionIsSet_;
    std::string syncMode_;
    bool syncModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobResp_H_
