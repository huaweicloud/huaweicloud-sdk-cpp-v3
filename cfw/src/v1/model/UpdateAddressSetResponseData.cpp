

#include "huaweicloud/cfw/v1/model/UpdateAddressSetResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetResponseData::UpdateAddressSetResponseData()
{
    id_ = "";
    idIsSet_ = false;
}

UpdateAddressSetResponseData::~UpdateAddressSetResponseData() = default;

void UpdateAddressSetResponseData::validate()
{
}

web::json::value UpdateAddressSetResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateAddressSetResponseData::fromJson(const web::json::value& val)
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


std::string UpdateAddressSetResponseData::getId() const
{
    return id_;
}

void UpdateAddressSetResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAddressSetResponseData::idIsSet() const
{
    return idIsSet_;
}

void UpdateAddressSetResponseData::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


