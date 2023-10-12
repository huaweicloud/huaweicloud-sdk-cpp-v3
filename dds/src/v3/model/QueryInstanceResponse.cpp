

#include "huaweicloud/dds/v3/model/QueryInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QueryInstanceResponse::QueryInstanceResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    datastoreIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
    ssl_ = 0;
    sslIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    backupStrategyIsSet_ = false;
    payMode_ = "";
    payModeIsSet_ = false;
    maintenanceWindow_ = "";
    maintenanceWindowIsSet_ = false;
    groupsIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    dssPoolId_ = "";
    dssPoolIdIsSet_ = false;
    actionsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    tagsIsSet_ = false;
}

QueryInstanceResponse::~QueryInstanceResponse() = default;

void QueryInstanceResponse::validate()
{
}

web::json::value QueryInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(dbUserNameIsSet_) {
        val[utility::conversions::to_string_t("db_user_name")] = ModelBase::toJson(dbUserName_);
    }
    if(sslIsSet_) {
        val[utility::conversions::to_string_t("ssl")] = ModelBase::toJson(ssl_);
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
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(payModeIsSet_) {
        val[utility::conversions::to_string_t("pay_mode")] = ModelBase::toJson(payMode_);
    }
    if(maintenanceWindowIsSet_) {
        val[utility::conversions::to_string_t("maintenance_window")] = ModelBase::toJson(maintenanceWindow_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(dssPoolIdIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_id")] = ModelBase::toJson(dssPoolId_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool QueryInstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            DatastoreItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            BackupStrategyForItemResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintenance_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintenance_window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintenanceWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupResponseItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_encryption_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_encryption_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskEncryptionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dss_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string QueryInstanceResponse::getId() const
{
    return id_;
}

void QueryInstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryInstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void QueryInstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string QueryInstanceResponse::getName() const
{
    return name_;
}

void QueryInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void QueryInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryInstanceResponse::getRemark() const
{
    return remark_;
}

void QueryInstanceResponse::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool QueryInstanceResponse::remarkIsSet() const
{
    return remarkIsSet_;
}

void QueryInstanceResponse::unsetremark()
{
    remarkIsSet_ = false;
}

std::string QueryInstanceResponse::getStatus() const
{
    return status_;
}

void QueryInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void QueryInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryInstanceResponse::getPort() const
{
    return port_;
}

void QueryInstanceResponse::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool QueryInstanceResponse::portIsSet() const
{
    return portIsSet_;
}

void QueryInstanceResponse::unsetport()
{
    portIsSet_ = false;
}

std::string QueryInstanceResponse::getMode() const
{
    return mode_;
}

void QueryInstanceResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool QueryInstanceResponse::modeIsSet() const
{
    return modeIsSet_;
}

void QueryInstanceResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::string QueryInstanceResponse::getRegion() const
{
    return region_;
}

void QueryInstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool QueryInstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void QueryInstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

DatastoreItem QueryInstanceResponse::getDatastore() const
{
    return datastore_;
}

void QueryInstanceResponse::setDatastore(const DatastoreItem& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool QueryInstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void QueryInstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string QueryInstanceResponse::getEngine() const
{
    return engine_;
}

void QueryInstanceResponse::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool QueryInstanceResponse::engineIsSet() const
{
    return engineIsSet_;
}

void QueryInstanceResponse::unsetengine()
{
    engineIsSet_ = false;
}

std::string QueryInstanceResponse::getCreated() const
{
    return created_;
}

void QueryInstanceResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool QueryInstanceResponse::createdIsSet() const
{
    return createdIsSet_;
}

void QueryInstanceResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string QueryInstanceResponse::getUpdated() const
{
    return updated_;
}

void QueryInstanceResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool QueryInstanceResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void QueryInstanceResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string QueryInstanceResponse::getDbUserName() const
{
    return dbUserName_;
}

void QueryInstanceResponse::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool QueryInstanceResponse::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void QueryInstanceResponse::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

int32_t QueryInstanceResponse::getSsl() const
{
    return ssl_;
}

void QueryInstanceResponse::setSsl(int32_t value)
{
    ssl_ = value;
    sslIsSet_ = true;
}

bool QueryInstanceResponse::sslIsSet() const
{
    return sslIsSet_;
}

void QueryInstanceResponse::unsetssl()
{
    sslIsSet_ = false;
}

std::string QueryInstanceResponse::getVpcId() const
{
    return vpcId_;
}

void QueryInstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool QueryInstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void QueryInstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string QueryInstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void QueryInstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool QueryInstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void QueryInstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string QueryInstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void QueryInstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool QueryInstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void QueryInstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

BackupStrategyForItemResponse QueryInstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void QueryInstanceResponse::setBackupStrategy(const BackupStrategyForItemResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool QueryInstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void QueryInstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string QueryInstanceResponse::getPayMode() const
{
    return payMode_;
}

void QueryInstanceResponse::setPayMode(const std::string& value)
{
    payMode_ = value;
    payModeIsSet_ = true;
}

bool QueryInstanceResponse::payModeIsSet() const
{
    return payModeIsSet_;
}

void QueryInstanceResponse::unsetpayMode()
{
    payModeIsSet_ = false;
}

std::string QueryInstanceResponse::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void QueryInstanceResponse::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool QueryInstanceResponse::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void QueryInstanceResponse::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<GroupResponseItem>& QueryInstanceResponse::getGroups()
{
    return groups_;
}

void QueryInstanceResponse::setGroups(const std::vector<GroupResponseItem>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool QueryInstanceResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void QueryInstanceResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

std::string QueryInstanceResponse::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void QueryInstanceResponse::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool QueryInstanceResponse::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void QueryInstanceResponse::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string QueryInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QueryInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QueryInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QueryInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string QueryInstanceResponse::getTimeZone() const
{
    return timeZone_;
}

void QueryInstanceResponse::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool QueryInstanceResponse::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void QueryInstanceResponse::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string QueryInstanceResponse::getDssPoolId() const
{
    return dssPoolId_;
}

void QueryInstanceResponse::setDssPoolId(const std::string& value)
{
    dssPoolId_ = value;
    dssPoolIdIsSet_ = true;
}

bool QueryInstanceResponse::dssPoolIdIsSet() const
{
    return dssPoolIdIsSet_;
}

void QueryInstanceResponse::unsetdssPoolId()
{
    dssPoolIdIsSet_ = false;
}

std::vector<std::string>& QueryInstanceResponse::getActions()
{
    return actions_;
}

void QueryInstanceResponse::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool QueryInstanceResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void QueryInstanceResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string QueryInstanceResponse::getOrderId() const
{
    return orderId_;
}

void QueryInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool QueryInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void QueryInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::vector<TagResponse>& QueryInstanceResponse::getTags()
{
    return tags_;
}

void QueryInstanceResponse::setTags(const std::vector<TagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryInstanceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryInstanceResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


