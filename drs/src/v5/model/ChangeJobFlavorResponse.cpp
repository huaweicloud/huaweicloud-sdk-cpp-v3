

#include "huaweicloud/drs/v5/model/ChangeJobFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChangeJobFlavorResponse::ChangeJobFlavorResponse()
{
    id_ = "";
    idIsSet_ = false;
}

ChangeJobFlavorResponse::~ChangeJobFlavorResponse() = default;

void ChangeJobFlavorResponse::validate()
{
}

web::json::value ChangeJobFlavorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ChangeJobFlavorResponse::fromJson(const web::json::value& val)
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


std::string ChangeJobFlavorResponse::getId() const
{
    return id_;
}

void ChangeJobFlavorResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeJobFlavorResponse::idIsSet() const
{
    return idIsSet_;
}

void ChangeJobFlavorResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


