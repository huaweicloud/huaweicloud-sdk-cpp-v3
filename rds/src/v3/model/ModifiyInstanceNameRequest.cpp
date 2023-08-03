

#include "huaweicloud/rds/v3/model/ModifiyInstanceNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifiyInstanceNameRequest::ModifiyInstanceNameRequest()
{
    name_ = "";
    nameIsSet_ = false;
}

ModifiyInstanceNameRequest::~ModifiyInstanceNameRequest() = default;

void ModifiyInstanceNameRequest::validate()
{
}

web::json::value ModifiyInstanceNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool ModifiyInstanceNameRequest::fromJson(const web::json::value& val)
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

std::string ModifiyInstanceNameRequest::getName() const
{
    return name_;
}

void ModifiyInstanceNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifiyInstanceNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ModifiyInstanceNameRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


