

#include "huaweicloud/modelarts/v1/model/ListTrainingJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobsRequest::ListTrainingJobsRequest()
{
    bodyIsSet_ = false;
}

ListTrainingJobsRequest::~ListTrainingJobsRequest() = default;

void ListTrainingJobsRequest::validate()
{
}

web::json::value ListTrainingJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTrainingJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            JobSearches refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


JobSearches ListTrainingJobsRequest::getBody() const
{
    return body_;
}

void ListTrainingJobsRequest::setBody(const JobSearches& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTrainingJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTrainingJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


