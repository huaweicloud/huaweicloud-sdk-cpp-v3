

#include "huaweicloud/modelarts/v1/model/BatchDeleteInferServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteInferServicesRequest::BatchDeleteInferServicesRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteInferServicesRequest::~BatchDeleteInferServicesRequest() = default;

void BatchDeleteInferServicesRequest::validate()
{
}

web::json::value BatchDeleteInferServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteInferServicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteServicesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInferServicesRequest::getContentType() const
{
    return contentType_;
}

void BatchDeleteInferServicesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool BatchDeleteInferServicesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void BatchDeleteInferServicesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteServicesRequest BatchDeleteInferServicesRequest::getBody() const
{
    return body_;
}

void BatchDeleteInferServicesRequest::setBody(const DeleteServicesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInferServicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInferServicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


