

#include "huaweicloud/projectman/v4/model/ListSpecIssueStayTimesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListSpecIssueStayTimesRequestBody::ListSpecIssueStayTimesRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueIdsIsSet_ = false;
}

ListSpecIssueStayTimesRequestBody::~ListSpecIssueStayTimesRequestBody() = default;

void ListSpecIssueStayTimesRequestBody::validate()
{
}

web::json::value ListSpecIssueStayTimesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }

    return val;
}
bool ListSpecIssueStayTimesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueIds(refVal);
        }
    }
    return ok;
}


std::string ListSpecIssueStayTimesRequestBody::getProjectId() const
{
    return projectId_;
}

void ListSpecIssueStayTimesRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListSpecIssueStayTimesRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListSpecIssueStayTimesRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListSpecIssueStayTimesRequestBody::getIssueIds()
{
    return issueIds_;
}

void ListSpecIssueStayTimesRequestBody::setIssueIds(const std::vector<std::string>& value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool ListSpecIssueStayTimesRequestBody::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void ListSpecIssueStayTimesRequestBody::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

}
}
}
}
}


