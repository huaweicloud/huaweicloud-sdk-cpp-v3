

#include "huaweicloud/drs/v3/model/QueryJobResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryJobResp::QueryJobResp()
{
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    sourceEndpointIsSet_ = false;
    dmqEndpointIsSet_ = false;
    sourceShardingIsSet_ = false;
    targetEndpointIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    failedReason_ = "";
    failedReasonIsSet_ = false;
    instInfoIsSet_ = false;
    actualStartTime_ = "";
    actualStartTimeIsSet_ = false;
    fullTransferCompleteTime_ = "";
    fullTransferCompleteTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    needRestart_ = false;
    needRestartIsSet_ = false;
    isTargetReadonly_ = false;
    isTargetReadonlyIsSet_ = false;
    conflictPolicy_ = "";
    conflictPolicyIsSet_ = false;
    filterDdlPolicy_ = "";
    filterDdlPolicyIsSet_ = false;
    speedLimitIsSet_ = false;
    schemaType_ = "";
    schemaTypeIsSet_ = false;
    nodeNum_ = "";
    nodeNumIsSet_ = false;
    objectSwitch_ = false;
    objectSwitchIsSet_ = false;
    masterJobId_ = "";
    masterJobIdIsSet_ = false;
    fullMode_ = "";
    fullModeIsSet_ = false;
    structTrans_ = false;
    structTransIsSet_ = false;
    indexTrans_ = false;
    indexTransIsSet_ = false;
    replaceDefiner_ = false;
    replaceDefinerIsSet_ = false;
    migrateUser_ = false;
    migrateUserIsSet_ = false;
    syncDatabase_ = false;
    syncDatabaseIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    targetRootDbIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    multiWrite_ = false;
    multiWriteIsSet_ = false;
    supportIpV6_ = false;
    supportIpV6IsSet_ = false;
    inheritId_ = "";
    inheritIdIsSet_ = false;
    gtid_ = "";
    gtidIsSet_ = false;
    alarmNotifyIsSet_ = false;
    increStartPosition_ = "";
    increStartPositionIsSet_ = false;
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
    azName_ = "";
    azNameIsSet_ = false;
    masterAz_ = "";
    masterAzIsSet_ = false;
    slaveAz_ = "";
    slaveAzIsSet_ = false;
    nodeRole_ = "";
    nodeRoleIsSet_ = false;
    periodOrderIsSet_ = false;
    objectInfosIsSet_ = false;
    originalJobDirection_ = "";
    originalJobDirectionIsSet_ = false;
    dataTransformationIsSet_ = false;
    tagsIsSet_ = false;
}

QueryJobResp::~QueryJobResp() = default;

void QueryJobResp::validate()
{
}

