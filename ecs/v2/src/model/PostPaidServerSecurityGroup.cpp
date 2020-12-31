

#include "huaweicloud/ecs/model/PostPaidServerSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerSecurityGroup::PostPaidServerSecurityGroup()
{
    id_ = "";
    idIsSet_ = false;
}

PostPaidServerSecurityGroup::~PostPaidServerSecurityGroup() = default;

void PostPaidServerSecurityGroup::validate()
{
}

web::json::value PostPaidServerSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool PostPaidServerSecurityGroup::fromJson(const web::json::value& val)
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


std::string PostPaidServerSecurityGroup::getId() const
{
    return id_;
}

void PostPaidServerSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostPaidServerSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void PostPaidServerSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


