

#include "huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BatchDeleteBuildJobsRequest::BatchDeleteBuildJobsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteBuildJobsRequest::~BatchDeleteBuildJobsRequest() = default;

void BatchDeleteBuildJobsRequest::validate()
{
}

web::json::value BatchDeleteBuildJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteBuildJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteBuildJobsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteBuildJobsRequestBody BatchDeleteBuildJobsRequest::getBody() const
{
    return body_;
}

void BatchDeleteBuildJobsRequest::setBody(const BatchDeleteBuildJobsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteBuildJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteBuildJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


