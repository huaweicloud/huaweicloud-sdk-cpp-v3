

#include "huaweicloud/codeartscheck/v2/model/UpdateCodeGateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateCodeGateResponse::UpdateCodeGateResponse()
{
    result_ = "";
    resultIsSet_ = false;
    httpStatus_ = "";
    httpStatusIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateCodeGateResponse::~UpdateCodeGateResponse() = default;

void UpdateCodeGateResponse::validate()
{
}

web::json::value UpdateCodeGateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(httpStatusIsSet_) {
        val[utility::conversions::to_string_t("httpStatus")] = ModelBase::toJson(httpStatus_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateCodeGateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("httpStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpStatus(refVal);
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


std::string UpdateCodeGateResponse::getResult() const
{
    return result_;
}

void UpdateCodeGateResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateCodeGateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateCodeGateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateCodeGateResponse::getHttpStatus() const
{
    return httpStatus_;
}

void UpdateCodeGateResponse::setHttpStatus(const std::string& value)
{
    httpStatus_ = value;
    httpStatusIsSet_ = true;
}

bool UpdateCodeGateResponse::httpStatusIsSet() const
{
    return httpStatusIsSet_;
}

void UpdateCodeGateResponse::unsethttpStatus()
{
    httpStatusIsSet_ = false;
}

std::string UpdateCodeGateResponse::getStatus() const
{
    return status_;
}

void UpdateCodeGateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateCodeGateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateCodeGateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


