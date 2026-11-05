

#include "huaweicloud/codeartsdeploy/v2/model/ShowTaskLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowTaskLogsResponse::ShowTaskLogsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowTaskLogsResponse::~ShowTaskLogsResponse() = default;

void ShowTaskLogsResponse::validate()
{
}

web::json::value ShowTaskLogsResponse::toJson() const
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
bool ShowTaskLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QueryAppLogResult refVal;
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


QueryAppLogResult ShowTaskLogsResponse::getResult() const
{
    return result_;
}

void ShowTaskLogsResponse::setResult(const QueryAppLogResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTaskLogsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTaskLogsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowTaskLogsResponse::getStatus() const
{
    return status_;
}

void ShowTaskLogsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskLogsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskLogsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


