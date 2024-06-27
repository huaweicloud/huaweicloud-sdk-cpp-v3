

#include "huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstancesInfoRsponse_instance::ChInstancesInfoRsponse_instance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    canEnablePublicAccess_ = false;
    canEnablePublicAccessIsSet_ = false;
    currentBackupNodeId_ = "";
    currentBackupNodeIdIsSet_ = false;
    clusterMode_ = "";
    clusterModeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    isFrozen_ = 0;
    isFrozenIsSet_ = false;
    frozenTime_ = "";
    frozenTimeIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    bakPeriod_ = "";
    bakPeriodIsSet_ = false;
    bakKeepDay_ = 0;
    bakKeepDayIsSet_ = false;
    bakExpectedStartTime_ = "";
    bakExpectedStartTimeIsSet_ = false;
    datastoreVersionId_ = "";
    datastoreVersionIdIsSet_ = false;
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    deleteAt_ = 0L;
    deleteAtIsSet_ = false;
    dbPort_ = "";
    dbPortIsSet_ = false;
    paramGroupIsSet_ = false;
    actionsIsSet_ = false;
    createFailErrorCode_ = "";
    createFailErrorCodeIsSet_ = false;
    groupsIsSet_ = false;
    opsWindowIsSet_ = false;
    tagsInfoIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    backupUsedSpace_ = "";
    backupUsedSpaceIsSet_ = false;
    azMode_ = "";
    azModeIsSet_ = false;
    masterAzCode_ = "";
    masterAzCodeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    portInfoIsSet_ = false;
    volumeCode_ = "";
    volumeCodeIsSet_ = false;
    supportDataReplication_ = false;
    supportDataReplicationIsSet_ = false;
    newVersionAvailable_ = false;
    newVersionAvailableIsSet_ = false;
    sslOption_ = false;
    sslOptionIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    payModel_ = "";
    payModelIsSet_ = false;
}

ChInstancesInfoRsponse_instance::~ChInstancesInfoRsponse_instance() = default;

void ChInstancesInfoRsponse_instance::validate()
{
}

