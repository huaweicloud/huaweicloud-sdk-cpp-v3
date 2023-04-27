

#include "huaweicloud/lts/v2/model/ListNotificationTopicsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTopicsRequest::ListNotificationTopicsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListNotificationTopicsRequest::~ListNotificationTopicsRequest() = default;

void ListNotificationTopicsRequest::validate()
{
}

web::json::value ListNotificationTopicsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ListNotificationTopicsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


int32_t ListNotificationTopicsRequest::getOffset() const
{
    return offset_;
}

void ListNotificationTopicsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNotificationTopicsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNotificationTopicsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListNotificationTopicsRequest::getLimit() const
{
    return limit_;
}

void ListNotificationTopicsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNotificationTopicsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNotificationTopicsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNotificationTopicsRequest::getContentType() const
{
    return contentType_;
}

void ListNotificationTopicsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListNotificationTopicsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListNotificationTopicsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


