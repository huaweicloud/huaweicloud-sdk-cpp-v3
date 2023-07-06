

#include "huaweicloud/eps/v1/model/Errors.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




Errors::Errors()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

Errors::~Errors() = default;

void Errors::validate()
{
}

web::json::value Errors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}

bool Errors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

std::string Errors::getErrorCode() const
{
    return errorCode_;
}

void Errors::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool Errors::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void Errors::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string Errors::getErrorMsg() const
{
    return errorMsg_;
}

void Errors::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool Errors::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void Errors::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string Errors::getProjectId() const
{
    return projectId_;
}

void Errors::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Errors::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Errors::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Errors::getResourceType() const
{
    return resourceType_;
}

void Errors::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Errors::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Errors::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


