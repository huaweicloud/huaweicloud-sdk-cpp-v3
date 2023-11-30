

#include "huaweicloud/eip/v2/model/SuccessResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




SuccessResources::SuccessResources()
{
    id_ = "";
    idIsSet_ = false;
}

SuccessResources::~SuccessResources() = default;

void SuccessResources::validate()
{
}

web::json::value SuccessResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SuccessResources::fromJson(const web::json::value& val)
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


std::string SuccessResources::getId() const
{
    return id_;
}

void SuccessResources::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SuccessResources::idIsSet() const
{
    return idIsSet_;
}

void SuccessResources::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


