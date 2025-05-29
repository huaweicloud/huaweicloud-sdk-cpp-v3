

#include "huaweicloud/codeartsbuild/v3/model/ShowJobInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobInfoResponse::ShowJobInfoResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobInfoResponse::~ShowJobInfoResponse() = default;

void ShowJobInfoResponse::validate()
{
}

web::json::value ShowJobInfoResponse::toJson() const
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
bool ShowJobInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowJobInfo_result refVal;
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


ShowJobInfo_result ShowJobInfoResponse::getResult() const
{
    return result_;
}

void ShowJobInfoResponse::setResult(const ShowJobInfo_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobInfoResponse::getError() const
{
    return error_;
}

void ShowJobInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowJobInfoResponse::getStatus() const
{
    return status_;
}

void ShowJobInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


