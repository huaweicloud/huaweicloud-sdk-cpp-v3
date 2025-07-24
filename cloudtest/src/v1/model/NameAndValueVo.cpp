

#include "huaweicloud/cloudtest/v1/model/NameAndValueVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




NameAndValueVo::NameAndValueVo()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

NameAndValueVo::~NameAndValueVo() = default;

void NameAndValueVo::validate()
{
}

web::json::value NameAndValueVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool NameAndValueVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string NameAndValueVo::getName() const
{
    return name_;
}

void NameAndValueVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NameAndValueVo::nameIsSet() const
{
    return nameIsSet_;
}

void NameAndValueVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t NameAndValueVo::getValue() const
{
    return value_;
}

void NameAndValueVo::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NameAndValueVo::valueIsSet() const
{
    return valueIsSet_;
}

void NameAndValueVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


