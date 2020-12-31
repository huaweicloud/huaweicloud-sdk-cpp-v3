

#include "huaweicloud/eip/model/CreateSharedBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreateSharedBandwidthRequest::CreateSharedBandwidthRequest()
{
    bodyIsSet_ = false;
}

CreateSharedBandwidthRequest::~CreateSharedBandwidthRequest() = default;

void CreateSharedBandwidthRequest::validate()
{
}

web::json::value CreateSharedBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSharedBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSharedBandwidhRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateSharedBandwidhRequestBody CreateSharedBandwidthRequest::getBody() const
{
    return body_;
}

void CreateSharedBandwidthRequest::setBody(const CreateSharedBandwidhRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSharedBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSharedBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


