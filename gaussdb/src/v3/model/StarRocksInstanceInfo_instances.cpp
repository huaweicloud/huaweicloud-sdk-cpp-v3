

#include "huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_instances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksInstanceInfo_instances::StarRocksInstanceInfo_instances()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
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
    frozenTime_ = 0L;
    frozenTimeIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    bakPeriod_ = "";
    bakPeriodIsSet_ = false;
    bakKeepDay_ = 0;
    bakKeepDayIsSet_ = false;
    bakExpectedStartTime_ = 0L;
    bakExpectedStartTimeIsSet_ = false;
    dataStoreVersionId_ = "";
    dataStoreVersionIdIsSet_ = false;
    dataStoreVersion_ = "";
    dataStoreVersionIsSet_ = false;
    dataStoreType_ = "";
    dataStoreTypeIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    deleteAt_ = 0L;
    deleteAtIsSet_ = false;
    dbPort_ = "";
    dbPortIsSet_ = false;
    paramGroup_ = "";
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    portInfoIsSet_ = false;
    feNodeVolumeCode_ = "";
    feNodeVolumeCodeIsSet_ = false;
    beNodeVolumeCode_ = "";
    beNodeVolumeCodeIsSet_ = false;
    feNodeVolumeSize_ = "";
    feNodeVolumeSizeIsSet_ = false;
    beNodeVolumeSize_ = "";
    beNodeVolumeSizeIsSet_ = false;
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

StarRocksInstanceInfo_instances::~StarRocksInstanceInfo_instances() = default;

void StarRocksInstanceInfo_instances::validate()
{
}

