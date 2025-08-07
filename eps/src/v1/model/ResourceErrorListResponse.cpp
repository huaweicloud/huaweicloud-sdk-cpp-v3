

#include "huaweicloud/eps/v1/model/ResourceErrorListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ResourceErrorListResponse::ResourceErrorListResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ResourceErrorListResponse::~ResourceErrorListResponse() = default;

void ResourceErrorListResponse::validate()
{
}

web::json::value ResourceErrorListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ResourceErrorListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string ResourceErrorListResponse::getProjectId() const
{
    return projectId_;
}

void ResourceErrorListResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ResourceErrorListResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ResourceErrorListResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ResourceErrorListResponse::getResourceType() const
{
    return resourceType_;
}

void ResourceErrorListResponse::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceErrorListResponse::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceErrorListResponse::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ResourceErrorListResponse::getResourceId() const
{
    return resourceId_;
}

void ResourceErrorListResponse::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceErrorListResponse::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceErrorListResponse::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceErrorListResponse::getErrorCode() const
{
    return errorCode_;
}

void ResourceErrorListResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ResourceErrorListResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ResourceErrorListResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ResourceErrorListResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ResourceErrorListResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ResourceErrorListResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ResourceErrorListResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


