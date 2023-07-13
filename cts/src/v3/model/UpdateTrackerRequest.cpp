

#include "huaweicloud/cts/v3/model/UpdateTrackerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UpdateTrackerRequest::UpdateTrackerRequest()
{
    bodyIsSet_ = false;
}

UpdateTrackerRequest::~UpdateTrackerRequest() = default;

void UpdateTrackerRequest::validate()
{
}

web::json::value UpdateTrackerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateTrackerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTrackerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UpdateTrackerRequestBody UpdateTrackerRequest::getBody() const
{
    return body_;
}

void UpdateTrackerRequest::setBody(const UpdateTrackerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTrackerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTrackerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


