

#include "huaweicloud/modelarts/v1/model/UpdateImageGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateImageGroupRequest::UpdateImageGroupRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateImageGroupRequest::~UpdateImageGroupRequest() = default;

void UpdateImageGroupRequest::validate()
{
}

web::json::value UpdateImageGroupRequest::toJson() const
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
bool UpdateImageGroupRequest::fromJson(const web::json::value& val)
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
            UpdateImageGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateImageGroupRequest::getId() const
{
    return id_;
}

void UpdateImageGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateImageGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateImageGroupRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateImageGroupRequestBody UpdateImageGroupRequest::getBody() const
{
    return body_;
}

void UpdateImageGroupRequest::setBody(const UpdateImageGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateImageGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateImageGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


