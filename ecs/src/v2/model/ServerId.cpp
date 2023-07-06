

#include "huaweicloud/ecs/v2/model/ServerId.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerId::ServerId()
{
    id_ = "";
    idIsSet_ = false;
}

ServerId::~ServerId() = default;

void ServerId::validate()
{
}

web::json::value ServerId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ServerId::fromJson(const web::json::value& val)
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

std::string ServerId::getId() const
{
    return id_;
}

void ServerId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerId::idIsSet() const
{
    return idIsSet_;
}

void ServerId::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


