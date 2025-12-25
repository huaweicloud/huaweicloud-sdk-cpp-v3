

#include "huaweicloud/codeartsartifact/v2/model/ShowFileDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileDetailRequest::ShowFileDetailRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowFileDetailRequest::~ShowFileDetailRequest() = default;

void ShowFileDetailRequest::validate()
{
}

web::json::value ShowFileDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowFileDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowFileDetailRequest::getId() const
{
    return id_;
}

void ShowFileDetailRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFileDetailRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowFileDetailRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


