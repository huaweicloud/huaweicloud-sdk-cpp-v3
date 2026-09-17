

#include "huaweicloud/projectman/v4/model/ShowCategoryStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCategoryStatusResponse::ShowCategoryStatusResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowCategoryStatusResponse::~ShowCategoryStatusResponse() = default;

void ShowCategoryStatusResponse::validate()
{
}

web::json::value ShowCategoryStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowCategoryStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            StatusResponse_result refVal;
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


int32_t ShowCategoryStatusResponse::getTotal() const
{
    return total_;
}

void ShowCategoryStatusResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowCategoryStatusResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowCategoryStatusResponse::unsettotal()
{
    totalIsSet_ = false;
}

StatusResponse_result ShowCategoryStatusResponse::getResult() const
{
    return result_;
}

void ShowCategoryStatusResponse::setResult(const StatusResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCategoryStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCategoryStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowCategoryStatusResponse::getStatus() const
{
    return status_;
}

void ShowCategoryStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCategoryStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCategoryStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowCategoryStatusResponse::getMessage() const
{
    return message_;
}

void ShowCategoryStatusResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowCategoryStatusResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowCategoryStatusResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


