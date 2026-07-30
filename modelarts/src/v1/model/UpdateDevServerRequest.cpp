

#include "huaweicloud/modelarts/v1/model/UpdateDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateDevServerRequest::UpdateDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDevServerRequest::~UpdateDevServerRequest() = default;

void UpdateDevServerRequest::validate()
{
}

web::json::value UpdateDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDevServerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateServerRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDevServerRequest::getId() const
{
    return id_;
}

void UpdateDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateServerRequest UpdateDevServerRequest::getBody() const
{
    return body_;
}

void UpdateDevServerRequest::setBody(const UpdateServerRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDevServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDevServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


