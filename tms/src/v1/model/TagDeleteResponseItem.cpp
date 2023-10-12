

#include "huaweicloud/tms/v1/model/TagDeleteResponseItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




TagDeleteResponseItem::TagDeleteResponseItem()
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

TagDeleteResponseItem::~TagDeleteResponseItem() = default;

void TagDeleteResponseItem::validate()
{
}

web::json::value TagDeleteResponseItem::toJson() const
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
bool TagDeleteResponseItem::fromJson(const web::json::value& val)
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


std::string TagDeleteResponseItem::getResourceId() const
{
    return resourceId_;
}

void TagDeleteResponseItem::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TagDeleteResponseItem::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TagDeleteResponseItem::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string TagDeleteResponseItem::getResourceType() const
{
    return resourceType_;
}

void TagDeleteResponseItem::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool TagDeleteResponseItem::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void TagDeleteResponseItem::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string TagDeleteResponseItem::getErrorCode() const
{
    return errorCode_;
}

void TagDeleteResponseItem::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TagDeleteResponseItem::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TagDeleteResponseItem::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string TagDeleteResponseItem::getErrorMsg() const
{
    return errorMsg_;
}

void TagDeleteResponseItem::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool TagDeleteResponseItem::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void TagDeleteResponseItem::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


