

#include "huaweicloud/smn/v2/model/SubscriptionsFilterPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SubscriptionsFilterPolicy::SubscriptionsFilterPolicy()
{
    name_ = "";
    nameIsSet_ = false;
    stringEqualsIsSet_ = false;
}

SubscriptionsFilterPolicy::~SubscriptionsFilterPolicy() = default;

void SubscriptionsFilterPolicy::validate()
{
}

web::json::value SubscriptionsFilterPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stringEqualsIsSet_) {
        val[utility::conversions::to_string_t("string_equals")] = ModelBase::toJson(stringEquals_);
    }

    return val;
}
bool SubscriptionsFilterPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("string_equals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("string_equals"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStringEquals(refVal);
        }
    }
    return ok;
}


std::string SubscriptionsFilterPolicy::getName() const
{
    return name_;
}

void SubscriptionsFilterPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubscriptionsFilterPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void SubscriptionsFilterPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& SubscriptionsFilterPolicy::getStringEquals()
{
    return stringEquals_;
}

void SubscriptionsFilterPolicy::setStringEquals(const std::vector<std::string>& value)
{
    stringEquals_ = value;
    stringEqualsIsSet_ = true;
}

bool SubscriptionsFilterPolicy::stringEqualsIsSet() const
{
    return stringEqualsIsSet_;
}

void SubscriptionsFilterPolicy::unsetstringEquals()
{
    stringEqualsIsSet_ = false;
}

}
}
}
}
}


