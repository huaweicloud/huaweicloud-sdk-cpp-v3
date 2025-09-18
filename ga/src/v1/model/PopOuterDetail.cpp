

#include "huaweicloud/ga/v1/model/PopOuterDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




PopOuterDetail::PopOuterDetail()
{
    id_ = "";
    idIsSet_ = false;
}

PopOuterDetail::~PopOuterDetail() = default;

void PopOuterDetail::validate()
{
}

web::json::value PopOuterDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool PopOuterDetail::fromJson(const web::json::value& val)
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


std::string PopOuterDetail::getId() const
{
    return id_;
}

void PopOuterDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PopOuterDetail::idIsSet() const
{
    return idIsSet_;
}

void PopOuterDetail::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


