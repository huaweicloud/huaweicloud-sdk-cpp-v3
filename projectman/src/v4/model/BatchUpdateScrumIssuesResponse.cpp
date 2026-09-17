

#include "huaweicloud/projectman/v4/model/BatchUpdateScrumIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateScrumIssuesResponse::BatchUpdateScrumIssuesResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BatchUpdateScrumIssuesResponse::~BatchUpdateScrumIssuesResponse() = default;

void BatchUpdateScrumIssuesResponse::validate()
{
}

web::json::value BatchUpdateScrumIssuesResponse::toJson() const
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
bool BatchUpdateScrumIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BatchUpdateResponse_result refVal;
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


BatchUpdateResponse_result BatchUpdateScrumIssuesResponse::getResult() const
{
    return result_;
}

void BatchUpdateScrumIssuesResponse::setResult(const BatchUpdateResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateScrumIssuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateScrumIssuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchUpdateScrumIssuesResponse::getStatus() const
{
    return status_;
}

void BatchUpdateScrumIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateScrumIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateScrumIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


