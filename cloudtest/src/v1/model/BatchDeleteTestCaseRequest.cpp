

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTestCaseRequest::BatchDeleteTestCaseRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTestCaseRequest::~BatchDeleteTestCaseRequest() = default;

void BatchDeleteTestCaseRequest::validate()
{
}

web::json::value BatchDeleteTestCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTestCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteTestCaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTestCaseRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeleteTestCaseRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteTestCaseRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteTestCaseRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchDeleteTestCaseRequestBody BatchDeleteTestCaseRequest::getBody() const
{
    return body_;
}

void BatchDeleteTestCaseRequest::setBody(const BatchDeleteTestCaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTestCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTestCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


