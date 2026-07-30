

#include "huaweicloud/modelarts/v1/model/ListJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListJobsRequest::ListJobsRequest()
{
    type_ = "";
    typeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    since_ = 0L;
    sinceIsSet_ = false;
    until_ = 0L;
    untilIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListJobsRequest::~ListJobsRequest() = default;

void ListJobsRequest::validate()
{
}

web::json::value ListJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sinceIsSet_) {
        val[utility::conversions::to_string_t("since")] = ModelBase::toJson(since_);
    }
    if(untilIsSet_) {
        val[utility::conversions::to_string_t("until")] = ModelBase::toJson(until_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("since"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("until"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
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


std::string ListJobsRequest::getType() const
{
    return type_;
}

void ListJobsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListJobsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListJobsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListJobsRequest::getLimit() const
{
    return limit_;
}

void ListJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListJobsRequest::getOffset() const
{
    return offset_;
}

void ListJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListJobsRequest::getSince() const
{
    return since_;
}

void ListJobsRequest::setSince(int64_t value)
{
    since_ = value;
    sinceIsSet_ = true;
}

bool ListJobsRequest::sinceIsSet() const
{
    return sinceIsSet_;
}

void ListJobsRequest::unsetsince()
{
    sinceIsSet_ = false;
}

int64_t ListJobsRequest::getUntil() const
{
    return until_;
}

void ListJobsRequest::setUntil(int64_t value)
{
    until_ = value;
    untilIsSet_ = true;
}

bool ListJobsRequest::untilIsSet() const
{
    return untilIsSet_;
}

void ListJobsRequest::unsetuntil()
{
    untilIsSet_ = false;
}

std::string ListJobsRequest::getResource() const
{
    return resource_;
}

void ListJobsRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ListJobsRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ListJobsRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ListJobsRequest::getName() const
{
    return name_;
}

void ListJobsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobsRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


