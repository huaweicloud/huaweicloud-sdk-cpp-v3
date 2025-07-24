

#include "huaweicloud/cloudtest/v1/model/CreateReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateReportRequest::CreateReportRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateReportRequest::~CreateReportRequest() = default;

void CreateReportRequest::validate()
{
}

web::json::value CreateReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateReportRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OprReportInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateReportRequest::getProjectId() const
{
    return projectId_;
}

void CreateReportRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateReportRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateReportRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateReportRequest::getVersionId() const
{
    return versionId_;
}

void CreateReportRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool CreateReportRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void CreateReportRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

OprReportInfo CreateReportRequest::getBody() const
{
    return body_;
}

void CreateReportRequest::setBody(const OprReportInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


