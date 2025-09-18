

#include "huaweicloud/projectman/v4/model/BatchDelelteIssuesRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDelelteIssuesRequestV4::BatchDelelteIssuesRequestV4()
{
    issueIdsIsSet_ = false;
}

BatchDelelteIssuesRequestV4::~BatchDelelteIssuesRequestV4() = default;

void BatchDelelteIssuesRequestV4::validate()
{
}

web::json::value BatchDelelteIssuesRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }

    return val;
}
bool BatchDelelteIssuesRequestV4::fromJson(const web::json::value& val)
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


std::vector<int32_t>& BatchDelelteIssuesRequestV4::getIssueIds()
{
    return issueIds_;
}

void BatchDelelteIssuesRequestV4::setIssueIds(std::vector<int32_t> value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool BatchDelelteIssuesRequestV4::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void BatchDelelteIssuesRequestV4::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

}
}
}
}
}


