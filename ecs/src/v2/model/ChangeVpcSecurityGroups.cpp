

#include "huaweicloud/ecs/v2/model/ChangeVpcSecurityGroups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeVpcSecurityGroups::ChangeVpcSecurityGroups()
{
    idIsSet_ = false;
}

ChangeVpcSecurityGroups::~ChangeVpcSecurityGroups() = default;

void ChangeVpcSecurityGroups::validate()
{
}

web::json::value ChangeVpcSecurityGroups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ChangeVpcSecurityGroups::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


Object ChangeVpcSecurityGroups::getId() const
{
    return id_;
}

void ChangeVpcSecurityGroups::setId(const Object& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeVpcSecurityGroups::idIsSet() const
{
    return idIsSet_;
}

void ChangeVpcSecurityGroups::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


