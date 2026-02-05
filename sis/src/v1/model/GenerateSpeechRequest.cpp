

#include "huaweicloud/sis/v1/model/GenerateSpeechRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




GenerateSpeechRequest::GenerateSpeechRequest()
{
    bodyIsSet_ = false;
}

GenerateSpeechRequest::~GenerateSpeechRequest() = default;

void GenerateSpeechRequest::validate()
{
}

web::json::value GenerateSpeechRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GenerateSpeechRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GenerateSpeechRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GenerateSpeechRequestBody GenerateSpeechRequest::getBody() const
{
    return body_;
}

void GenerateSpeechRequest::setBody(const GenerateSpeechRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GenerateSpeechRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GenerateSpeechRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


