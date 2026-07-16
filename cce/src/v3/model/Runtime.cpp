

#include "huaweicloud/cce/v3/model/Runtime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Runtime::Runtime()
{
    name_ = "";
    nameIsSet_ = false;
    runtimeClass_ = "";
    runtimeClassIsSet_ = false;
}

Runtime::~Runtime() = default;

void Runtime::validate()
{
}

web::json::value Runtime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(runtimeClassIsSet_) {
        val[utility::conversions::to_string_t("runtimeClass")] = ModelBase::toJson(runtimeClass_);
    }

    return val;
}
bool Runtime::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("runtimeClass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtimeClass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeClass(refVal);
        }
    }
    return ok;
}


std::string Runtime::getName() const
{
    return name_;
}

void Runtime::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Runtime::nameIsSet() const
{
    return nameIsSet_;
}

void Runtime::unsetname()
{
    nameIsSet_ = false;
}

std::string Runtime::getRuntimeClass() const
{
    return runtimeClass_;
}

void Runtime::setRuntimeClass(const std::string& value)
{
    runtimeClass_ = value;
    runtimeClassIsSet_ = true;
}

bool Runtime::runtimeClassIsSet() const
{
    return runtimeClassIsSet_;
}

void Runtime::unsetruntimeClass()
{
    runtimeClassIsSet_ = false;
}

}
}
}
}
}


