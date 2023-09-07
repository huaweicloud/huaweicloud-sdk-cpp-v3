

#include "huaweicloud/drs/v5/model/DataFilteringCondition.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilteringCondition::DataFilteringCondition()
{
    value_ = "";
    valueIsSet_ = false;
    filteringType_ = "";
    filteringTypeIsSet_ = false;
}

DataFilteringCondition::~DataFilteringCondition() = default;

void DataFilteringCondition::validate()
{
}

web::json::value DataFilteringCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(filteringTypeIsSet_) {
        val[utility::conversions::to_string_t("filtering_type")] = ModelBase::toJson(filteringType_);
    }

    return val;
}

bool DataFilteringCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filtering_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filtering_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilteringType(refVal);
        }
    }
    return ok;
}

std::string DataFilteringCondition::getValue() const
{
    return value_;
}

void DataFilteringCondition::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DataFilteringCondition::valueIsSet() const
{
    return valueIsSet_;
}

void DataFilteringCondition::unsetvalue()
{
    valueIsSet_ = false;
}

std::string DataFilteringCondition::getFilteringType() const
{
    return filteringType_;
}

void DataFilteringCondition::setFilteringType(const std::string& value)
{
    filteringType_ = value;
    filteringTypeIsSet_ = true;
}

bool DataFilteringCondition::filteringTypeIsSet() const
{
    return filteringTypeIsSet_;
}

void DataFilteringCondition::unsetfilteringType()
{
    filteringTypeIsSet_ = false;
}

}
}
}
}
}


