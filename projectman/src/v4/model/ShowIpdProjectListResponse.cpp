

#include "huaweicloud/projectman/v4/model/ShowIpdProjectListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdProjectListResponse::ShowIpdProjectListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdProjectListResponse::~ShowIpdProjectListResponse() = default;

void ShowIpdProjectListResponse::validate()
{
}

web::json::value ShowIpdProjectListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowIpdProjectListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectInfoVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdProjectListResponse::getStatus() const
{
    return status_;
}

void ShowIpdProjectListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdProjectListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdProjectListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdProjectListResponse::getMessage() const
{
    return message_;
}

void ShowIpdProjectListResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdProjectListResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdProjectListResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<ProjectInfoVO>& ShowIpdProjectListResponse::getResult()
{
    return result_;
}

void ShowIpdProjectListResponse::setResult(const std::vector<ProjectInfoVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdProjectListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdProjectListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


