

#include "huaweicloud/ocr/v1/model/RecognizePcrTestRecordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePcrTestRecordRequest::RecognizePcrTestRecordRequest()
{
    bodyIsSet_ = false;
}

RecognizePcrTestRecordRequest::~RecognizePcrTestRecordRequest() = default;

void RecognizePcrTestRecordRequest::validate()
{
}

web::json::value RecognizePcrTestRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizePcrTestRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PcrTestRecordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PcrTestRecordRequestBody RecognizePcrTestRecordRequest::getBody() const
{
    return body_;
}

void RecognizePcrTestRecordRequest::setBody(const PcrTestRecordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizePcrTestRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizePcrTestRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


