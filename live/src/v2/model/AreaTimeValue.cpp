

#include "huaweicloud/live/v2/model/AreaTimeValue.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




AreaTimeValue::AreaTimeValue()
{
    name_ = "";
    nameIsSet_ = false;
    dataIsSet_ = false;
}

AreaTimeValue::~AreaTimeValue() = default;

void AreaTimeValue::validate()
{
}

web::json::value AreaTimeValue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AreaTimeValue::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<TimeValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

std::string AreaTimeValue::getName() const
{
    return name_;
}

void AreaTimeValue::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AreaTimeValue::nameIsSet() const
{
    return nameIsSet_;
}

void AreaTimeValue::unsetname()
{
    nameIsSet_ = false;
}

std::vector<TimeValue>& AreaTimeValue::getData()
{
    return data_;
}

void AreaTimeValue::setData(const std::vector<TimeValue>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AreaTimeValue::dataIsSet() const
{
    return dataIsSet_;
}

void AreaTimeValue::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


