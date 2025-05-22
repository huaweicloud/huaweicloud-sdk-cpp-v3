

#include "huaweicloud/codeartsbuild/v3/model/DownloadRealTimeLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadRealTimeLogResponse::DownloadRealTimeLogResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DownloadRealTimeLogResponse::~DownloadRealTimeLogResponse() = default;

void DownloadRealTimeLogResponse::validate()
{
}

web::json::value DownloadRealTimeLogResponse::toJson() const
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
bool DownloadRealTimeLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            RealTimeLogResponseBody_result refVal;
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


RealTimeLogResponseBody_result DownloadRealTimeLogResponse::getResult() const
{
    return result_;
}

void DownloadRealTimeLogResponse::setResult(const RealTimeLogResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DownloadRealTimeLogResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DownloadRealTimeLogResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DownloadRealTimeLogResponse::getError() const
{
    return error_;
}

void DownloadRealTimeLogResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DownloadRealTimeLogResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DownloadRealTimeLogResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DownloadRealTimeLogResponse::getStatus() const
{
    return status_;
}

void DownloadRealTimeLogResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadRealTimeLogResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadRealTimeLogResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


