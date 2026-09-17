

#include "huaweicloud/projectman/v4/model/AssociateScrumIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateScrumIssueResponse::AssociateScrumIssueResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AssociateScrumIssueResponse::~AssociateScrumIssueResponse() = default;

void AssociateScrumIssueResponse::validate()
{
}

web::json::value AssociateScrumIssueResponse::toJson() const
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
bool AssociateScrumIssueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociateIssueDetail> refVal;
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


std::vector<AssociateIssueDetail>& AssociateScrumIssueResponse::getResult()
{
    return result_;
}

void AssociateScrumIssueResponse::setResult(const std::vector<AssociateIssueDetail>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AssociateScrumIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AssociateScrumIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AssociateScrumIssueResponse::getStatus() const
{
    return status_;
}

void AssociateScrumIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateScrumIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateScrumIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


