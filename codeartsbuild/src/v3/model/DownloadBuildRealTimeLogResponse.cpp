

#include "huaweicloud/codeartsbuild/v3/model/DownloadBuildRealTimeLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadBuildRealTimeLogResponse::DownloadBuildRealTimeLogResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DownloadBuildRealTimeLogResponse::~DownloadBuildRealTimeLogResponse() = default;

void DownloadBuildRealTimeLogResponse::validate()
{
}

web::json::value DownloadBuildRealTimeLogResponse::toJson() const
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
bool DownloadBuildRealTimeLogResponse::fromJson(const web::json::value& val)
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


OctopusV3LogResponseBody_result DownloadBuildRealTimeLogResponse::getResult() const
{
    return result_;
}

void DownloadBuildRealTimeLogResponse::setResult(const OctopusV3LogResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DownloadBuildRealTimeLogResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DownloadBuildRealTimeLogResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DownloadBuildRealTimeLogResponse::getError() const
{
    return error_;
}

void DownloadBuildRealTimeLogResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DownloadBuildRealTimeLogResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DownloadBuildRealTimeLogResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DownloadBuildRealTimeLogResponse::getStatus() const
{
    return status_;
}

void DownloadBuildRealTimeLogResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DownloadBuildRealTimeLogResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DownloadBuildRealTimeLogResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


