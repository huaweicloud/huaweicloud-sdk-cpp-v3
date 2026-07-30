

#include "huaweicloud/modelarts/v1/model/CreateInferApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferApiKeyRequest::CreateInferApiKeyRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferApiKeyRequest::~CreateInferApiKeyRequest() = default;

void CreateInferApiKeyRequest::validate()
{
}

web::json::value CreateInferApiKeyRequest::toJson() const
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
bool CreateInferApiKeyRequest::fromJson(const web::json::value& val)
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
            CreateApiKeyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferApiKeyRequest::getContentType() const
{
    return contentType_;
}

void CreateInferApiKeyRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferApiKeyRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferApiKeyRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateApiKeyReq CreateInferApiKeyRequest::getBody() const
{
    return body_;
}

void CreateInferApiKeyRequest::setBody(const CreateApiKeyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferApiKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferApiKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


