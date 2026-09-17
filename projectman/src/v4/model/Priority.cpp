

#include "huaweicloud/projectman/v4/model/Priority.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Priority::Priority()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

Priority::~Priority() = default;

void Priority::validate()
{
}

web::json::value Priority::toJson() const
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
bool Priority::fromJson(const web::json::value& val)
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


std::string Priority::getName() const
{
    return name_;
}

void Priority::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Priority::nameIsSet() const
{
    return nameIsSet_;
}

void Priority::unsetname()
{
    nameIsSet_ = false;
}

int32_t Priority::getId() const
{
    return id_;
}

void Priority::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Priority::idIsSet() const
{
    return idIsSet_;
}

void Priority::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


