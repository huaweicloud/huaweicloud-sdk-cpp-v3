

#include "huaweicloud/image/v2/model/RunCelebrityRecognitionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunCelebrityRecognitionRequest::RunCelebrityRecognitionRequest()
{
    bodyIsSet_ = false;
}

RunCelebrityRecognitionRequest::~RunCelebrityRecognitionRequest() = default;

void RunCelebrityRecognitionRequest::validate()
{
}

web::json::value RunCelebrityRecognitionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunCelebrityRecognitionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CelebrityRecognitionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CelebrityRecognitionReq RunCelebrityRecognitionRequest::getBody() const
{
    return body_;
}

void RunCelebrityRecognitionRequest::setBody(const CelebrityRecognitionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunCelebrityRecognitionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunCelebrityRecognitionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


