

#include "huaweicloud/projectman/v4/model/BatchCreateIssueSnapitemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIssueSnapitemsRequest::BatchCreateIssueSnapitemsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateIssueSnapitemsRequest::~BatchCreateIssueSnapitemsRequest() = default;

void BatchCreateIssueSnapitemsRequest::validate()
{
}

web::json::value BatchCreateIssueSnapitemsRequest::toJson() const
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
bool BatchCreateIssueSnapitemsRequest::fromJson(const web::json::value& val)
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
            BatchCreateSnapshotRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateIssueSnapitemsRequest::getProjectId() const
{
    return projectId_;
}

void BatchCreateIssueSnapitemsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchCreateIssueSnapitemsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchCreateIssueSnapitemsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchCreateSnapshotRequest BatchCreateIssueSnapitemsRequest::getBody() const
{
    return body_;
}

void BatchCreateIssueSnapitemsRequest::setBody(const BatchCreateSnapshotRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateIssueSnapitemsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateIssueSnapitemsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


