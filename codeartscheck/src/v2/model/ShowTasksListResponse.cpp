

#include "huaweicloud/codeartscheck/v2/model/ShowTasksListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasksListResponse::ShowTasksListResponse()
{
    httpStatus_ = "";
    httpStatusIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowTasksListResponse::~ShowTasksListResponse() = default;

void ShowTasksListResponse::validate()
{
}

web::json::value ShowTasksListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpStatusIsSet_) {
        val[utility::conversions::to_string_t("httpStatus")] = ModelBase::toJson(httpStatus_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowTasksListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("httpStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowTasksListResult refVal;
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


std::string ShowTasksListResponse::getHttpStatus() const
{
    return httpStatus_;
}

void ShowTasksListResponse::setHttpStatus(const std::string& value)
{
    httpStatus_ = value;
    httpStatusIsSet_ = true;
}

bool ShowTasksListResponse::httpStatusIsSet() const
{
    return httpStatusIsSet_;
}

void ShowTasksListResponse::unsethttpStatus()
{
    httpStatusIsSet_ = false;
}

ShowTasksListResult ShowTasksListResponse::getResult() const
{
    return result_;
}

void ShowTasksListResponse::setResult(const ShowTasksListResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTasksListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTasksListResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowTasksListResponse::getStatus() const
{
    return status_;
}

void ShowTasksListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTasksListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTasksListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


