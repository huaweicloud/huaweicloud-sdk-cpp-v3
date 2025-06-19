

#include "huaweicloud/codeartsbuild/v3/model/RestoreRecyclingJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RestoreRecyclingJobsRequest::RestoreRecyclingJobsRequest()
{
    bodyIsSet_ = false;
}

RestoreRecyclingJobsRequest::~RestoreRecyclingJobsRequest() = default;

void RestoreRecyclingJobsRequest::validate()
{
}

web::json::value RestoreRecyclingJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RestoreRecyclingJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            JobsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


JobsRequestBody RestoreRecyclingJobsRequest::getBody() const
{
    return body_;
}

void RestoreRecyclingJobsRequest::setBody(const JobsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreRecyclingJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreRecyclingJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


