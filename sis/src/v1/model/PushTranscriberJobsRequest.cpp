

#include "huaweicloud/sis/v1/model/PushTranscriberJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PushTranscriberJobsRequest::PushTranscriberJobsRequest()
{
    bodyIsSet_ = false;
}

PushTranscriberJobsRequest::~PushTranscriberJobsRequest() = default;

void PushTranscriberJobsRequest::validate()
{
}

web::json::value PushTranscriberJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool PushTranscriberJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostTranscriberJobs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

PostTranscriberJobs PushTranscriberJobsRequest::getBody() const
{
    return body_;
}

void PushTranscriberJobsRequest::setBody(const PostTranscriberJobs& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PushTranscriberJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PushTranscriberJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


