

#include "huaweicloud/cpcs/v1/model/ShowStatusInstanceItem_instance_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusInstanceItem_instance_list::ShowStatusInstanceItem_instance_list()
{
    instanceName_ = "";
    instanceNameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

ShowStatusInstanceItem_instance_list::~ShowStatusInstanceItem_instance_list() = default;

void ShowStatusInstanceItem_instance_list::validate()
{
}

web::json::value ShowStatusInstanceItem_instance_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ShowStatusInstanceItem_instance_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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


std::string ShowStatusInstanceItem_instance_list::getInstanceName() const
{
    return instanceName_;
}

void ShowStatusInstanceItem_instance_list::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowStatusInstanceItem_instance_list::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowStatusInstanceItem_instance_list::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t ShowStatusInstanceItem_instance_list::getValue() const
{
    return value_;
}

void ShowStatusInstanceItem_instance_list::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ShowStatusInstanceItem_instance_list::valueIsSet() const
{
    return valueIsSet_;
}

void ShowStatusInstanceItem_instance_list::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


