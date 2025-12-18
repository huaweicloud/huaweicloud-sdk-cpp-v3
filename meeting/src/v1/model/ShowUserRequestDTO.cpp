

#include "huaweicloud/meeting/v1/model/ShowUserRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowUserRequestDTO::ShowUserRequestDTO()
{
    id_ = "";
    idIsSet_ = false;
}

ShowUserRequestDTO::~ShowUserRequestDTO() = default;

void ShowUserRequestDTO::validate()
{
}

web::json::value ShowUserRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowUserRequestDTO::fromJson(const web::json::value& val)
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


std::string ShowUserRequestDTO::getId() const
{
    return id_;
}

void ShowUserRequestDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowUserRequestDTO::idIsSet() const
{
    return idIsSet_;
}

void ShowUserRequestDTO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


