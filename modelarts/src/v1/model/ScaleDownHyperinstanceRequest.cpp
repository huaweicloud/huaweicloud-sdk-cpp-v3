

#include "huaweicloud/modelarts/v1/model/ScaleDownHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScaleDownHyperinstanceRequest::ScaleDownHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ScaleDownHyperinstanceRequest::~ScaleDownHyperinstanceRequest() = default;

void ScaleDownHyperinstanceRequest::validate()
{
}

web::json::value ScaleDownHyperinstanceRequest::toJson() const
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
bool ScaleDownHyperinstanceRequest::fromJson(const web::json::value& val)
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
            ServerScaleDownRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ScaleDownHyperinstanceRequest::getId() const
{
    return id_;
}

void ScaleDownHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScaleDownHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void ScaleDownHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

ServerScaleDownRequest ScaleDownHyperinstanceRequest::getBody() const
{
    return body_;
}

void ScaleDownHyperinstanceRequest::setBody(const ServerScaleDownRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ScaleDownHyperinstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ScaleDownHyperinstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


