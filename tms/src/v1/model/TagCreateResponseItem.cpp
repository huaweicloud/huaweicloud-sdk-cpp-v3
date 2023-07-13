

#include "huaweicloud/tms/v1/model/TagCreateResponseItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




TagCreateResponseItem::TagCreateResponseItem()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

TagCreateResponseItem::~TagCreateResponseItem() = default;

void TagCreateResponseItem::validate()
{
}

web::json::value TagCreateResponseItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
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

bool TagCreateResponseItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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

std::string TagCreateResponseItem::getResourceId() const
{
    return resourceId_;
}

void TagCreateResponseItem::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TagCreateResponseItem::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TagCreateResponseItem::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string TagCreateResponseItem::getResourceType() const
{
    return resourceType_;
}

void TagCreateResponseItem::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool TagCreateResponseItem::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void TagCreateResponseItem::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string TagCreateResponseItem::getErrorCode() const
{
    return errorCode_;
}

void TagCreateResponseItem::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TagCreateResponseItem::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TagCreateResponseItem::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string TagCreateResponseItem::getErrorMsg() const
{
    return errorMsg_;
}

void TagCreateResponseItem::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool TagCreateResponseItem::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void TagCreateResponseItem::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


