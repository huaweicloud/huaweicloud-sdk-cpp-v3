

#include "huaweicloud/codeartsbuild/v3/model/DownloadBuildFullLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadBuildFullLogRequest::DownloadBuildFullLogRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    logLevel_ = "";
    logLevelIsSet_ = false;
    compress_ = false;
    compressIsSet_ = false;
}

DownloadBuildFullLogRequest::~DownloadBuildFullLogRequest() = default;

void DownloadBuildFullLogRequest::validate()
{
}

web::json::value DownloadBuildFullLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(logLevelIsSet_) {
        val[utility::conversions::to_string_t("log_level")] = ModelBase::toJson(logLevel_);
    }
    if(compressIsSet_) {
        val[utility::conversions::to_string_t("compress")] = ModelBase::toJson(compress_);
    }

    return val;
}
bool DownloadBuildFullLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompress(refVal);
        }
    }
    return ok;
}


std::string DownloadBuildFullLogRequest::getRecordId() const
{
    return recordId_;
}

void DownloadBuildFullLogRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool DownloadBuildFullLogRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void DownloadBuildFullLogRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string DownloadBuildFullLogRequest::getLogLevel() const
{
    return logLevel_;
}

void DownloadBuildFullLogRequest::setLogLevel(const std::string& value)
{
    logLevel_ = value;
    logLevelIsSet_ = true;
}

bool DownloadBuildFullLogRequest::logLevelIsSet() const
{
    return logLevelIsSet_;
}

void DownloadBuildFullLogRequest::unsetlogLevel()
{
    logLevelIsSet_ = false;
}

bool DownloadBuildFullLogRequest::isCompress() const
{
    return compress_;
}

void DownloadBuildFullLogRequest::setCompress(bool value)
{
    compress_ = value;
    compressIsSet_ = true;
}

bool DownloadBuildFullLogRequest::compressIsSet() const
{
    return compressIsSet_;
}

void DownloadBuildFullLogRequest::unsetcompress()
{
    compressIsSet_ = false;
}

}
}
}
}
}


