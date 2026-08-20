

#include "huaweicloud/modelarts/v1/model/ListTagFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTagFilter::ListTagFilter()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ListTagFilter::~ListTagFilter() = default;

void ListTagFilter::validate()
{
}

web::json::value ListTagFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ListTagFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string ListTagFilter::getKey() const
{
    return key_;
}

void ListTagFilter::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListTagFilter::keyIsSet() const
{
    return keyIsSet_;
}

void ListTagFilter::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ListTagFilter::getValues()
{
    return values_;
}

void ListTagFilter::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListTagFilter::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListTagFilter::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


