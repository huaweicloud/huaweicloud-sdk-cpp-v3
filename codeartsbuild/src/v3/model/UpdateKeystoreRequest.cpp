

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystoreRequest::UpdateKeystoreRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKeystoreRequest::~UpdateKeystoreRequest() = default;

void UpdateKeystoreRequest::validate()
{
}

web::json::value UpdateKeystoreRequest::toJson() const
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
bool UpdateKeystoreRequest::fromJson(const web::json::value& val)
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
            UpdateKeystoreRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKeystoreRequest::getId() const
{
    return id_;
}

void UpdateKeystoreRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateKeystoreRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateKeystoreRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateKeystoreRequestBody UpdateKeystoreRequest::getBody() const
{
    return body_;
}

void UpdateKeystoreRequest::setBody(const UpdateKeystoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeystoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeystoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


