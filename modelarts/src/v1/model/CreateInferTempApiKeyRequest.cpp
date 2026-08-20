

#include "huaweicloud/modelarts/v1/model/CreateInferTempApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferTempApiKeyRequest::CreateInferTempApiKeyRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferTempApiKeyRequest::~CreateInferTempApiKeyRequest() = default;

void CreateInferTempApiKeyRequest::validate()
{
}

web::json::value CreateInferTempApiKeyRequest::toJson() const
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
bool CreateInferTempApiKeyRequest::fromJson(const web::json::value& val)
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
            CreateTempApiKeyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferTempApiKeyRequest::getContentType() const
{
    return contentType_;
}

void CreateInferTempApiKeyRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferTempApiKeyRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferTempApiKeyRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateTempApiKeyReq CreateInferTempApiKeyRequest::getBody() const
{
    return body_;
}

void CreateInferTempApiKeyRequest::setBody(const CreateTempApiKeyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferTempApiKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferTempApiKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


