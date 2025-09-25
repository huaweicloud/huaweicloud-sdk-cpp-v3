

#include "huaweicloud/codeartsbuild/v3/model/ShowActionIInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowActionIInfoResponse::ShowActionIInfoResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowActionIInfoResponse::~ShowActionIInfoResponse() = default;

void ShowActionIInfoResponse::validate()
{
}

web::json::value ShowActionIInfoResponse::toJson() const
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
bool ShowActionIInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            OctopusV3LogResponseBody_result refVal;
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


OctopusV3LogResponseBody_result ShowActionIInfoResponse::getResult() const
{
    return result_;
}

void ShowActionIInfoResponse::setResult(const OctopusV3LogResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowActionIInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowActionIInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowActionIInfoResponse::getError() const
{
    return error_;
}

void ShowActionIInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowActionIInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowActionIInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowActionIInfoResponse::getStatus() const
{
    return status_;
}

void ShowActionIInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowActionIInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowActionIInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


