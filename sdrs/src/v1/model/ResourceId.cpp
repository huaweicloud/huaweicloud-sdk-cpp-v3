

#include "huaweicloud/sdrs/v1/model/ResourceId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResourceId::ResourceId()
{
    id_ = "";
    idIsSet_ = false;
}

ResourceId::~ResourceId() = default;

void ResourceId::validate()
{
}

web::json::value ResourceId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ResourceId::fromJson(const web::json::value& val)
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


std::string ResourceId::getId() const
{
    return id_;
}

void ResourceId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceId::idIsSet() const
{
    return idIsSet_;
}

void ResourceId::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


