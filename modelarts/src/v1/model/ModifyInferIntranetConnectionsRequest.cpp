

#include "huaweicloud/modelarts/v1/model/ModifyInferIntranetConnectionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyInferIntranetConnectionsRequest::ModifyInferIntranetConnectionsRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyInferIntranetConnectionsRequest::~ModifyInferIntranetConnectionsRequest() = default;

void ModifyInferIntranetConnectionsRequest::validate()
{
}

web::json::value ModifyInferIntranetConnectionsRequest::toJson() const
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
bool ModifyInferIntranetConnectionsRequest::fromJson(const web::json::value& val)
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
            IntranetConnectionModifyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyInferIntranetConnectionsRequest::getId() const
{
    return id_;
}

void ModifyInferIntranetConnectionsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyInferIntranetConnectionsRequest::idIsSet() const
{
    return idIsSet_;
}

void ModifyInferIntranetConnectionsRequest::unsetid()
{
    idIsSet_ = false;
}

IntranetConnectionModifyRequest ModifyInferIntranetConnectionsRequest::getBody() const
{
    return body_;
}

void ModifyInferIntranetConnectionsRequest::setBody(const IntranetConnectionModifyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyInferIntranetConnectionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyInferIntranetConnectionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


