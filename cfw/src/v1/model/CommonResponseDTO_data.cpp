

#include "huaweicloud/cfw/v1/model/CommonResponseDTO_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CommonResponseDTO_data::CommonResponseDTO_data()
{
    id_ = "";
    idIsSet_ = false;
}

CommonResponseDTO_data::~CommonResponseDTO_data() = default;

void CommonResponseDTO_data::validate()
{
}

web::json::value CommonResponseDTO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool CommonResponseDTO_data::fromJson(const web::json::value& val)
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


std::string CommonResponseDTO_data::getId() const
{
    return id_;
}

void CommonResponseDTO_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommonResponseDTO_data::idIsSet() const
{
    return idIsSet_;
}

void CommonResponseDTO_data::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


