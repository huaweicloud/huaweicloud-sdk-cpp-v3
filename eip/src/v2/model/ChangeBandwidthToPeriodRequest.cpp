

#include "huaweicloud/eip/v2/model/ChangeBandwidthToPeriodRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ChangeBandwidthToPeriodRequest::ChangeBandwidthToPeriodRequest()
{
    bodyIsSet_ = false;
}

ChangeBandwidthToPeriodRequest::~ChangeBandwidthToPeriodRequest() = default;

void ChangeBandwidthToPeriodRequest::validate()
{
}

web::json::value ChangeBandwidthToPeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ChangeBandwidthToPeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BwChangeToPeriodReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BwChangeToPeriodReq ChangeBandwidthToPeriodRequest::getBody() const
{
    return body_;
}

void ChangeBandwidthToPeriodRequest::setBody(const BwChangeToPeriodReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeBandwidthToPeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeBandwidthToPeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


