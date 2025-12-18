

#include "huaweicloud/meeting/v1/model/RecordDownloadUrlDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RecordDownloadUrlDO::RecordDownloadUrlDO()
{
    token_ = "";
    tokenIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

RecordDownloadUrlDO::~RecordDownloadUrlDO() = default;

void RecordDownloadUrlDO::validate()
{
}

web::json::value RecordDownloadUrlDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("fileType")] = ModelBase::toJson(fileType_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool RecordDownloadUrlDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string RecordDownloadUrlDO::getToken() const
{
    return token_;
}

void RecordDownloadUrlDO::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool RecordDownloadUrlDO::tokenIsSet() const
{
    return tokenIsSet_;
}

void RecordDownloadUrlDO::unsettoken()
{
    tokenIsSet_ = false;
}

std::string RecordDownloadUrlDO::getFileType() const
{
    return fileType_;
}

void RecordDownloadUrlDO::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool RecordDownloadUrlDO::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void RecordDownloadUrlDO::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string RecordDownloadUrlDO::getUrl() const
{
    return url_;
}

void RecordDownloadUrlDO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RecordDownloadUrlDO::urlIsSet() const
{
    return urlIsSet_;
}

void RecordDownloadUrlDO::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


