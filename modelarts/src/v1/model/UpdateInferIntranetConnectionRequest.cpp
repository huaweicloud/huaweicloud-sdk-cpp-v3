

#include "huaweicloud/modelarts/v1/model/UpdateInferIntranetConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferIntranetConnectionRequest::UpdateInferIntranetConnectionRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInferIntranetConnectionRequest::~UpdateInferIntranetConnectionRequest() = default;

void UpdateInferIntranetConnectionRequest::validate()
{
}

web::json::value UpdateInferIntranetConnectionRequest::toJson() const
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
bool UpdateInferIntranetConnectionRequest::fromJson(const web::json::value& val)
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
            UpdateIntranetConnectionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInferIntranetConnectionRequest::getId() const
{
    return id_;
}

void UpdateInferIntranetConnectionRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateInferIntranetConnectionRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateInferIntranetConnectionRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateIntranetConnectionRequestBody UpdateInferIntranetConnectionRequest::getBody() const
{
    return body_;
}

void UpdateInferIntranetConnectionRequest::setBody(const UpdateIntranetConnectionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInferIntranetConnectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInferIntranetConnectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


