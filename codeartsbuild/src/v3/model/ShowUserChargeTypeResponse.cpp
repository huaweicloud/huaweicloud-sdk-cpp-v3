

#include "huaweicloud/codeartsbuild/v3/model/ShowUserChargeTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserChargeTypeResponse::ShowUserChargeTypeResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowUserChargeTypeResponse::~ShowUserChargeTypeResponse() = default;

void ShowUserChargeTypeResponse::validate()
{
}

web::json::value ShowUserChargeTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowUserChargeTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowUserChargeType_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


ShowUserChargeType_result ShowUserChargeTypeResponse::getResult() const
{
    return result_;
}

void ShowUserChargeTypeResponse::setResult(const ShowUserChargeType_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUserChargeTypeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUserChargeTypeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowUserChargeTypeResponse::getError() const
{
    return error_;
}

void ShowUserChargeTypeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowUserChargeTypeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowUserChargeTypeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowUserChargeTypeResponse::getStatus() const
{
    return status_;
}

void ShowUserChargeTypeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserChargeTypeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserChargeTypeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


