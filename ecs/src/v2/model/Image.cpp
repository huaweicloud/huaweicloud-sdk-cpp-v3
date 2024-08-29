

#include "huaweicloud/ecs/v2/model/Image.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Image::Image()
{
    id_ = "";
    idIsSet_ = false;
}

Image::~Image() = default;

void Image::validate()
{
}

web::json::value Image::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool Image::fromJson(const web::json::value& val)
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


std::string Image::getId() const
{
    return id_;
}

void Image::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Image::idIsSet() const
{
    return idIsSet_;
}

void Image::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


