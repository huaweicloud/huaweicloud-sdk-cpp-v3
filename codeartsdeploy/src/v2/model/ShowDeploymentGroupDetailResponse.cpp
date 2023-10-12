

#include "huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowDeploymentGroupDetailResponse::ShowDeploymentGroupDetailResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    hostCount_ = 0;
    hostCountIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    autoConnectionTestSwitch_ = 0;
    autoConnectionTestSwitchIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    createdByIsSet_ = false;
    updatedByIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    permissionIsSet_ = false;
}

ShowDeploymentGroupDetailResponse::~ShowDeploymentGroupDetailResponse() = default;

void ShowDeploymentGroupDetailResponse::validate()
{
}

web::json::value ShowDeploymentGroupDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(hostCountIsSet_) {
        val[utility::conversions::to_string_t("host_count")] = ModelBase::toJson(hostCount_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(autoConnectionTestSwitchIsSet_) {
        val[utility::conversions::to_string_t("auto_connection_test_switch")] = ModelBase::toJson(autoConnectionTestSwitch_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(updatedByIsSet_) {
        val[utility::conversions::to_string_t("updated_by")] = ModelBase::toJson(updatedBy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }

    return val;
}
bool ShowDeploymentGroupDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_connection_test_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_connection_test_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoConnectionTestSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_by"));
        if(!fieldValue.is_null())
        {
            UserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            PermissionGroupDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
    return ok;
}


std::string ShowDeploymentGroupDetailResponse::getGroupId() const
{
    return groupId_;
}

void ShowDeploymentGroupDetailResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowDeploymentGroupDetailResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowDeploymentGroupDetailResponse::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

int32_t ShowDeploymentGroupDetailResponse::getHostCount() const
{
    return hostCount_;
}

void ShowDeploymentGroupDetailResponse::setHostCount(int32_t value)
{
    hostCount_ = value;
    hostCountIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::hostCountIsSet() const
{
    return hostCountIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsethostCount()
{
    hostCountIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getProjectName() const
{
    return projectName_;
}

void ShowDeploymentGroupDetailResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getName() const
{
    return name_;
}

void ShowDeploymentGroupDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getRegionName() const
{
    return regionName_;
}

void ShowDeploymentGroupDetailResponse::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowDeploymentGroupDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getOs() const
{
    return os_;
}

void ShowDeploymentGroupDetailResponse::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::osIsSet() const
{
    return osIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetos()
{
    osIsSet_ = false;
}

int32_t ShowDeploymentGroupDetailResponse::getAutoConnectionTestSwitch() const
{
    return autoConnectionTestSwitch_;
}

void ShowDeploymentGroupDetailResponse::setAutoConnectionTestSwitch(int32_t value)
{
    autoConnectionTestSwitch_ = value;
    autoConnectionTestSwitchIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::autoConnectionTestSwitchIsSet() const
{
    return autoConnectionTestSwitchIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetautoConnectionTestSwitch()
{
    autoConnectionTestSwitchIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void ShowDeploymentGroupDetailResponse::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getNickName() const
{
    return nickName_;
}

void ShowDeploymentGroupDetailResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

UserInfo ShowDeploymentGroupDetailResponse::getCreatedBy() const
{
    return createdBy_;
}

void ShowDeploymentGroupDetailResponse::setCreatedBy(const UserInfo& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

UserInfo ShowDeploymentGroupDetailResponse::getUpdatedBy() const
{
    return updatedBy_;
}

void ShowDeploymentGroupDetailResponse::setUpdatedBy(const UserInfo& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

std::string ShowDeploymentGroupDetailResponse::getDescription() const
{
    return description_;
}

void ShowDeploymentGroupDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

PermissionGroupDetail ShowDeploymentGroupDetailResponse::getPermission() const
{
    return permission_;
}

void ShowDeploymentGroupDetailResponse::setPermission(const PermissionGroupDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool ShowDeploymentGroupDetailResponse::permissionIsSet() const
{
    return permissionIsSet_;
}

void ShowDeploymentGroupDetailResponse::unsetpermission()
{
    permissionIsSet_ = false;
}

}
}
}
}
}


