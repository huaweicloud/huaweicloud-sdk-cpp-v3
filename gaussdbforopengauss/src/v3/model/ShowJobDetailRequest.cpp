

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowJobDetailRequest::ShowJobDetailRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowJobDetailRequest::~ShowJobDetailRequest() = default;

void ShowJobDetailRequest::validate()
{
}

web::json::value ShowJobDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ShowJobDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowJobDetailRequest::getId() const
{
    return id_;
}

void ShowJobDetailRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowJobDetailRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowJobDetailRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