web::json::value ChInstancesInfoRsponse_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(canEnablePublicAccessIsSet_) {
        val[utility::conversions::to_string_t("can_enable_public_access")] = ModelBase::toJson(canEnablePublicAccess_);
    }
    if(currentBackupNodeIdIsSet_) {
        val[utility::conversions::to_string_t("current_backup_node_id")] = ModelBase::toJson(currentBackupNodeId_);
    }
    if(clusterModeIsSet_) {
        val[utility::conversions::to_string_t("cluster_mode")] = ModelBase::toJson(clusterMode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isFrozenIsSet_) {
        val[utility::conversions::to_string_t("is_frozen")] = ModelBase::toJson(isFrozen_);
    }
    if(frozenTimeIsSet_) {
        val[utility::conversions::to_string_t("frozen_time")] = ModelBase::toJson(frozenTime_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(bakPeriodIsSet_) {
        val[utility::conversions::to_string_t("bak_period")] = ModelBase::toJson(bakPeriod_);
    }
    if(bakKeepDayIsSet_) {
        val[utility::conversions::to_string_t("bak_keep_day")] = ModelBase::toJson(bakKeepDay_);
    }
    if(bakExpectedStartTimeIsSet_) {
        val[utility::conversions::to_string_t("bak_expected_start_time")] = ModelBase::toJson(bakExpectedStartTime_);
    }
    if(datastoreVersionIdIsSet_) {
        val[utility::conversions::to_string_t("datastore_version_id")] = ModelBase::toJson(datastoreVersionId_);
    }
    if(datastoreVersionIsSet_) {
        val[utility::conversions::to_string_t("datastore_version")] = ModelBase::toJson(datastoreVersion_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(deleteAtIsSet_) {
        val[utility::conversions::to_string_t("delete_at")] = ModelBase::toJson(deleteAt_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(paramGroupIsSet_) {
        val[utility::conversions::to_string_t("param_group")] = ModelBase::toJson(paramGroup_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(createFailErrorCodeIsSet_) {
        val[utility::conversions::to_string_t("create_fail_error_code")] = ModelBase::toJson(createFailErrorCode_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(opsWindowIsSet_) {
        val[utility::conversions::to_string_t("ops_window")] = ModelBase::toJson(opsWindow_);
    }
    if(tagsInfoIsSet_) {
        val[utility::conversions::to_string_t("tags_info")] = ModelBase::toJson(tagsInfo_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(backupUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_used_space")] = ModelBase::toJson(backupUsedSpace_);
    }
    if(azModeIsSet_) {
        val[utility::conversions::to_string_t("az_mode")] = ModelBase::toJson(azMode_);
    }
    if(masterAzCodeIsSet_) {
        val[utility::conversions::to_string_t("master_az_code")] = ModelBase::toJson(masterAzCode_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(portInfoIsSet_) {
        val[utility::conversions::to_string_t("port_info")] = ModelBase::toJson(portInfo_);
    }
    if(volumeCodeIsSet_) {
        val[utility::conversions::to_string_t("volume_code")] = ModelBase::toJson(volumeCode_);
    }
    if(supportDataReplicationIsSet_) {
        val[utility::conversions::to_string_t("support_data_replication")] = ModelBase::toJson(supportDataReplication_);
    }
    if(newVersionAvailableIsSet_) {
        val[utility::conversions::to_string_t("new_version_available")] = ModelBase::toJson(newVersionAvailable_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }

    return val;
}
bool ChInstancesInfoRsponse_instance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_enable_public_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_enable_public_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEnablePublicAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_backup_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_backup_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentBackupNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_frozen"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFrozen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_keep_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_keep_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakKeepDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_expected_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_expected_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakExpectedStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_group"));
        if(!fieldValue.is_null())
        {
            ChInstancesInfoRsponse_instance_param_group refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ChQueryActionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_fail_error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_fail_error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateFailErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ChInstancesInfoRsponse_instance_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ops_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ops_window"));
        if(!fieldValue.is_null())
        {
            ChInstancesInfoRsponse_instance_ops_window refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpsWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_info"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceInfo_tags_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_used_space"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUsedSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_info"));
        if(!fieldValue.is_null())
        {
            ChInstancesInfoRsponse_instance_port_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_data_replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_data_replication"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportDataReplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_version_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_version_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewVersionAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayModel(refVal);
        }
    }
    return ok;
}


std::string ChInstancesInfoRsponse_instance::getId() const
{
    return id_;
}

void ChInstancesInfoRsponse_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::idIsSet() const
{
    return idIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetid()
{
    idIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getName() const
{
    return name_;
}

void ChInstancesInfoRsponse_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::nameIsSet() const
{
    return nameIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetname()
{
    nameIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getProjectId() const
{
    return projectId_;
}

void ChInstancesInfoRsponse_instance::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getPublicIp() const
{
    return publicIp_;
}

void ChInstancesInfoRsponse_instance::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

bool ChInstancesInfoRsponse_instance::isCanEnablePublicAccess() const
{
    return canEnablePublicAccess_;
}

void ChInstancesInfoRsponse_instance::setCanEnablePublicAccess(bool value)
{
    canEnablePublicAccess_ = value;
    canEnablePublicAccessIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::canEnablePublicAccessIsSet() const
{
    return canEnablePublicAccessIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetcanEnablePublicAccess()
{
    canEnablePublicAccessIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getCurrentBackupNodeId() const
{
    return currentBackupNodeId_;
}

void ChInstancesInfoRsponse_instance::setCurrentBackupNodeId(const std::string& value)
{
    currentBackupNodeId_ = value;
    currentBackupNodeIdIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::currentBackupNodeIdIsSet() const
{
    return currentBackupNodeIdIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetcurrentBackupNodeId()
{
    currentBackupNodeIdIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getClusterMode() const
{
    return clusterMode_;
}

void ChInstancesInfoRsponse_instance::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getStatus() const
{
    return status_;
}

void ChInstancesInfoRsponse_instance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::statusIsSet() const
{
    return statusIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance::getIsFrozen() const
{
    return isFrozen_;
}

void ChInstancesInfoRsponse_instance::setIsFrozen(int32_t value)
{
    isFrozen_ = value;
    isFrozenIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::isFrozenIsSet() const
{
    return isFrozenIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetisFrozen()
{
    isFrozenIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getFrozenTime() const
{
    return frozenTime_;
}

void ChInstancesInfoRsponse_instance::setFrozenTime(const std::string& value)
{
    frozenTime_ = value;
    frozenTimeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::frozenTimeIsSet() const
{
    return frozenTimeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetfrozenTime()
{
    frozenTimeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDbUser() const
{
    return dbUser_;
}

void ChInstancesInfoRsponse_instance::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getBakPeriod() const
{
    return bakPeriod_;
}

void ChInstancesInfoRsponse_instance::setBakPeriod(const std::string& value)
{
    bakPeriod_ = value;
    bakPeriodIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::bakPeriodIsSet() const
{
    return bakPeriodIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetbakPeriod()
{
    bakPeriodIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance::getBakKeepDay() const
{
    return bakKeepDay_;
}

void ChInstancesInfoRsponse_instance::setBakKeepDay(int32_t value)
{
    bakKeepDay_ = value;
    bakKeepDayIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::bakKeepDayIsSet() const
{
    return bakKeepDayIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetbakKeepDay()
{
    bakKeepDayIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getBakExpectedStartTime() const
{
    return bakExpectedStartTime_;
}

void ChInstancesInfoRsponse_instance::setBakExpectedStartTime(const std::string& value)
{
    bakExpectedStartTime_ = value;
    bakExpectedStartTimeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::bakExpectedStartTimeIsSet() const
{
    return bakExpectedStartTimeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetbakExpectedStartTime()
{
    bakExpectedStartTimeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDatastoreVersionId() const
{
    return datastoreVersionId_;
}

void ChInstancesInfoRsponse_instance::setDatastoreVersionId(const std::string& value)
{
    datastoreVersionId_ = value;
    datastoreVersionIdIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::datastoreVersionIdIsSet() const
{
    return datastoreVersionIdIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdatastoreVersionId()
{
    datastoreVersionIdIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ChInstancesInfoRsponse_instance::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDatastoreType() const
{
    return datastoreType_;
}

void ChInstancesInfoRsponse_instance::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

int64_t ChInstancesInfoRsponse_instance::getCreateAt() const
{
    return createAt_;
}

void ChInstancesInfoRsponse_instance::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::createAtIsSet() const
{
    return createAtIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ChInstancesInfoRsponse_instance::getUpdateAt() const
{
    return updateAt_;
}

void ChInstancesInfoRsponse_instance::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

int64_t ChInstancesInfoRsponse_instance::getDeleteAt() const
{
    return deleteAt_;
}

void ChInstancesInfoRsponse_instance::setDeleteAt(int64_t value)
{
    deleteAt_ = value;
    deleteAtIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::deleteAtIsSet() const
{
    return deleteAtIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdeleteAt()
{
    deleteAtIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDbPort() const
{
    return dbPort_;
}

void ChInstancesInfoRsponse_instance::setDbPort(const std::string& value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdbPort()
{
    dbPortIsSet_ = false;
}

ChInstancesInfoRsponse_instance_param_group ChInstancesInfoRsponse_instance::getParamGroup() const
{
    return paramGroup_;
}

void ChInstancesInfoRsponse_instance::setParamGroup(const ChInstancesInfoRsponse_instance_param_group& value)
{
    paramGroup_ = value;
    paramGroupIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::paramGroupIsSet() const
{
    return paramGroupIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetparamGroup()
{
    paramGroupIsSet_ = false;
}

std::vector<ChQueryActionInfo>& ChInstancesInfoRsponse_instance::getActions()
{
    return actions_;
}

void ChInstancesInfoRsponse_instance::setActions(const std::vector<ChQueryActionInfo>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::actionsIsSet() const
{
    return actionsIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetactions()
{
    actionsIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getCreateFailErrorCode() const
{
    return createFailErrorCode_;
}

void ChInstancesInfoRsponse_instance::setCreateFailErrorCode(const std::string& value)
{
    createFailErrorCode_ = value;
    createFailErrorCodeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::createFailErrorCodeIsSet() const
{
    return createFailErrorCodeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetcreateFailErrorCode()
{
    createFailErrorCodeIsSet_ = false;
}

std::vector<ChInstancesInfoRsponse_instance_groups>& ChInstancesInfoRsponse_instance::getGroups()
{
    return groups_;
}

void ChInstancesInfoRsponse_instance::setGroups(const std::vector<ChInstancesInfoRsponse_instance_groups>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::groupsIsSet() const
{
    return groupsIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetgroups()
{
    groupsIsSet_ = false;
}

ChInstancesInfoRsponse_instance_ops_window ChInstancesInfoRsponse_instance::getOpsWindow() const
{
    return opsWindow_;
}

void ChInstancesInfoRsponse_instance::setOpsWindow(const ChInstancesInfoRsponse_instance_ops_window& value)
{
    opsWindow_ = value;
    opsWindowIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::opsWindowIsSet() const
{
    return opsWindowIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetopsWindow()
{
    opsWindowIsSet_ = false;
}

CreateChInstanceInfo_tags_info ChInstancesInfoRsponse_instance::getTagsInfo() const
{
    return tagsInfo_;
}

void ChInstancesInfoRsponse_instance::setTagsInfo(const CreateChInstanceInfo_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void ChInstancesInfoRsponse_instance::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getTimeZone() const
{
    return timeZone_;
}

void ChInstancesInfoRsponse_instance::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ChInstancesInfoRsponse_instance::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void ChInstancesInfoRsponse_instance::setBackupUsedSpace(const std::string& value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getAzMode() const
{
    return azMode_;
}

void ChInstancesInfoRsponse_instance::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::azModeIsSet() const
{
    return azModeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetazMode()
{
    azModeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getMasterAzCode() const
{
    return masterAzCode_;
}

void ChInstancesInfoRsponse_instance::setMasterAzCode(const std::string& value)
{
    masterAzCode_ = value;
    masterAzCodeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::masterAzCodeIsSet() const
{
    return masterAzCodeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetmasterAzCode()
{
    masterAzCodeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChInstancesInfoRsponse_instance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ChInstancesInfoRsponse_instance_port_info ChInstancesInfoRsponse_instance::getPortInfo() const
{
    return portInfo_;
}

void ChInstancesInfoRsponse_instance::setPortInfo(const ChInstancesInfoRsponse_instance_port_info& value)
{
    portInfo_ = value;
    portInfoIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::portInfoIsSet() const
{
    return portInfoIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetportInfo()
{
    portInfoIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getVolumeCode() const
{
    return volumeCode_;
}

void ChInstancesInfoRsponse_instance::setVolumeCode(const std::string& value)
{
    volumeCode_ = value;
    volumeCodeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::volumeCodeIsSet() const
{
    return volumeCodeIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetvolumeCode()
{
    volumeCodeIsSet_ = false;
}

bool ChInstancesInfoRsponse_instance::isSupportDataReplication() const
{
    return supportDataReplication_;
}

void ChInstancesInfoRsponse_instance::setSupportDataReplication(bool value)
{
    supportDataReplication_ = value;
    supportDataReplicationIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::supportDataReplicationIsSet() const
{
    return supportDataReplicationIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetsupportDataReplication()
{
    supportDataReplicationIsSet_ = false;
}

bool ChInstancesInfoRsponse_instance::isNewVersionAvailable() const
{
    return newVersionAvailable_;
}

void ChInstancesInfoRsponse_instance::setNewVersionAvailable(bool value)
{
    newVersionAvailable_ = value;
    newVersionAvailableIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::newVersionAvailableIsSet() const
{
    return newVersionAvailableIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetnewVersionAvailable()
{
    newVersionAvailableIsSet_ = false;
}

bool ChInstancesInfoRsponse_instance::isSslOption() const
{
    return sslOption_;
}

void ChInstancesInfoRsponse_instance::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void ChInstancesInfoRsponse_instance::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance::getPayModel() const
{
    return payModel_;
}

void ChInstancesInfoRsponse_instance::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance::payModelIsSet() const
{
    return payModelIsSet_;
}

void ChInstancesInfoRsponse_instance::unsetpayModel()
{
    payModelIsSet_ = false;
}

}
}
}
}
}


