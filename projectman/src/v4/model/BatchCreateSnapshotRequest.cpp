

#include "huaweicloud/projectman/v4/model/BatchCreateSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateSnapshotRequest::BatchCreateSnapshotRequest()
{
    issuesIsSet_ = false;
}

BatchCreateSnapshotRequest::~BatchCreateSnapshotRequest() = default;

void BatchCreateSnapshotRequest::validate()
{
}

web::json::value BatchCreateSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issuesIsSet_) {
        val[utility::conversions::to_string_t("issues")] = ModelBase::toJson(issues_);
    }

    return val;
}
bool BatchCreateSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCreateSnapshotRequest_issues> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssues(refVal);
        }
    }
    return ok;
}


std::vector<BatchCreateSnapshotRequest_issues>& BatchCreateSnapshotRequest::getIssues()
{
    return issues_;
}

void BatchCreateSnapshotRequest::setIssues(const std::vector<BatchCreateSnapshotRequest_issues>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool BatchCreateSnapshotRequest::issuesIsSet() const
{
    return issuesIsSet_;
}

void BatchCreateSnapshotRequest::unsetissues()
{
    issuesIsSet_ = false;
}

}
}
}
}
}


