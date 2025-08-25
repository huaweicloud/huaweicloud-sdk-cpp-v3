

#include "huaweicloud/cce/v3/model/SecurityID.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SecurityID::SecurityID()
{
    id_ = "";
    idIsSet_ = false;
}

SecurityID::~SecurityID() = default;

void SecurityID::validate()
{
}

web::json::value SecurityID::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SecurityID::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SecurityID::getId() const
{
    return id_;
}

void SecurityID::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityID::idIsSet() const
{
    return idIsSet_;
}

void SecurityID::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


