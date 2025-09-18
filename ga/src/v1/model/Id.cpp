

#include "huaweicloud/ga/v1/model/Id.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




Id::Id()
{
    id_ = "";
    idIsSet_ = false;
}

Id::~Id() = default;

void Id::validate()
{
}

web::json::value Id::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool Id::fromJson(const web::json::value& val)
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


std::string Id::getId() const
{
    return id_;
}

void Id::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Id::idIsSet() const
{
    return idIsSet_;
}

void Id::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


