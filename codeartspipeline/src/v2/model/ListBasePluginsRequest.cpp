

#include "huaweicloud/codeartspipeline/v2/model/ListBasePluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListBasePluginsRequest::ListBasePluginsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    attribution_ = "";
    attributionIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListBasePluginsRequest::~ListBasePluginsRequest() = default;

void ListBasePluginsRequest::validate()
{
}

web::json::value ListBasePluginsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(attributionIsSet_) {
        val[utility::conversions::to_string_t("attribution")] = ModelBase::toJson(attribution_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListBasePluginsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribution(refVal);
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
    return ok;
}


std::string ListBasePluginsRequest::getDomainId() const
{
    return domainId_;
}

void ListBasePluginsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListBasePluginsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListBasePluginsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListBasePluginsRequest::getAttribution() const
{
    return attribution_;
}

void ListBasePluginsRequest::setAttribution(const std::string& value)
{
    attribution_ = value;
    attributionIsSet_ = true;
}

bool ListBasePluginsRequest::attributionIsSet() const
{
    return attributionIsSet_;
}

void ListBasePluginsRequest::unsetattribution()
{
    attributionIsSet_ = false;
}

std::string ListBasePluginsRequest::getOffset() const
{
    return offset_;
}

void ListBasePluginsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBasePluginsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBasePluginsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBasePluginsRequest::getLimit() const
{
    return limit_;
}

void ListBasePluginsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBasePluginsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBasePluginsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


