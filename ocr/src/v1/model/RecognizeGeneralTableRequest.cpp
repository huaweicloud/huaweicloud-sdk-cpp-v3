

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTableRequest::RecognizeGeneralTableRequest()
{
    bodyIsSet_ = false;
}

RecognizeGeneralTableRequest::~RecognizeGeneralTableRequest() = default;

void RecognizeGeneralTableRequest::validate()
{
}

web::json::value RecognizeGeneralTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeGeneralTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GeneralTableRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GeneralTableRequestBody RecognizeGeneralTableRequest::getBody() const
{
    return body_;
}

void RecognizeGeneralTableRequest::setBody(const GeneralTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeGeneralTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeGeneralTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


