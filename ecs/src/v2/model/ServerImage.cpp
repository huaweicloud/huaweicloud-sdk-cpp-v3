

#include "huaweicloud/ecs/v2/model/ServerImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerImage::ServerImage()
{
    id_ = "";
    idIsSet_ = false;
}

ServerImage::~ServerImage() = default;

void ServerImage::validate()
{
}

web::json::value ServerImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ServerImage::fromJson(const web::json::value& val)
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

std::string ServerImage::getId() const
{
    return id_;
}

void ServerImage::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerImage::idIsSet() const
{
    return idIsSet_;
}

void ServerImage::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


