

#include "huaweicloud/modelarts/v1/model/DeleteDevServerJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteDevServerJobsRequest::DeleteDevServerJobsRequest()
{
    bodyIsSet_ = false;
}

DeleteDevServerJobsRequest::~DeleteDevServerJobsRequest() = default;

void DeleteDevServerJobsRequest::validate()
{
}

web::json::value DeleteDevServerJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDevServerJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServerJobDeleteRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServerJobDeleteRequest DeleteDevServerJobsRequest::getBody() const
{
    return body_;
}

void DeleteDevServerJobsRequest::setBody(const ServerJobDeleteRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDevServerJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDevServerJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


