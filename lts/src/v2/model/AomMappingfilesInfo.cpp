

#include "huaweicloud/lts/v2/model/AomMappingfilesInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AomMappingfilesInfo::AomMappingfilesInfo()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    logStreamInfoIsSet_ = false;
}

AomMappingfilesInfo::~AomMappingfilesInfo() = default;

void AomMappingfilesInfo::validate()
{
}

web::json::value AomMappingfilesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(logStreamInfoIsSet_) {
        val[utility::conversions::to_string_t("log_stream_info")] = ModelBase::toJson(logStreamInfo_);
    }

    return val;
}

bool AomMappingfilesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_info"));
        if(!fieldValue.is_null())
        {
            AomMappingLogStreamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamInfo(refVal);
        }
    }
    return ok;
}

std::string AomMappingfilesInfo::getFileName() const
{
    return fileName_;
}

void AomMappingfilesInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool AomMappingfilesInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void AomMappingfilesInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

AomMappingLogStreamInfo AomMappingfilesInfo::getLogStreamInfo() const
{
    return logStreamInfo_;
}

void AomMappingfilesInfo::setLogStreamInfo(const AomMappingLogStreamInfo& value)
{
    logStreamInfo_ = value;
    logStreamInfoIsSet_ = true;
}

bool AomMappingfilesInfo::logStreamInfoIsSet() const
{
    return logStreamInfoIsSet_;
}

void AomMappingfilesInfo::unsetlogStreamInfo()
{
    logStreamInfoIsSet_ = false;
}

}
}
}
}
}


