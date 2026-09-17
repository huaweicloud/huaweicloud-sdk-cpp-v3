

#include "huaweicloud/projectman/v4/model/BatchDeletesResponse_result_delete_issue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeletesResponse_result_delete_issue::BatchDeletesResponse_result_delete_issue()
{
    delIssueIdIsSet_ = false;
    delIssueIsSet_ = false;
}

BatchDeletesResponse_result_delete_issue::~BatchDeletesResponse_result_delete_issue() = default;

void BatchDeletesResponse_result_delete_issue::validate()
{
}

web::json::value BatchDeletesResponse_result_delete_issue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delIssueIdIsSet_) {
        val[utility::conversions::to_string_t("del_issue_id")] = ModelBase::toJson(delIssueId_);
    }
    if(delIssueIsSet_) {
        val[utility::conversions::to_string_t("del_issue")] = ModelBase::toJson(delIssue_);
    }

    return val;
}
bool BatchDeletesResponse_result_delete_issue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("del_issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("del_issue_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("del_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("del_issue"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeletesResponse_result_delete_issue_del_issue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelIssue(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& BatchDeletesResponse_result_delete_issue::getDelIssueId()
{
    return delIssueId_;
}

void BatchDeletesResponse_result_delete_issue::setDelIssueId(std::vector<int32_t> value)
{
    delIssueId_ = value;
    delIssueIdIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue::delIssueIdIsSet() const
{
    return delIssueIdIsSet_;
}

void BatchDeletesResponse_result_delete_issue::unsetdelIssueId()
{
    delIssueIdIsSet_ = false;
}

std::vector<BatchDeletesResponse_result_delete_issue_del_issue>& BatchDeletesResponse_result_delete_issue::getDelIssue()
{
    return delIssue_;
}

void BatchDeletesResponse_result_delete_issue::setDelIssue(const std::vector<BatchDeletesResponse_result_delete_issue_del_issue>& value)
{
    delIssue_ = value;
    delIssueIsSet_ = true;
}

bool BatchDeletesResponse_result_delete_issue::delIssueIsSet() const
{
    return delIssueIsSet_;
}

void BatchDeletesResponse_result_delete_issue::unsetdelIssue()
{
    delIssueIsSet_ = false;
}

}
}
}
}
}


