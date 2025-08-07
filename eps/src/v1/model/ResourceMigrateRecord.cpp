

#include "huaweicloud/eps/v1/model/ResourceMigrateRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ResourceMigrateRecord::ResourceMigrateRecord()
{
    associated_ = false;
    associatedIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    eventTime_ = "";
    eventTimeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    initiateEpId_ = "";
    initiateEpIdIsSet_ = false;
    initiateEpName_ = "";
    initiateEpNameIsSet_ = false;
    originEpId_ = "";
    originEpIdIsSet_ = false;
    originEpName_ = "";
    originEpNameIsSet_ = false;
    targetEpId_ = "";
    targetEpIdIsSet_ = false;
    targetEpName_ = "";
    targetEpNameIsSet_ = false;
    existFailed_ = "";
    existFailedIsSet_ = false;
}

ResourceMigrateRecord::~ResourceMigrateRecord() = default;

void ResourceMigrateRecord::validate()
{
}

web::json::value ResourceMigrateRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associatedIsSet_) {
        val[utility::conversions::to_string_t("associated")] = ModelBase::toJson(associated_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(initiateEpIdIsSet_) {
        val[utility::conversions::to_string_t("initiate_ep_id")] = ModelBase::toJson(initiateEpId_);
    }
    if(initiateEpNameIsSet_) {
        val[utility::conversions::to_string_t("initiate_ep_name")] = ModelBase::toJson(initiateEpName_);
    }
    if(originEpIdIsSet_) {
        val[utility::conversions::to_string_t("origin_ep_id")] = ModelBase::toJson(originEpId_);
    }
    if(originEpNameIsSet_) {
        val[utility::conversions::to_string_t("origin_ep_name")] = ModelBase::toJson(originEpName_);
    }
    if(targetEpIdIsSet_) {
        val[utility::conversions::to_string_t("target_ep_id")] = ModelBase::toJson(targetEpId_);
    }
    if(targetEpNameIsSet_) {
        val[utility::conversions::to_string_t("target_ep_name")] = ModelBase::toJson(targetEpName_);
    }
    if(existFailedIsSet_) {
        val[utility::conversions::to_string_t("exist_failed")] = ModelBase::toJson(existFailed_);
    }

    return val;
}
bool ResourceMigrateRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initiate_ep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initiate_ep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitiateEpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initiate_ep_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initiate_ep_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitiateEpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_ep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_ep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginEpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_ep_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_ep_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginEpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_ep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_ep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_ep_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_ep_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exist_failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exist_failed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistFailed(refVal);
        }
    }
    return ok;
}


bool ResourceMigrateRecord::isAssociated() const
{
    return associated_;
}

void ResourceMigrateRecord::setAssociated(bool value)
{
    associated_ = value;
    associatedIsSet_ = true;
}

bool ResourceMigrateRecord::associatedIsSet() const
{
    return associatedIsSet_;
}

void ResourceMigrateRecord::unsetassociated()
{
    associatedIsSet_ = false;
}

std::string ResourceMigrateRecord::getCode() const
{
    return code_;
}

void ResourceMigrateRecord::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ResourceMigrateRecord::codeIsSet() const
{
    return codeIsSet_;
}

void ResourceMigrateRecord::unsetcode()
{
    codeIsSet_ = false;
}

std::string ResourceMigrateRecord::getMessage() const
{
    return message_;
}

void ResourceMigrateRecord::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ResourceMigrateRecord::messageIsSet() const
{
    return messageIsSet_;
}

void ResourceMigrateRecord::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ResourceMigrateRecord::getProjectId() const
{
    return projectId_;
}

void ResourceMigrateRecord::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ResourceMigrateRecord::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ResourceMigrateRecord::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getProjectName() const
{
    return projectName_;
}

void ResourceMigrateRecord::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ResourceMigrateRecord::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ResourceMigrateRecord::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getRegionId() const
{
    return regionId_;
}

void ResourceMigrateRecord::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ResourceMigrateRecord::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ResourceMigrateRecord::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getEventTime() const
{
    return eventTime_;
}

