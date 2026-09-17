

#include "huaweicloud/projectman/v4/model/UpdateScrumIssueNotesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumIssueNotesResponse::UpdateScrumIssueNotesResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateScrumIssueNotesResponse::~UpdateScrumIssueNotesResponse() = default;

void UpdateScrumIssueNotesResponse::validate()
{
}

web::json::value UpdateScrumIssueNotesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateScrumIssueNotesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IssueInfoResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


IssueInfoResponse_result UpdateScrumIssueNotesResponse::getResult() const
{
    return result_;
}

void UpdateScrumIssueNotesResponse::setResult(const IssueInfoResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateScrumIssueNotesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateScrumIssueNotesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateScrumIssueNotesResponse::getStatus() const
{
    return status_;
}

void UpdateScrumIssueNotesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateScrumIssueNotesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateScrumIssueNotesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


