

#include "huaweicloud/projectman/v4/model/Severity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Severity::Severity()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

Severity::~Severity() = default;

void Severity::validate()
{
}

web::json::value Severity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool Severity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string Severity::getName() const
{
    return name_;
}

void Severity::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Severity::nameIsSet() const
{
    return nameIsSet_;
}

void Severity::unsetname()
{
    nameIsSet_ = false;
}

int32_t Severity::getId() const
{
    return id_;
}

void Severity::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Severity::idIsSet() const
{
    return idIsSet_;
}

void Severity::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


