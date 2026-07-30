

#include "huaweicloud/modelarts/v1/model/ChangeHyperinstanceOSRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeHyperinstanceOSRequest::ChangeHyperinstanceOSRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeHyperinstanceOSRequest::~ChangeHyperinstanceOSRequest() = default;

void ChangeHyperinstanceOSRequest::validate()
{
}

web::json::value ChangeHyperinstanceOSRequest::toJson() const
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
bool ChangeHyperinstanceOSRequest::fromJson(const web::json::value& val)
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
            ServerOsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeHyperinstanceOSRequest::getId() const
{
    return id_;
}

void ChangeHyperinstanceOSRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeHyperinstanceOSRequest::idIsSet() const
{
    return idIsSet_;
}

void ChangeHyperinstanceOSRequest::unsetid()
{
    idIsSet_ = false;
}

ServerOsRequest ChangeHyperinstanceOSRequest::getBody() const
{
    return body_;
}

void ChangeHyperinstanceOSRequest::setBody(const ServerOsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeHyperinstanceOSRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeHyperinstanceOSRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


