

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

}
}
}
}
}


