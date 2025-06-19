

#include "huaweicloud/codeartsbuild/v3/model/DeleteRecyclingJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteRecyclingJobsRequest::DeleteRecyclingJobsRequest()
{
    bodyIsSet_ = false;
}

DeleteRecyclingJobsRequest::~DeleteRecyclingJobsRequest() = default;

void DeleteRecyclingJobsRequest::validate()
{
}

web::json::value DeleteRecyclingJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRecyclingJobsRequest::fromJson(const web::json::value& val)
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


JobsRequestBody DeleteRecyclingJobsRequest::getBody() const
{
    return body_;
}

void DeleteRecyclingJobsRequest::setBody(const JobsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRecyclingJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRecyclingJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


