

#include "huaweicloud/modelarts/v1/model/ListEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEventsRequest::ListEventsRequest()
{
    resource_ = "";
    resourceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    continue_ = "";
    continueIsSet_ = false;
    since_ = 0;
    sinceIsSet_ = false;
    until_ = 0;
    untilIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListEventsRequest::~ListEventsRequest() = default;

void ListEventsRequest::validate()
{
}

web::json::value ListEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }
    if(sinceIsSet_) {
        val[utility::conversions::to_string_t("since")] = ModelBase::toJson(since_);
    }
    if(untilIsSet_) {
        val[utility::conversions::to_string_t("until")] = ModelBase::toJson(until_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("since"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("until"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListEventsRequest::getResource() const
{
    return resource_;
}

void ListEventsRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ListEventsRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ListEventsRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ListEventsRequest::getName() const
{
    return name_;
}

void ListEventsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEventsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListEventsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListEventsRequest::getLimit() const
{
    return limit_;
}

void ListEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEventsRequest::getContinue() const
{
    return continue_;
}

void ListEventsRequest::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ListEventsRequest::continueIsSet() const
{
    return continueIsSet_;
}

void ListEventsRequest::unsetcontinue()
{
    continueIsSet_ = false;
}

int32_t ListEventsRequest::getSince() const
{
    return since_;
}

void ListEventsRequest::setSince(int32_t value)
{
    since_ = value;
    sinceIsSet_ = true;
}

bool ListEventsRequest::sinceIsSet() const
{
    return sinceIsSet_;
}

void ListEventsRequest::unsetsince()
{
    sinceIsSet_ = false;
}

int32_t ListEventsRequest::getUntil() const
{
    return until_;
}

void ListEventsRequest::setUntil(int32_t value)
{
    until_ = value;
    untilIsSet_ = true;
}

bool ListEventsRequest::untilIsSet() const
{
    return untilIsSet_;
}

void ListEventsRequest::unsetuntil()
{
    untilIsSet_ = false;
}

std::string ListEventsRequest::getType() const
{
    return type_;
}

void ListEventsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


