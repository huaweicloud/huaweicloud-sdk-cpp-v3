

#include "huaweicloud/modelarts/v1/model/Owner.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Owner::Owner()
{
    id_ = "";
    idIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

Owner::~Owner() = default;

void Owner::validate()
{
}

web::json::value Owner::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool Owner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string Owner::getId() const
{
    return id_;
}

void Owner::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Owner::idIsSet() const
{
    return idIsSet_;
}

void Owner::unsetid()
{
    idIsSet_ = false;
}

std::string Owner::getDisplayName() const
{
    return displayName_;
}

void Owner::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool Owner::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void Owner::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


