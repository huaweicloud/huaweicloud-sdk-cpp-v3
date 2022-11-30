

#include "huaweicloud/ivs/v2/model/DetectStandardByNameAndIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByNameAndIdRequest::DetectStandardByNameAndIdRequest()
{
    bodyIsSet_ = false;
}

DetectStandardByNameAndIdRequest::~DetectStandardByNameAndIdRequest() = default;

void DetectStandardByNameAndIdRequest::validate()
{
}

web::json::value DetectStandardByNameAndIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectStandardByNameAndIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IvsStandardByNameAndIdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IvsStandardByNameAndIdRequestBody DetectStandardByNameAndIdRequest::getBody() const
{
    return body_;
}

void DetectStandardByNameAndIdRequest::setBody(const IvsStandardByNameAndIdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectStandardByNameAndIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectStandardByNameAndIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