void ResourceMigrateRecord::setEventTime(const std::string& value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool ResourceMigrateRecord::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void ResourceMigrateRecord::unseteventTime()
{
    eventTimeIsSet_ = false;
}

std::string ResourceMigrateRecord::getUserName() const
{
    return userName_;
}

void ResourceMigrateRecord::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ResourceMigrateRecord::userNameIsSet() const
{
    return userNameIsSet_;
}

void ResourceMigrateRecord::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getOperateType() const
{
    return operateType_;
}

void ResourceMigrateRecord::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ResourceMigrateRecord::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ResourceMigrateRecord::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ResourceMigrateRecord::getResourceId() const
{
    return resourceId_;
}

void ResourceMigrateRecord::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceMigrateRecord::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceMigrateRecord::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getResourceName() const
{
    return resourceName_;
}

void ResourceMigrateRecord::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ResourceMigrateRecord::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ResourceMigrateRecord::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getResourceType() const
{
    return resourceType_;
}

void ResourceMigrateRecord::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceMigrateRecord::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceMigrateRecord::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ResourceMigrateRecord::getInitiateEpId() const
{
    return initiateEpId_;
}

void ResourceMigrateRecord::setInitiateEpId(const std::string& value)
{
    initiateEpId_ = value;
    initiateEpIdIsSet_ = true;
}

bool ResourceMigrateRecord::initiateEpIdIsSet() const
{
    return initiateEpIdIsSet_;
}

void ResourceMigrateRecord::unsetinitiateEpId()
{
    initiateEpIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getInitiateEpName() const
{
    return initiateEpName_;
}

void ResourceMigrateRecord::setInitiateEpName(const std::string& value)
{
    initiateEpName_ = value;
    initiateEpNameIsSet_ = true;
}

bool ResourceMigrateRecord::initiateEpNameIsSet() const
{
    return initiateEpNameIsSet_;
}

void ResourceMigrateRecord::unsetinitiateEpName()
{
    initiateEpNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getOriginEpId() const
{
    return originEpId_;
}

void ResourceMigrateRecord::setOriginEpId(const std::string& value)
{
    originEpId_ = value;
    originEpIdIsSet_ = true;
}

bool ResourceMigrateRecord::originEpIdIsSet() const
{
    return originEpIdIsSet_;
}

void ResourceMigrateRecord::unsetoriginEpId()
{
    originEpIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getOriginEpName() const
{
    return originEpName_;
}

void ResourceMigrateRecord::setOriginEpName(const std::string& value)
{
    originEpName_ = value;
    originEpNameIsSet_ = true;
}

bool ResourceMigrateRecord::originEpNameIsSet() const
{
    return originEpNameIsSet_;
}

void ResourceMigrateRecord::unsetoriginEpName()
{
    originEpNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getTargetEpId() const
{
    return targetEpId_;
}

void ResourceMigrateRecord::setTargetEpId(const std::string& value)
{
    targetEpId_ = value;
    targetEpIdIsSet_ = true;
}

bool ResourceMigrateRecord::targetEpIdIsSet() const
{
    return targetEpIdIsSet_;
}

void ResourceMigrateRecord::unsettargetEpId()
{
    targetEpIdIsSet_ = false;
}

std::string ResourceMigrateRecord::getTargetEpName() const
{
    return targetEpName_;
}

void ResourceMigrateRecord::setTargetEpName(const std::string& value)
{
    targetEpName_ = value;
    targetEpNameIsSet_ = true;
}

bool ResourceMigrateRecord::targetEpNameIsSet() const
{
    return targetEpNameIsSet_;
}

void ResourceMigrateRecord::unsettargetEpName()
{
    targetEpNameIsSet_ = false;
}

std::string ResourceMigrateRecord::getExistFailed() const
{
    return existFailed_;
}

void ResourceMigrateRecord::setExistFailed(const std::string& value)
{
    existFailed_ = value;
    existFailedIsSet_ = true;
}

bool ResourceMigrateRecord::existFailedIsSet() const
{
    return existFailedIsSet_;
}

void ResourceMigrateRecord::unsetexistFailed()
{
    existFailedIsSet_ = false;
}

}
}
}
}
}


