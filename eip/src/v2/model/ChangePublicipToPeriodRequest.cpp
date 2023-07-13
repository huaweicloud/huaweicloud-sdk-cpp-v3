

#include "huaweicloud/eip/v2/model/ChangePublicipToPeriodRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ChangePublicipToPeriodRequest::ChangePublicipToPeriodRequest()
{
    bodyIsSet_ = false;
}

ChangePublicipToPeriodRequest::~ChangePublicipToPeriodRequest() = default;

void ChangePublicipToPeriodRequest::validate()
{
}

web::json::value ChangePublicipToPeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ChangePublicipToPeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeToPeriodReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ChangeToPeriodReq ChangePublicipToPeriodRequest::getBody() const
{
    return body_;
}

void ChangePublicipToPeriodRequest::setBody(const ChangeToPeriodReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangePublicipToPeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangePublicipToPeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


