

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTestReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTestReportRequest::BatchDeleteTestReportRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTestReportRequest::~BatchDeleteTestReportRequest() = default;

void BatchDeleteTestReportRequest::validate()
{
}

web::json::value BatchDeleteTestReportRequest::toJson() const
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
bool BatchDeleteTestReportRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTestReportRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeleteTestReportRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteTestReportRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteTestReportRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteTestReportRequest::getBody()
{
    return body_;
}

void BatchDeleteTestReportRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTestReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTestReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


