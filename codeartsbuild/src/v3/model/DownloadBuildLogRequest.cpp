

#include "huaweicloud/codeartsbuild/v3/model/DownloadBuildLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadBuildLogRequest::DownloadBuildLogRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    logLevel_ = "";
    logLevelIsSet_ = false;
}

DownloadBuildLogRequest::~DownloadBuildLogRequest() = default;

void DownloadBuildLogRequest::validate()
{
}

web::json::value DownloadBuildLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(logLevelIsSet_) {
        val[utility::conversions::to_string_t("log_level")] = ModelBase::toJson(logLevel_);
    }

    return val;
}
bool DownloadBuildLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogLevel(refVal);
        }
    }
    return ok;
}


std::string DownloadBuildLogRequest::getRecordId() const
{
    return recordId_;
}

void DownloadBuildLogRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool DownloadBuildLogRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void DownloadBuildLogRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string DownloadBuildLogRequest::getLogLevel() const
{
    return logLevel_;
}

void DownloadBuildLogRequest::setLogLevel(const std::string& value)
{
    logLevel_ = value;
    logLevelIsSet_ = true;
}

bool DownloadBuildLogRequest::logLevelIsSet() const
{
    return logLevelIsSet_;
}

void DownloadBuildLogRequest::unsetlogLevel()
{
    logLevelIsSet_ = false;
}

}
}
}
}
}


