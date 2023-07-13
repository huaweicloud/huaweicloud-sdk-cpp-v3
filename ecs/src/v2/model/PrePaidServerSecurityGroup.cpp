

#include "huaweicloud/ecs/v2/model/PrePaidServerSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerSecurityGroup::PrePaidServerSecurityGroup()
{
    id_ = "";
    idIsSet_ = false;
}

PrePaidServerSecurityGroup::~PrePaidServerSecurityGroup() = default;

void PrePaidServerSecurityGroup::validate()
{
}

web::json::value PrePaidServerSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool PrePaidServerSecurityGroup::fromJson(const web::json::value& val)
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

std::string PrePaidServerSecurityGroup::getId() const
{
    return id_;
}

void PrePaidServerSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrePaidServerSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void PrePaidServerSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