web::json::value StarRocksInstanceInfo_instances::toJson() const
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
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
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
    if(dataStoreVersionIdIsSet_) {
        val[utility::conversions::to_string_t("data_store_version_id")] = ModelBase::toJson(dataStoreVersionId_);
    }
    if(dataStoreVersionIsSet_) {
        val[utility::conversions::to_string_t("data_store_version")] = ModelBase::toJson(dataStoreVersion_);
    }
    if(dataStoreTypeIsSet_) {
        val[utility::conversions::to_string_t("data_store_type")] = ModelBase::toJson(dataStoreType_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(portInfoIsSet_) {
        val[utility::conversions::to_string_t("port_info")] = ModelBase::toJson(portInfo_);
    }
    if(feNodeVolumeCodeIsSet_) {
        val[utility::conversions::to_string_t("fe_node_volume_code")] = ModelBase::toJson(feNodeVolumeCode_);
    }
    if(beNodeVolumeCodeIsSet_) {
        val[utility::conversions::to_string_t("be_node_volume_code")] = ModelBase::toJson(beNodeVolumeCode_);
    }
    if(feNodeVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("fe_node_volume_size")] = ModelBase::toJson(feNodeVolumeSize_);
    }
    if(beNodeVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("be_node_volume_size")] = ModelBase::toJson(beNodeVolumeSize_);
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
bool StarRocksInstanceInfo_instances::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
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
            int64_t refVal;
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakExpectedStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_store_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_store_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataStoreVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_store_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_store_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataStoreVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_store_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_store_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataStoreType(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryAction> refVal;
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
            std::vector<StarRocksInstanceInfo_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ops_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ops_window"));
        if(!fieldValue.is_null())
        {
            StarRocksInstanceInfo_ops_window refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpsWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_info"));
        if(!fieldValue.is_null())
        {
            StarRocksInstanceInfo_tags_info refVal;
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
            StarRocksInstanceInfo_port_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fe_node_volume_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_node_volume_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeNodeVolumeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_node_volume_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_node_volume_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeNodeVolumeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fe_node_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_node_volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeNodeVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_node_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_node_volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeNodeVolumeSize(refVal);
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


std::string StarRocksInstanceInfo_instances::getId() const
{
    return id_;
}

void StarRocksInstanceInfo_instances::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::idIsSet() const
{
    return idIsSet_;
}

void StarRocksInstanceInfo_instances::unsetid()
{
    idIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getName() const
{
    return name_;
}

void StarRocksInstanceInfo_instances::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::nameIsSet() const
{
    return nameIsSet_;
}

void StarRocksInstanceInfo_instances::unsetname()
{
    nameIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getProjectId() const
{
    return projectId_;
}

void StarRocksInstanceInfo_instances::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StarRocksInstanceInfo_instances::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getPublicIp() const
{
    return publicIp_;
}

void StarRocksInstanceInfo_instances::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void StarRocksInstanceInfo_instances::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDataVip() const
{
    return dataVip_;
}

void StarRocksInstanceInfo_instances::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdataVip()
{
    dataVipIsSet_ = false;
}

bool StarRocksInstanceInfo_instances::isCanEnablePublicAccess() const
{
    return canEnablePublicAccess_;
}

void StarRocksInstanceInfo_instances::setCanEnablePublicAccess(bool value)
{
    canEnablePublicAccess_ = value;
    canEnablePublicAccessIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::canEnablePublicAccessIsSet() const
{
    return canEnablePublicAccessIsSet_;
}

void StarRocksInstanceInfo_instances::unsetcanEnablePublicAccess()
{
    canEnablePublicAccessIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getCurrentBackupNodeId() const
{
    return currentBackupNodeId_;
}

void StarRocksInstanceInfo_instances::setCurrentBackupNodeId(const std::string& value)
{
    currentBackupNodeId_ = value;
    currentBackupNodeIdIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::currentBackupNodeIdIsSet() const
{
    return currentBackupNodeIdIsSet_;
}

void StarRocksInstanceInfo_instances::unsetcurrentBackupNodeId()
{
    currentBackupNodeIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getClusterMode() const
{
    return clusterMode_;
}

void StarRocksInstanceInfo_instances::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getStatus() const
{
    return status_;
}

void StarRocksInstanceInfo_instances::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::statusIsSet() const
{
    return statusIsSet_;
}

void StarRocksInstanceInfo_instances::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t StarRocksInstanceInfo_instances::getIsFrozen() const
{
    return isFrozen_;
}

void StarRocksInstanceInfo_instances::setIsFrozen(int32_t value)
{
    isFrozen_ = value;
    isFrozenIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::isFrozenIsSet() const
{
    return isFrozenIsSet_;
}

void StarRocksInstanceInfo_instances::unsetisFrozen()
{
    isFrozenIsSet_ = false;
}

int64_t StarRocksInstanceInfo_instances::getFrozenTime() const
{
    return frozenTime_;
}

void StarRocksInstanceInfo_instances::setFrozenTime(int64_t value)
{
    frozenTime_ = value;
    frozenTimeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::frozenTimeIsSet() const
{
    return frozenTimeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetfrozenTime()
{
    frozenTimeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDbUser() const
{
    return dbUser_;
}

void StarRocksInstanceInfo_instances::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getBakPeriod() const
{
    return bakPeriod_;
}

void StarRocksInstanceInfo_instances::setBakPeriod(const std::string& value)
{
    bakPeriod_ = value;
    bakPeriodIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::bakPeriodIsSet() const
{
    return bakPeriodIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbakPeriod()
{
    bakPeriodIsSet_ = false;
}

int32_t StarRocksInstanceInfo_instances::getBakKeepDay() const
{
    return bakKeepDay_;
}

void StarRocksInstanceInfo_instances::setBakKeepDay(int32_t value)
{
    bakKeepDay_ = value;
    bakKeepDayIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::bakKeepDayIsSet() const
{
    return bakKeepDayIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbakKeepDay()
{
    bakKeepDayIsSet_ = false;
}

int64_t StarRocksInstanceInfo_instances::getBakExpectedStartTime() const
{
    return bakExpectedStartTime_;
}

void StarRocksInstanceInfo_instances::setBakExpectedStartTime(int64_t value)
{
    bakExpectedStartTime_ = value;
    bakExpectedStartTimeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::bakExpectedStartTimeIsSet() const
{
    return bakExpectedStartTimeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbakExpectedStartTime()
{
    bakExpectedStartTimeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDataStoreVersionId() const
{
    return dataStoreVersionId_;
}

void StarRocksInstanceInfo_instances::setDataStoreVersionId(const std::string& value)
{
    dataStoreVersionId_ = value;
    dataStoreVersionIdIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dataStoreVersionIdIsSet() const
{
    return dataStoreVersionIdIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdataStoreVersionId()
{
    dataStoreVersionIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDataStoreVersion() const
{
    return dataStoreVersion_;
}

void StarRocksInstanceInfo_instances::setDataStoreVersion(const std::string& value)
{
    dataStoreVersion_ = value;
    dataStoreVersionIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dataStoreVersionIsSet() const
{
    return dataStoreVersionIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdataStoreVersion()
{
    dataStoreVersionIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDataStoreType() const
{
    return dataStoreType_;
}

void StarRocksInstanceInfo_instances::setDataStoreType(const std::string& value)
{
    dataStoreType_ = value;
    dataStoreTypeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dataStoreTypeIsSet() const
{
    return dataStoreTypeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdataStoreType()
{
    dataStoreTypeIsSet_ = false;
}

int64_t StarRocksInstanceInfo_instances::getCreateAt() const
{
    return createAt_;
}

void StarRocksInstanceInfo_instances::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::createAtIsSet() const
{
    return createAtIsSet_;
}

void StarRocksInstanceInfo_instances::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t StarRocksInstanceInfo_instances::getUpdateAt() const
{
    return updateAt_;
}

void StarRocksInstanceInfo_instances::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StarRocksInstanceInfo_instances::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

int64_t StarRocksInstanceInfo_instances::getDeleteAt() const
{
    return deleteAt_;
}

void StarRocksInstanceInfo_instances::setDeleteAt(int64_t value)
{
    deleteAt_ = value;
    deleteAtIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::deleteAtIsSet() const
{
    return deleteAtIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdeleteAt()
{
    deleteAtIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDbPort() const
{
    return dbPort_;
}

void StarRocksInstanceInfo_instances::setDbPort(const std::string& value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getParamGroup() const
{
    return paramGroup_;
}

void StarRocksInstanceInfo_instances::setParamGroup(const std::string& value)
{
    paramGroup_ = value;
    paramGroupIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::paramGroupIsSet() const
{
    return paramGroupIsSet_;
}

void StarRocksInstanceInfo_instances::unsetparamGroup()
{
    paramGroupIsSet_ = false;
}

std::vector<QueryAction>& StarRocksInstanceInfo_instances::getActions()
{
    return actions_;
}

void StarRocksInstanceInfo_instances::setActions(const std::vector<QueryAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::actionsIsSet() const
{
    return actionsIsSet_;
}

void StarRocksInstanceInfo_instances::unsetactions()
{
    actionsIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getCreateFailErrorCode() const
{
    return createFailErrorCode_;
}

void StarRocksInstanceInfo_instances::setCreateFailErrorCode(const std::string& value)
{
    createFailErrorCode_ = value;
    createFailErrorCodeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::createFailErrorCodeIsSet() const
{
    return createFailErrorCodeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetcreateFailErrorCode()
{
    createFailErrorCodeIsSet_ = false;
}

std::vector<StarRocksInstanceInfo_groups>& StarRocksInstanceInfo_instances::getGroups()
{
    return groups_;
}

void StarRocksInstanceInfo_instances::setGroups(const std::vector<StarRocksInstanceInfo_groups>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::groupsIsSet() const
{
    return groupsIsSet_;
}

void StarRocksInstanceInfo_instances::unsetgroups()
{
    groupsIsSet_ = false;
}

StarRocksInstanceInfo_ops_window StarRocksInstanceInfo_instances::getOpsWindow() const
{
    return opsWindow_;
}

void StarRocksInstanceInfo_instances::setOpsWindow(const StarRocksInstanceInfo_ops_window& value)
{
    opsWindow_ = value;
    opsWindowIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::opsWindowIsSet() const
{
    return opsWindowIsSet_;
}

void StarRocksInstanceInfo_instances::unsetopsWindow()
{
    opsWindowIsSet_ = false;
}

StarRocksInstanceInfo_tags_info StarRocksInstanceInfo_instances::getTagsInfo() const
{
    return tagsInfo_;
}

void StarRocksInstanceInfo_instances::setTagsInfo(const StarRocksInstanceInfo_tags_info& value)
{
    tagsInfo_ = value;
    tagsInfoIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::tagsInfoIsSet() const
{
    return tagsInfoIsSet_;
}

void StarRocksInstanceInfo_instances::unsettagsInfo()
{
    tagsInfoIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getTimeZone() const
{
    return timeZone_;
}

void StarRocksInstanceInfo_instances::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void StarRocksInstanceInfo_instances::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void StarRocksInstanceInfo_instances::setBackupUsedSpace(const std::string& value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getAzMode() const
{
    return azMode_;
}

void StarRocksInstanceInfo_instances::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::azModeIsSet() const
{
    return azModeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetazMode()
{
    azModeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void StarRocksInstanceInfo_instances::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void StarRocksInstanceInfo_instances::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

StarRocksInstanceInfo_port_info StarRocksInstanceInfo_instances::getPortInfo() const
{
    return portInfo_;
}

void StarRocksInstanceInfo_instances::setPortInfo(const StarRocksInstanceInfo_port_info& value)
{
    portInfo_ = value;
    portInfoIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::portInfoIsSet() const
{
    return portInfoIsSet_;
}

void StarRocksInstanceInfo_instances::unsetportInfo()
{
    portInfoIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getFeNodeVolumeCode() const
{
    return feNodeVolumeCode_;
}

void StarRocksInstanceInfo_instances::setFeNodeVolumeCode(const std::string& value)
{
    feNodeVolumeCode_ = value;
    feNodeVolumeCodeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::feNodeVolumeCodeIsSet() const
{
    return feNodeVolumeCodeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetfeNodeVolumeCode()
{
    feNodeVolumeCodeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getBeNodeVolumeCode() const
{
    return beNodeVolumeCode_;
}

void StarRocksInstanceInfo_instances::setBeNodeVolumeCode(const std::string& value)
{
    beNodeVolumeCode_ = value;
    beNodeVolumeCodeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::beNodeVolumeCodeIsSet() const
{
    return beNodeVolumeCodeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbeNodeVolumeCode()
{
    beNodeVolumeCodeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getFeNodeVolumeSize() const
{
    return feNodeVolumeSize_;
}

void StarRocksInstanceInfo_instances::setFeNodeVolumeSize(const std::string& value)
{
    feNodeVolumeSize_ = value;
    feNodeVolumeSizeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::feNodeVolumeSizeIsSet() const
{
    return feNodeVolumeSizeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetfeNodeVolumeSize()
{
    feNodeVolumeSizeIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getBeNodeVolumeSize() const
{
    return beNodeVolumeSize_;
}

void StarRocksInstanceInfo_instances::setBeNodeVolumeSize(const std::string& value)
{
    beNodeVolumeSize_ = value;
    beNodeVolumeSizeIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::beNodeVolumeSizeIsSet() const
{
    return beNodeVolumeSizeIsSet_;
}

void StarRocksInstanceInfo_instances::unsetbeNodeVolumeSize()
{
    beNodeVolumeSizeIsSet_ = false;
}

bool StarRocksInstanceInfo_instances::isSupportDataReplication() const
{
    return supportDataReplication_;
}

void StarRocksInstanceInfo_instances::setSupportDataReplication(bool value)
{
    supportDataReplication_ = value;
    supportDataReplicationIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::supportDataReplicationIsSet() const
{
    return supportDataReplicationIsSet_;
}

void StarRocksInstanceInfo_instances::unsetsupportDataReplication()
{
    supportDataReplicationIsSet_ = false;
}

bool StarRocksInstanceInfo_instances::isNewVersionAvailable() const
{
    return newVersionAvailable_;
}

void StarRocksInstanceInfo_instances::setNewVersionAvailable(bool value)
{
    newVersionAvailable_ = value;
    newVersionAvailableIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::newVersionAvailableIsSet() const
{
    return newVersionAvailableIsSet_;
}

void StarRocksInstanceInfo_instances::unsetnewVersionAvailable()
{
    newVersionAvailableIsSet_ = false;
}

bool StarRocksInstanceInfo_instances::isSslOption() const
{
    return sslOption_;
}

void StarRocksInstanceInfo_instances::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void StarRocksInstanceInfo_instances::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void StarRocksInstanceInfo_instances::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void StarRocksInstanceInfo_instances::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::string StarRocksInstanceInfo_instances::getPayModel() const
{
    return payModel_;
}

void StarRocksInstanceInfo_instances::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool StarRocksInstanceInfo_instances::payModelIsSet() const
{
    return payModelIsSet_;
}

void StarRocksInstanceInfo_instances::unsetpayModel()
{
    payModelIsSet_ = false;
}

}
}
}
}
}


