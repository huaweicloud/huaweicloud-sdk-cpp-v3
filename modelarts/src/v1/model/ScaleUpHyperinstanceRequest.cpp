

#include "huaweicloud/modelarts/v1/model/ScaleUpHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScaleUpHyperinstanceRequest::ScaleUpHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ScaleUpHyperinstanceRequest::~ScaleUpHyperinstanceRequest() = default;

void ScaleUpHyperinstanceRequest::validate()
{
}

web::json::value ScaleUpHyperinstanceRequest::toJson() const
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
bool ScaleUpHyperinstanceRequest::fromJson(const web::json::value& val)
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
            ServerHyperScaleUpRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ScaleUpHyperinstanceRequest::getId() const
{
    return id_;
}

void ScaleUpHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScaleUpHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void ScaleUpHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

ServerHyperScaleUpRequest ScaleUpHyperinstanceRequest::getBody() const
{
    return body_;
}

void ScaleUpHyperinstanceRequest::setBody(const ServerHyperScaleUpRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ScaleUpHyperinstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ScaleUpHyperinstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


