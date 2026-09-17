

#include "huaweicloud/projectman/v4/model/BatchDeletesResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeletesResponse_result::BatchDeletesResponse_result()
{
    deleteIssueIsSet_ = false;
}

BatchDeletesResponse_result::~BatchDeletesResponse_result() = default;

void BatchDeletesResponse_result::validate()
{
}

web::json::value BatchDeletesResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteIssueIsSet_) {
        val[utility::conversions::to_string_t("delete_issue")] = ModelBase::toJson(deleteIssue_);
    }

    return val;
}
bool BatchDeletesResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_issue"));
        if(!fieldValue.is_null())
        {
            BatchDeletesResponse_result_delete_issue refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteIssue(refVal);
        }
    }
    return ok;
}


BatchDeletesResponse_result_delete_issue BatchDeletesResponse_result::getDeleteIssue() const
{
    return deleteIssue_;
}

void BatchDeletesResponse_result::setDeleteIssue(const BatchDeletesResponse_result_delete_issue& value)
{
    deleteIssue_ = value;
    deleteIssueIsSet_ = true;
}

bool BatchDeletesResponse_result::deleteIssueIsSet() const
{
    return deleteIssueIsSet_;
}

void BatchDeletesResponse_result::unsetdeleteIssue()
{
    deleteIssueIsSet_ = false;
}

}
}
}
}
}


