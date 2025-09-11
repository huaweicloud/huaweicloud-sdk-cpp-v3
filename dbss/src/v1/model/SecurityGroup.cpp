

#include "huaweicloud/dbss/v1/model/SecurityGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SecurityGroup::SecurityGroup()
{
    id_ = "";
    idIsSet_ = false;
}

SecurityGroup::~SecurityGroup() = default;

void SecurityGroup::validate()
{
}

web::json::value SecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SecurityGroup::fromJson(const web::json::value& val)
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


std::string SecurityGroup::getId() const
{
    return id_;
}

void SecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void SecurityGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


