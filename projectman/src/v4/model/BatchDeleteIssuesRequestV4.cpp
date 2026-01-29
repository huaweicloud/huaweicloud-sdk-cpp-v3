

#include "huaweicloud/projectman/v4/model/BatchDeleteIssuesRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIssuesRequestV4::BatchDeleteIssuesRequestV4()
{
    issueIdsIsSet_ = false;
}

BatchDeleteIssuesRequestV4::~BatchDeleteIssuesRequestV4() = default;

void BatchDeleteIssuesRequestV4::validate()
{
}

web::json::value BatchDeleteIssuesRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }

    return val;
}
bool BatchDeleteIssuesRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueIds(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& BatchDeleteIssuesRequestV4::getIssueIds()
{
    return issueIds_;
}

void BatchDeleteIssuesRequestV4::setIssueIds(std::vector<int32_t> value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool BatchDeleteIssuesRequestV4::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void BatchDeleteIssuesRequestV4::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

}
}
}
}
}


