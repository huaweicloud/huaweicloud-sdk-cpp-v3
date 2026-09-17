

#include "huaweicloud/projectman/v4/model/BatchDeleteIpdIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIpdIssuesRequest::BatchDeleteIpdIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    isPermanentDelete_ = false;
    isPermanentDeleteIsSet_ = false;
    srcProjectId_ = "";
    srcProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteIpdIssuesRequest::~BatchDeleteIpdIssuesRequest() = default;

void BatchDeleteIpdIssuesRequest::validate()
{
}

web::json::value BatchDeleteIpdIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isPermanentDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_permanent_delete")] = ModelBase::toJson(isPermanentDelete_);
    }
    if(srcProjectIdIsSet_) {
        val[utility::conversions::to_string_t("src_project_id")] = ModelBase::toJson(srcProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteIpdIssuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_permanent_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_permanent_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPermanentDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProjectId(refVal);
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


std::string BatchDeleteIpdIssuesRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeleteIpdIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteIpdIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteIpdIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool BatchDeleteIpdIssuesRequest::isIsPermanentDelete() const
{
    return isPermanentDelete_;
}

void BatchDeleteIpdIssuesRequest::setIsPermanentDelete(bool value)
{
    isPermanentDelete_ = value;
    isPermanentDeleteIsSet_ = true;
}

bool BatchDeleteIpdIssuesRequest::isPermanentDeleteIsSet() const
{
    return isPermanentDeleteIsSet_;
}

void BatchDeleteIpdIssuesRequest::unsetisPermanentDelete()
{
    isPermanentDeleteIsSet_ = false;
}

std::string BatchDeleteIpdIssuesRequest::getSrcProjectId() const
{
    return srcProjectId_;
}

void BatchDeleteIpdIssuesRequest::setSrcProjectId(const std::string& value)
{
    srcProjectId_ = value;
    srcProjectIdIsSet_ = true;
}

bool BatchDeleteIpdIssuesRequest::srcProjectIdIsSet() const
{
    return srcProjectIdIsSet_;
}

void BatchDeleteIpdIssuesRequest::unsetsrcProjectId()
{
    srcProjectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteIpdIssuesRequest::getBody()
{
    return body_;
}

void BatchDeleteIpdIssuesRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteIpdIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteIpdIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


