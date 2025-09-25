

#include "huaweicloud/codeartspipeline/v2/model/ListPluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPluginsRequest::ListPluginsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    bodyIsSet_ = false;
}

ListPluginsRequest::~ListPluginsRequest() = default;

void ListPluginsRequest::validate()
{
}

web::json::value ListPluginsRequest::toJson() const
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
bool ListPluginsRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgentPluginInfoQueryDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPluginsRequest::getDomainId() const
{
    return domainId_;
}

void ListPluginsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListPluginsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListPluginsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListPluginsRequest::getOffset() const
{
    return offset_;
}

void ListPluginsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPluginsRequest::getLimit() const
{
    return limit_;
}

void ListPluginsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

AgentPluginInfoQueryDTO ListPluginsRequest::getBody() const
{
    return body_;
}

void ListPluginsRequest::setBody(const AgentPluginInfoQueryDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPluginsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPluginsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


