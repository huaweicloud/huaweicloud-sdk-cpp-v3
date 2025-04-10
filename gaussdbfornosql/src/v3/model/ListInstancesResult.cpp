

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesResult::ListInstancesResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    datastoreIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    actionsIsSet_ = false;
    lbIpAddress_ = "";
    lbIpAddressIsSet_ = false;
    lbPort_ = "";
    lbPortIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ListInstancesResult::~ListInstancesResult() = default;

void ListInstancesResult::validate()
{
}

web::json::value ListInstancesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(lbIpAddressIsSet_) {
        val[utility::conversions::to_string_t("lb_ip_address")] = ModelBase::toJson(lbIpAddress_);
    }
    if(lbPortIsSet_) {
        val[utility::conversions::to_string_t("lb_port")] = ModelBase::toJson(lbPort_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ListInstancesResult::fromJson(const web::json::value& val)
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
            ListInstancesDatastoreResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
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
            ListInstancesBackupStrategyResult refVal;
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
            std::vector<ListInstancesGroupResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lb_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lb_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLbIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lb_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lb_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLbPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string ListInstancesResult::getId() const
{
    return id_;
}

void ListInstancesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesResult::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesResult::getName() const
{
    return name_;
}

void ListInstancesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesResult::getStatus() const
{
    return status_;
}

void ListInstancesResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInstancesResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListInstancesResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInstancesResult::getPort() const
{
    return port_;
}

void ListInstancesResult::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListInstancesResult::portIsSet() const
{
    return portIsSet_;
}

void ListInstancesResult::unsetport()
{
    portIsSet_ = false;
}

std::string ListInstancesResult::getRegion() const
{
    return region_;
}

void ListInstancesResult::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListInstancesResult::regionIsSet() const
{
    return regionIsSet_;
}

void ListInstancesResult::unsetregion()
{
    regionIsSet_ = false;
}

ListInstancesDatastoreResult ListInstancesResult::getDatastore() const
{
    return datastore_;
}

void ListInstancesResult::setDatastore(const ListInstancesDatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ListInstancesResult::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ListInstancesResult::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ListInstancesResult::getMode() const
{
    return mode_;
}

void ListInstancesResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListInstancesResult::modeIsSet() const
{
    return modeIsSet_;
}

void ListInstancesResult::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListInstancesResult::getProductType() const
{
    return productType_;
}

void ListInstancesResult::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool ListInstancesResult::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void ListInstancesResult::unsetproductType()
{
    productTypeIsSet_ = false;
}

std::string ListInstancesResult::getEngine() const
{
    return engine_;
}

void ListInstancesResult::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstancesResult::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstancesResult::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListInstancesResult::getCreated() const
{
    return created_;
}

void ListInstancesResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ListInstancesResult::createdIsSet() const
{
    return createdIsSet_;
}

void ListInstancesResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ListInstancesResult::getUpdated() const
{
    return updated_;
}

void ListInstancesResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ListInstancesResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ListInstancesResult::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ListInstancesResult::getDbUserName() const
{
    return dbUserName_;
}

void ListInstancesResult::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool ListInstancesResult::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void ListInstancesResult::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string ListInstancesResult::getVpcId() const
{
    return vpcId_;
}

void ListInstancesResult::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstancesResult::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstancesResult::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstancesResult::getSubnetId() const
{
    return subnetId_;
}

void ListInstancesResult::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstancesResult::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstancesResult::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListInstancesResult::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ListInstancesResult::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ListInstancesResult::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ListInstancesResult::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

ListInstancesBackupStrategyResult ListInstancesResult::getBackupStrategy() const
{
    return backupStrategy_;
}

void ListInstancesResult::setBackupStrategy(const ListInstancesBackupStrategyResult& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool ListInstancesResult::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void ListInstancesResult::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string ListInstancesResult::getPayMode() const
{
    return payMode_;
}

void ListInstancesResult::setPayMode(const std::string& value)
{
    payMode_ = value;
    payModeIsSet_ = true;
}

bool ListInstancesResult::payModeIsSet() const
{
    return payModeIsSet_;
}

void ListInstancesResult::unsetpayMode()
{
    payModeIsSet_ = false;
}

std::string ListInstancesResult::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void ListInstancesResult::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool ListInstancesResult::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void ListInstancesResult::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<ListInstancesGroupResult>& ListInstancesResult::getGroups()
{
    return groups_;
}

void ListInstancesResult::setGroups(const std::vector<ListInstancesGroupResult>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool ListInstancesResult::groupsIsSet() const
{
    return groupsIsSet_;
}

void ListInstancesResult::unsetgroups()
{
    groupsIsSet_ = false;
}

std::string ListInstancesResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListInstancesResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListInstancesResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListInstancesResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListInstancesResult::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void ListInstancesResult::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool ListInstancesResult::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void ListInstancesResult::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::string ListInstancesResult::getTimeZone() const
{
    return timeZone_;
}

void ListInstancesResult::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ListInstancesResult::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ListInstancesResult::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::vector<std::string>& ListInstancesResult::getActions()
{
    return actions_;
}

void ListInstancesResult::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ListInstancesResult::actionsIsSet() const
{
    return actionsIsSet_;
}

void ListInstancesResult::unsetactions()
{
    actionsIsSet_ = false;
}

std::string ListInstancesResult::getLbIpAddress() const
{
    return lbIpAddress_;
}

void ListInstancesResult::setLbIpAddress(const std::string& value)
{
    lbIpAddress_ = value;
    lbIpAddressIsSet_ = true;
}

bool ListInstancesResult::lbIpAddressIsSet() const
{
    return lbIpAddressIsSet_;
}

void ListInstancesResult::unsetlbIpAddress()
{
    lbIpAddressIsSet_ = false;
}

std::string ListInstancesResult::getLbPort() const
{
    return lbPort_;
}

void ListInstancesResult::setLbPort(const std::string& value)
{
    lbPort_ = value;
    lbPortIsSet_ = true;
}

bool ListInstancesResult::lbPortIsSet() const
{
    return lbPortIsSet_;
}

void ListInstancesResult::unsetlbPort()
{
    lbPortIsSet_ = false;
}

std::string ListInstancesResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListInstancesResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListInstancesResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListInstancesResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


