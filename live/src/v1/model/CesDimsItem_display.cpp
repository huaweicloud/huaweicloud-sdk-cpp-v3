

#include "huaweicloud/live/v1/model/CesDimsItem_display.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CesDimsItem_display::CesDimsItem_display()
{
    idIsSet_ = false;
}

CesDimsItem_display::~CesDimsItem_display() = default;

void CesDimsItem_display::validate()
{
}

web::json::value CesDimsItem_display::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CesDimsItem_display::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            CesDimsItem_display_id refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


CesDimsItem_display_id CesDimsItem_display::getId() const
{
    return id_;
}

void CesDimsItem_display::setId(const CesDimsItem_display_id& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CesDimsItem_display::idIsSet() const
{
    return idIsSet_;
}

void CesDimsItem_display::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