web::json::value QueryJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(dmqEndpointIsSet_) {
        val[utility::conversions::to_string_t("dmq_endpoint")] = ModelBase::toJson(dmqEndpoint_);
    }
    if(sourceShardingIsSet_) {
        val[utility::conversions::to_string_t("source_sharding")] = ModelBase::toJson(sourceSharding_);
    }
    if(targetEndpointIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint")] = ModelBase::toJson(targetEndpoint_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(failedReasonIsSet_) {
        val[utility::conversions::to_string_t("failed_reason")] = ModelBase::toJson(failedReason_);
    }
    if(instInfoIsSet_) {
        val[utility::conversions::to_string_t("inst_info")] = ModelBase::toJson(instInfo_);
    }
    if(actualStartTimeIsSet_) {
        val[utility::conversions::to_string_t("actual_start_time")] = ModelBase::toJson(actualStartTime_);
    }
    if(fullTransferCompleteTimeIsSet_) {
        val[utility::conversions::to_string_t("full_transfer_complete_time")] = ModelBase::toJson(fullTransferCompleteTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }
    if(isTargetReadonlyIsSet_) {
        val[utility::conversions::to_string_t("is_target_readonly")] = ModelBase::toJson(isTargetReadonly_);
    }
    if(conflictPolicyIsSet_) {
        val[utility::conversions::to_string_t("conflict_policy")] = ModelBase::toJson(conflictPolicy_);
    }
    if(filterDdlPolicyIsSet_) {
        val[utility::conversions::to_string_t("filter_ddl_policy")] = ModelBase::toJson(filterDdlPolicy_);
    }
    if(speedLimitIsSet_) {
        val[utility::conversions::to_string_t("speed_limit")] = ModelBase::toJson(speedLimit_);
    }
    if(schemaTypeIsSet_) {
        val[utility::conversions::to_string_t("schema_type")] = ModelBase::toJson(schemaType_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(objectSwitchIsSet_) {
        val[utility::conversions::to_string_t("object_switch")] = ModelBase::toJson(objectSwitch_);
    }
    if(masterJobIdIsSet_) {
        val[utility::conversions::to_string_t("master_job_id")] = ModelBase::toJson(masterJobId_);
    }
    if(fullModeIsSet_) {
        val[utility::conversions::to_string_t("full_mode")] = ModelBase::toJson(fullMode_);
    }
    if(structTransIsSet_) {
        val[utility::conversions::to_string_t("struct_trans")] = ModelBase::toJson(structTrans_);
    }
    if(indexTransIsSet_) {
        val[utility::conversions::to_string_t("index_trans")] = ModelBase::toJson(indexTrans_);
    }
    if(replaceDefinerIsSet_) {
        val[utility::conversions::to_string_t("replace_definer")] = ModelBase::toJson(replaceDefiner_);
    }
    if(migrateUserIsSet_) {
        val[utility::conversions::to_string_t("migrate_user")] = ModelBase::toJson(migrateUser_);
    }
    if(syncDatabaseIsSet_) {
        val[utility::conversions::to_string_t("sync_database")] = ModelBase::toJson(syncDatabase_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(targetRootDbIsSet_) {
        val[utility::conversions::to_string_t("target_root_db")] = ModelBase::toJson(targetRootDb_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(multiWriteIsSet_) {
        val[utility::conversions::to_string_t("multi_write")] = ModelBase::toJson(multiWrite_);
    }
    if(supportIpV6IsSet_) {
        val[utility::conversions::to_string_t("support_ip_v6")] = ModelBase::toJson(supportIpV6_);
    }
    if(inheritIdIsSet_) {
        val[utility::conversions::to_string_t("inherit_id")] = ModelBase::toJson(inheritId_);
    }
    if(gtidIsSet_) {
        val[utility::conversions::to_string_t("gtid")] = ModelBase::toJson(gtid_);
    }
    if(alarmNotifyIsSet_) {
        val[utility::conversions::to_string_t("alarm_notify")] = ModelBase::toJson(alarmNotify_);
    }
    if(increStartPositionIsSet_) {
        val[utility::conversions::to_string_t("incre_start_position")] = ModelBase::toJson(increStartPosition_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }
    if(azNameIsSet_) {
        val[utility::conversions::to_string_t("az_name")] = ModelBase::toJson(azName_);
    }
    if(masterAzIsSet_) {
        val[utility::conversions::to_string_t("master_az")] = ModelBase::toJson(masterAz_);
    }
    if(slaveAzIsSet_) {
        val[utility::conversions::to_string_t("slave_az")] = ModelBase::toJson(slaveAz_);
    }
    if(nodeRoleIsSet_) {
        val[utility::conversions::to_string_t("node_role")] = ModelBase::toJson(nodeRole_);
    }
    if(periodOrderIsSet_) {
        val[utility::conversions::to_string_t("period_order")] = ModelBase::toJson(periodOrder_);
    }
    if(objectInfosIsSet_) {
        val[utility::conversions::to_string_t("object_infos")] = ModelBase::toJson(objectInfos_);
    }
    if(originalJobDirectionIsSet_) {
        val[utility::conversions::to_string_t("original_job_direction")] = ModelBase::toJson(originalJobDirection_);
    }
    if(dataTransformationIsSet_) {
        val[utility::conversions::to_string_t("data_transformation")] = ModelBase::toJson(dataTransformation_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool QueryJobResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint"));
        if(!fieldValue.is_null())
        {
            Endpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dmq_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dmq_endpoint"));
        if(!fieldValue.is_null())
        {
            Endpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDmqEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_sharding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_sharding"));
        if(!fieldValue.is_null())
        {
            std::vector<Endpoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSharding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_endpoint"));
        if(!fieldValue.is_null())
        {
            Endpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inst_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inst_info"));
        if(!fieldValue.is_null())
        {
            InstInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_transfer_complete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_transfer_complete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullTransferCompleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_target_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_ddl_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_ddl_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterDdlPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed_limit"));
        if(!fieldValue.is_null())
        {
            std::vector<SpeedLimitInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeedLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("struct_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("struct_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace_definer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_definer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceDefiner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrate_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrate_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_database"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_root_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_root_db"));
        if(!fieldValue.is_null())
        {
            DefaultRootDb refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRootDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_write"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiWrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_ip_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_ip_v6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportIpV6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gtid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gtid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGtid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_notify"));
        if(!fieldValue.is_null())
        {
            QuerySmnInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_start_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_start_position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreStartPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_order"));
        if(!fieldValue.is_null())
        {
            PeriodOrderResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_transformation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_transformation"));
        if(!fieldValue.is_null())
        {
            GetDataTransformationResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataTransformation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string QueryJobResp::getId() const
{
    return id_;
}

void QueryJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryJobResp::idIsSet() const
{
    return idIsSet_;
}

void QueryJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string QueryJobResp::getParentId() const
{
    return parentId_;
}

void QueryJobResp::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool QueryJobResp::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void QueryJobResp::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string QueryJobResp::getName() const
{
    return name_;
}

void QueryJobResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryJobResp::nameIsSet() const
{
    return nameIsSet_;
}

void QueryJobResp::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryJobResp::getStatus() const
{
    return status_;
}

void QueryJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void QueryJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryJobResp::getDescription() const
{
    return description_;
}

void QueryJobResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryJobResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryJobResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QueryJobResp::getCreateTime() const
{
    return createTime_;
}

void QueryJobResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryJobResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryJobResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QueryJobResp::getTaskType() const
{
    return taskType_;
}

void QueryJobResp::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool QueryJobResp::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void QueryJobResp::unsettaskType()
{
    taskTypeIsSet_ = false;
}

Endpoint QueryJobResp::getSourceEndpoint() const
{
    return sourceEndpoint_;
}

void QueryJobResp::setSourceEndpoint(const Endpoint& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool QueryJobResp::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void QueryJobResp::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

Endpoint QueryJobResp::getDmqEndpoint() const
{
    return dmqEndpoint_;
}

void QueryJobResp::setDmqEndpoint(const Endpoint& value)
{
    dmqEndpoint_ = value;
    dmqEndpointIsSet_ = true;
}

bool QueryJobResp::dmqEndpointIsSet() const
{
    return dmqEndpointIsSet_;
}

void QueryJobResp::unsetdmqEndpoint()
{
    dmqEndpointIsSet_ = false;
}

std::vector<Endpoint>& QueryJobResp::getSourceSharding()
{
    return sourceSharding_;
}

void QueryJobResp::setSourceSharding(const std::vector<Endpoint>& value)
{
    sourceSharding_ = value;
    sourceShardingIsSet_ = true;
}

bool QueryJobResp::sourceShardingIsSet() const
{
    return sourceShardingIsSet_;
}

void QueryJobResp::unsetsourceSharding()
{
    sourceShardingIsSet_ = false;
}

Endpoint QueryJobResp::getTargetEndpoint() const
{
    return targetEndpoint_;
}

void QueryJobResp::setTargetEndpoint(const Endpoint& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool QueryJobResp::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void QueryJobResp::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

std::string QueryJobResp::getNetType() const
{
    return netType_;
}

void QueryJobResp::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool QueryJobResp::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void QueryJobResp::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string QueryJobResp::getFailedReason() const
{
    return failedReason_;
}

void QueryJobResp::setFailedReason(const std::string& value)
{
    failedReason_ = value;
    failedReasonIsSet_ = true;
}

bool QueryJobResp::failedReasonIsSet() const
{
    return failedReasonIsSet_;
}

void QueryJobResp::unsetfailedReason()
{
    failedReasonIsSet_ = false;
}

InstInfo QueryJobResp::getInstInfo() const
{
    return instInfo_;
}

void QueryJobResp::setInstInfo(const InstInfo& value)
{
    instInfo_ = value;
    instInfoIsSet_ = true;
}

bool QueryJobResp::instInfoIsSet() const
{
    return instInfoIsSet_;
}

void QueryJobResp::unsetinstInfo()
{
    instInfoIsSet_ = false;
}

std::string QueryJobResp::getActualStartTime() const
{
    return actualStartTime_;
}

void QueryJobResp::setActualStartTime(const std::string& value)
{
    actualStartTime_ = value;
    actualStartTimeIsSet_ = true;
}

bool QueryJobResp::actualStartTimeIsSet() const
{
    return actualStartTimeIsSet_;
}

void QueryJobResp::unsetactualStartTime()
{
    actualStartTimeIsSet_ = false;
}

std::string QueryJobResp::getFullTransferCompleteTime() const
{
    return fullTransferCompleteTime_;
}

void QueryJobResp::setFullTransferCompleteTime(const std::string& value)
{
    fullTransferCompleteTime_ = value;
    fullTransferCompleteTimeIsSet_ = true;
}

bool QueryJobResp::fullTransferCompleteTimeIsSet() const
{
    return fullTransferCompleteTimeIsSet_;
}

void QueryJobResp::unsetfullTransferCompleteTime()
{
    fullTransferCompleteTimeIsSet_ = false;
}

std::string QueryJobResp::getUpdateTime() const
{
    return updateTime_;
}

void QueryJobResp::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool QueryJobResp::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void QueryJobResp::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string QueryJobResp::getJobDirection() const
{
    return jobDirection_;
}

void QueryJobResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool QueryJobResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void QueryJobResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string QueryJobResp::getDbUseType() const
{
    return dbUseType_;
}

void QueryJobResp::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool QueryJobResp::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void QueryJobResp::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

bool QueryJobResp::isNeedRestart() const
{
    return needRestart_;
}

void QueryJobResp::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool QueryJobResp::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void QueryJobResp::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

bool QueryJobResp::isIsTargetReadonly() const
{
    return isTargetReadonly_;
}

void QueryJobResp::setIsTargetReadonly(bool value)
{
    isTargetReadonly_ = value;
    isTargetReadonlyIsSet_ = true;
}

bool QueryJobResp::isTargetReadonlyIsSet() const
{
    return isTargetReadonlyIsSet_;
}

void QueryJobResp::unsetisTargetReadonly()
{
    isTargetReadonlyIsSet_ = false;
}

std::string QueryJobResp::getConflictPolicy() const
{
    return conflictPolicy_;
}

void QueryJobResp::setConflictPolicy(const std::string& value)
{
    conflictPolicy_ = value;
    conflictPolicyIsSet_ = true;
}

bool QueryJobResp::conflictPolicyIsSet() const
{
    return conflictPolicyIsSet_;
}

void QueryJobResp::unsetconflictPolicy()
{
    conflictPolicyIsSet_ = false;
}

std::string QueryJobResp::getFilterDdlPolicy() const
{
    return filterDdlPolicy_;
}

void QueryJobResp::setFilterDdlPolicy(const std::string& value)
{
    filterDdlPolicy_ = value;
    filterDdlPolicyIsSet_ = true;
}

bool QueryJobResp::filterDdlPolicyIsSet() const
{
    return filterDdlPolicyIsSet_;
}

void QueryJobResp::unsetfilterDdlPolicy()
{
    filterDdlPolicyIsSet_ = false;
}

std::vector<SpeedLimitInfo>& QueryJobResp::getSpeedLimit()
{
    return speedLimit_;
}

void QueryJobResp::setSpeedLimit(const std::vector<SpeedLimitInfo>& value)
{
    speedLimit_ = value;
    speedLimitIsSet_ = true;
}

bool QueryJobResp::speedLimitIsSet() const
{
    return speedLimitIsSet_;
}

void QueryJobResp::unsetspeedLimit()
{
    speedLimitIsSet_ = false;
}

std::string QueryJobResp::getSchemaType() const
{
    return schemaType_;
}

void QueryJobResp::setSchemaType(const std::string& value)
{
    schemaType_ = value;
    schemaTypeIsSet_ = true;
}

bool QueryJobResp::schemaTypeIsSet() const
{
    return schemaTypeIsSet_;
}

void QueryJobResp::unsetschemaType()
{
    schemaTypeIsSet_ = false;
}

std::string QueryJobResp::getNodeNum() const
{
    return nodeNum_;
}

void QueryJobResp::setNodeNum(const std::string& value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool QueryJobResp::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void QueryJobResp::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

bool QueryJobResp::isObjectSwitch() const
{
    return objectSwitch_;
}

void QueryJobResp::setObjectSwitch(bool value)
{
    objectSwitch_ = value;
    objectSwitchIsSet_ = true;
}

bool QueryJobResp::objectSwitchIsSet() const
{
    return objectSwitchIsSet_;
}

void QueryJobResp::unsetobjectSwitch()
{
    objectSwitchIsSet_ = false;
}

std::string QueryJobResp::getMasterJobId() const
{
    return masterJobId_;
}

void QueryJobResp::setMasterJobId(const std::string& value)
{
    masterJobId_ = value;
    masterJobIdIsSet_ = true;
}

bool QueryJobResp::masterJobIdIsSet() const
{
    return masterJobIdIsSet_;
}

void QueryJobResp::unsetmasterJobId()
{
    masterJobIdIsSet_ = false;
}

std::string QueryJobResp::getFullMode() const
{
    return fullMode_;
}

void QueryJobResp::setFullMode(const std::string& value)
{
    fullMode_ = value;
    fullModeIsSet_ = true;
}

bool QueryJobResp::fullModeIsSet() const
{
    return fullModeIsSet_;
}

void QueryJobResp::unsetfullMode()
{
    fullModeIsSet_ = false;
}

bool QueryJobResp::isStructTrans() const
{
    return structTrans_;
}

void QueryJobResp::setStructTrans(bool value)
{
    structTrans_ = value;
    structTransIsSet_ = true;
}

bool QueryJobResp::structTransIsSet() const
{
    return structTransIsSet_;
}

void QueryJobResp::unsetstructTrans()
{
    structTransIsSet_ = false;
}

bool QueryJobResp::isIndexTrans() const
{
    return indexTrans_;
}

void QueryJobResp::setIndexTrans(bool value)
{
    indexTrans_ = value;
    indexTransIsSet_ = true;
}

bool QueryJobResp::indexTransIsSet() const
{
    return indexTransIsSet_;
}

void QueryJobResp::unsetindexTrans()
{
    indexTransIsSet_ = false;
}

bool QueryJobResp::isReplaceDefiner() const
{
    return replaceDefiner_;
}

void QueryJobResp::setReplaceDefiner(bool value)
{
    replaceDefiner_ = value;
    replaceDefinerIsSet_ = true;
}

bool QueryJobResp::replaceDefinerIsSet() const
{
    return replaceDefinerIsSet_;
}

void QueryJobResp::unsetreplaceDefiner()
{
    replaceDefinerIsSet_ = false;
}

bool QueryJobResp::isMigrateUser() const
{
    return migrateUser_;
}

void QueryJobResp::setMigrateUser(bool value)
{
    migrateUser_ = value;
    migrateUserIsSet_ = true;
}

bool QueryJobResp::migrateUserIsSet() const
{
    return migrateUserIsSet_;
}

void QueryJobResp::unsetmigrateUser()
{
    migrateUserIsSet_ = false;
}

bool QueryJobResp::isSyncDatabase() const
{
    return syncDatabase_;
}

void QueryJobResp::setSyncDatabase(bool value)
{
    syncDatabase_ = value;
    syncDatabaseIsSet_ = true;
}

bool QueryJobResp::syncDatabaseIsSet() const
{
    return syncDatabaseIsSet_;
}

void QueryJobResp::unsetsyncDatabase()
{
    syncDatabaseIsSet_ = false;
}

std::string QueryJobResp::getErrorCode() const
{
    return errorCode_;
}

void QueryJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryJobResp::getErrorMessage() const
{
    return errorMessage_;
}

void QueryJobResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool QueryJobResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void QueryJobResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

DefaultRootDb QueryJobResp::getTargetRootDb() const
{
    return targetRootDb_;
}

void QueryJobResp::setTargetRootDb(const DefaultRootDb& value)
{
    targetRootDb_ = value;
    targetRootDbIsSet_ = true;
}

bool QueryJobResp::targetRootDbIsSet() const
{
    return targetRootDbIsSet_;
}

void QueryJobResp::unsettargetRootDb()
{
    targetRootDbIsSet_ = false;
}

std::string QueryJobResp::getAzCode() const
{
    return azCode_;
}

void QueryJobResp::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool QueryJobResp::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void QueryJobResp::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string QueryJobResp::getVpcId() const
{
    return vpcId_;
}

void QueryJobResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool QueryJobResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void QueryJobResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string QueryJobResp::getSubnetId() const
{
    return subnetId_;
}

void QueryJobResp::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool QueryJobResp::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void QueryJobResp::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string QueryJobResp::getSecurityGroupId() const
{
    return securityGroupId_;
}

void QueryJobResp::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool QueryJobResp::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void QueryJobResp::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

bool QueryJobResp::isMultiWrite() const
{
    return multiWrite_;
}

void QueryJobResp::setMultiWrite(bool value)
{
    multiWrite_ = value;
    multiWriteIsSet_ = true;
}

bool QueryJobResp::multiWriteIsSet() const
{
    return multiWriteIsSet_;
}

void QueryJobResp::unsetmultiWrite()
{
    multiWriteIsSet_ = false;
}

bool QueryJobResp::isSupportIpV6() const
{
    return supportIpV6_;
}

void QueryJobResp::setSupportIpV6(bool value)
{
    supportIpV6_ = value;
    supportIpV6IsSet_ = true;
}

bool QueryJobResp::supportIpV6IsSet() const
{
    return supportIpV6IsSet_;
}

void QueryJobResp::unsetsupportIpV6()
{
    supportIpV6IsSet_ = false;
}

std::string QueryJobResp::getInheritId() const
{
    return inheritId_;
}

void QueryJobResp::setInheritId(const std::string& value)
{
    inheritId_ = value;
    inheritIdIsSet_ = true;
}

bool QueryJobResp::inheritIdIsSet() const
{
    return inheritIdIsSet_;
}

void QueryJobResp::unsetinheritId()
{
    inheritIdIsSet_ = false;
}

std::string QueryJobResp::getGtid() const
{
    return gtid_;
}

void QueryJobResp::setGtid(const std::string& value)
{
    gtid_ = value;
    gtidIsSet_ = true;
}

bool QueryJobResp::gtidIsSet() const
{
    return gtidIsSet_;
}

void QueryJobResp::unsetgtid()
{
    gtidIsSet_ = false;
}

QuerySmnInfoResp QueryJobResp::getAlarmNotify() const
{
    return alarmNotify_;
}

void QueryJobResp::setAlarmNotify(const QuerySmnInfoResp& value)
{
    alarmNotify_ = value;
    alarmNotifyIsSet_ = true;
}

bool QueryJobResp::alarmNotifyIsSet() const
{
    return alarmNotifyIsSet_;
}

void QueryJobResp::unsetalarmNotify()
{
    alarmNotifyIsSet_ = false;
}

std::string QueryJobResp::getIncreStartPosition() const
{
    return increStartPosition_;
}

void QueryJobResp::setIncreStartPosition(const std::string& value)
{
    increStartPosition_ = value;
    increStartPositionIsSet_ = true;
}

bool QueryJobResp::increStartPositionIsSet() const
{
    return increStartPositionIsSet_;
}

void QueryJobResp::unsetincreStartPosition()
{
    increStartPositionIsSet_ = false;
}

bool QueryJobResp::isIsMultiAz() const
{
    return isMultiAz_;
}

void QueryJobResp::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool QueryJobResp::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void QueryJobResp::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

std::string QueryJobResp::getAzName() const
{
    return azName_;
}

void QueryJobResp::setAzName(const std::string& value)
{
    azName_ = value;
    azNameIsSet_ = true;
}

bool QueryJobResp::azNameIsSet() const
{
    return azNameIsSet_;
}

void QueryJobResp::unsetazName()
{
    azNameIsSet_ = false;
}

std::string QueryJobResp::getMasterAz() const
{
    return masterAz_;
}

void QueryJobResp::setMasterAz(const std::string& value)
{
    masterAz_ = value;
    masterAzIsSet_ = true;
}

bool QueryJobResp::masterAzIsSet() const
{
    return masterAzIsSet_;
}

void QueryJobResp::unsetmasterAz()
{
    masterAzIsSet_ = false;
}

std::string QueryJobResp::getSlaveAz() const
{
    return slaveAz_;
}

void QueryJobResp::setSlaveAz(const std::string& value)
{
    slaveAz_ = value;
    slaveAzIsSet_ = true;
}

bool QueryJobResp::slaveAzIsSet() const
{
    return slaveAzIsSet_;
}

void QueryJobResp::unsetslaveAz()
{
    slaveAzIsSet_ = false;
}

std::string QueryJobResp::getNodeRole() const
{
    return nodeRole_;
}

void QueryJobResp::setNodeRole(const std::string& value)
{
    nodeRole_ = value;
    nodeRoleIsSet_ = true;
}

bool QueryJobResp::nodeRoleIsSet() const
{
    return nodeRoleIsSet_;
}

void QueryJobResp::unsetnodeRole()
{
    nodeRoleIsSet_ = false;
}

PeriodOrderResp QueryJobResp::getPeriodOrder() const
{
    return periodOrder_;
}

void QueryJobResp::setPeriodOrder(const PeriodOrderResp& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool QueryJobResp::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void QueryJobResp::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

std::vector<DatabaseObjectInfo>& QueryJobResp::getObjectInfos()
{
    return objectInfos_;
}

void QueryJobResp::setObjectInfos(const std::vector<DatabaseObjectInfo>& value)
{
    objectInfos_ = value;
    objectInfosIsSet_ = true;
}

bool QueryJobResp::objectInfosIsSet() const
{
    return objectInfosIsSet_;
}

void QueryJobResp::unsetobjectInfos()
{
    objectInfosIsSet_ = false;
}

std::string QueryJobResp::getOriginalJobDirection() const
{
    return originalJobDirection_;
}

void QueryJobResp::setOriginalJobDirection(const std::string& value)
{
    originalJobDirection_ = value;
    originalJobDirectionIsSet_ = true;
}

bool QueryJobResp::originalJobDirectionIsSet() const
{
    return originalJobDirectionIsSet_;
}

void QueryJobResp::unsetoriginalJobDirection()
{
    originalJobDirectionIsSet_ = false;
}

GetDataTransformationResp QueryJobResp::getDataTransformation() const
{
    return dataTransformation_;
}

void QueryJobResp::setDataTransformation(const GetDataTransformationResp& value)
{
    dataTransformation_ = value;
    dataTransformationIsSet_ = true;
}

bool QueryJobResp::dataTransformationIsSet() const
{
    return dataTransformationIsSet_;
}

void QueryJobResp::unsetdataTransformation()
{
    dataTransformationIsSet_ = false;
}

std::vector<Tag>& QueryJobResp::getTags()
{
    return tags_;
}

void QueryJobResp::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryJobResp::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryJobResp::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


