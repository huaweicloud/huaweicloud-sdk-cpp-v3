

#include "huaweicloud/projectman/v4/model/Status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Status::Status()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

Status::~Status() = default;

void Status::validate()
{
}

web::json::value Status::toJson() const
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
bool Status::fromJson(const web::json::value& val)
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


std::string Status::getName() const
{
    return name_;
}

void Status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Status::nameIsSet() const
{
    return nameIsSet_;
}

void Status::unsetname()
{
    nameIsSet_ = false;
}

int32_t Status::getId() const
{
    return id_;
}

void Status::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Status::idIsSet() const
{
    return idIsSet_;
}

void Status::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


