

#include "huaweicloud/meeting/v1/model/DeleteWebHookConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteWebHookConfigRequest::DeleteWebHookConfigRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteWebHookConfigRequest::~DeleteWebHookConfigRequest() = default;

void DeleteWebHookConfigRequest::validate()
{
}

web::json::value DeleteWebHookConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteWebHookConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteWebHookConfigRequest::getId() const
{
    return id_;
}

void DeleteWebHookConfigRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteWebHookConfigRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteWebHookConfigRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


