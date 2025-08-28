

#include "huaweicloud/tms/v1/model/TagListErrorItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




TagListErrorItem::TagListErrorItem()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

TagListErrorItem::~TagListErrorItem() = default;

void TagListErrorItem::validate()
{
}

web::json::value TagListErrorItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool TagListErrorItem::fromJson(const web::json::value& val)
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


std::string TagListErrorItem::getProjectId() const
{
    return projectId_;
}

void TagListErrorItem::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TagListErrorItem::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TagListErrorItem::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TagListErrorItem::getResourceType() const
{
    return resourceType_;
}

void TagListErrorItem::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool TagListErrorItem::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void TagListErrorItem::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string TagListErrorItem::getErrorCode() const
{
    return errorCode_;
}

void TagListErrorItem::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TagListErrorItem::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TagListErrorItem::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string TagListErrorItem::getErrorMsg() const
{
    return errorMsg_;
}

void TagListErrorItem::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool TagListErrorItem::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void TagListErrorItem::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


