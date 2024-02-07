

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipRequest::BatchCreateGlobalEipRequest()
{
    bodyIsSet_ = false;
}

BatchCreateGlobalEipRequest::~BatchCreateGlobalEipRequest() = default;

void BatchCreateGlobalEipRequest::validate()
{
}

web::json::value BatchCreateGlobalEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateGlobalEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchCreateGlobalEipRequestBody BatchCreateGlobalEipRequest::getBody() const
{
    return body_;
}

void BatchCreateGlobalEipRequest::setBody(const BatchCreateGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateGlobalEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateGlobalEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


