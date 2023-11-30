

#include "huaweicloud/eip/v2/model/BatchModifyBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchModifyBandwidthRequest::BatchModifyBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchModifyBandwidthRequest::~BatchModifyBandwidthRequest() = default;

void BatchModifyBandwidthRequest::validate()
{
}

web::json::value BatchModifyBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchModifyBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyBandwidthRequestBody BatchModifyBandwidthRequest::getBody() const
{
    return body_;
}

void BatchModifyBandwidthRequest::setBody(const ModifyBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchModifyBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchModifyBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


