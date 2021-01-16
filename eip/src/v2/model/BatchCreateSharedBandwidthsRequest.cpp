

#include "huaweicloud/eip/v2/model/BatchCreateSharedBandwidthsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreateSharedBandwidthsRequest::BatchCreateSharedBandwidthsRequest()
{
    bodyIsSet_ = false;
}

BatchCreateSharedBandwidthsRequest::~BatchCreateSharedBandwidthsRequest() = default;

void BatchCreateSharedBandwidthsRequest::validate()
{
}

web::json::value BatchCreateSharedBandwidthsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCreateSharedBandwidthsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchCreateBandwidthRequestBody BatchCreateSharedBandwidthsRequest::getBody() const
{
    return body_;
}

void BatchCreateSharedBandwidthsRequest::setBody(const BatchCreateBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSharedBandwidthsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSharedBandwidthsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


