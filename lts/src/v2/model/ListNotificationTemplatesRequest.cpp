

#include "huaweicloud/lts/v2/model/ListNotificationTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTemplatesRequest::ListNotificationTemplatesRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListNotificationTemplatesRequest::~ListNotificationTemplatesRequest() = default;

void ListNotificationTemplatesRequest::validate()
{
}

web::json::value ListNotificationTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
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
bool ListNotificationTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
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


std::string ListNotificationTemplatesRequest::getDomainId() const
{
    return domainId_;
}

void ListNotificationTemplatesRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListNotificationTemplatesRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListNotificationTemplatesRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t ListNotificationTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListNotificationTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNotificationTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNotificationTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListNotificationTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListNotificationTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNotificationTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNotificationTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNotificationTemplatesRequest::getContentType() const
{
    return contentType_;
}

void ListNotificationTemplatesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListNotificationTemplatesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListNotificationTemplatesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


