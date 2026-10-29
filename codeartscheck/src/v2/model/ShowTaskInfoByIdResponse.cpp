

#include "huaweicloud/codeartscheck/v2/model/ShowTaskInfoByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskInfoByIdResponse::ShowTaskInfoByIdResponse()
{
    httpStatus_ = "";
    httpStatusIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowTaskInfoByIdResponse::~ShowTaskInfoByIdResponse() = default;

void ShowTaskInfoByIdResponse::validate()
{
}

web::json::value ShowTaskInfoByIdResponse::toJson() const
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
bool ShowTaskInfoByIdResponse::fromJson(const web::json::value& val)
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
            TaskBasicInfoV3 refVal;
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


std::string ShowTaskInfoByIdResponse::getHttpStatus() const
{
    return httpStatus_;
}

void ShowTaskInfoByIdResponse::setHttpStatus(const std::string& value)
{
    httpStatus_ = value;
    httpStatusIsSet_ = true;
}

bool ShowTaskInfoByIdResponse::httpStatusIsSet() const
{
    return httpStatusIsSet_;
}

void ShowTaskInfoByIdResponse::unsethttpStatus()
{
    httpStatusIsSet_ = false;
}

TaskBasicInfoV3 ShowTaskInfoByIdResponse::getResult() const
{
    return result_;
}

void ShowTaskInfoByIdResponse::setResult(const TaskBasicInfoV3& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTaskInfoByIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTaskInfoByIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowTaskInfoByIdResponse::getStatus() const
{
    return status_;
}

void ShowTaskInfoByIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskInfoByIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskInfoByIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


