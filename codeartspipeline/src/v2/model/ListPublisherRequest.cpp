

#include "huaweicloud/codeartspipeline/v2/model/ListPublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPublisherRequest::ListPublisherRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListPublisherRequest::~ListPublisherRequest() = default;

void ListPublisherRequest::validate()
{
}

web::json::value ListPublisherRequest::toJson() const
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
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListPublisherRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListPublisherRequest::getDomainId() const
{
    return domainId_;
}

void ListPublisherRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListPublisherRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListPublisherRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListPublisherRequest::getOffset() const
{
    return offset_;
}

void ListPublisherRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublisherRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublisherRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPublisherRequest::getLimit() const
{
    return limit_;
}

void ListPublisherRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublisherRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublisherRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPublisherRequest::getName() const
{
    return name_;
}

void ListPublisherRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPublisherRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListPublisherRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


