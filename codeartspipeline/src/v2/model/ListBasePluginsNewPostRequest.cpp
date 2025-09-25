

#include "huaweicloud/codeartspipeline/v2/model/ListBasePluginsNewPostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListBasePluginsNewPostRequest::ListBasePluginsNewPostRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    bodyIsSet_ = false;
}

ListBasePluginsNewPostRequest::~ListBasePluginsNewPostRequest() = default;

void ListBasePluginsNewPostRequest::validate()
{
}

web::json::value ListBasePluginsNewPostRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBasePluginsNewPostRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BusinessTypePluginsQueryDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListBasePluginsNewPostRequest::getDomainId() const
{
    return domainId_;
}

void ListBasePluginsNewPostRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListBasePluginsNewPostRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListBasePluginsNewPostRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t ListBasePluginsNewPostRequest::getOffset() const
{
    return offset_;
}

void ListBasePluginsNewPostRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBasePluginsNewPostRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBasePluginsNewPostRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBasePluginsNewPostRequest::getLimit() const
{
    return limit_;
}

void ListBasePluginsNewPostRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBasePluginsNewPostRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBasePluginsNewPostRequest::unsetlimit()
{
    limitIsSet_ = false;
}

BusinessTypePluginsQueryDTO ListBasePluginsNewPostRequest::getBody() const
{
    return body_;
}

void ListBasePluginsNewPostRequest::setBody(const BusinessTypePluginsQueryDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBasePluginsNewPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBasePluginsNewPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


