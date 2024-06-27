

#include "huaweicloud/cfw/v1/model/CaptureResultUrlVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureResultUrlVO::CaptureResultUrlVO()
{
    captcha_ = "";
    captchaIsSet_ = false;
    expires_ = 0L;
    expiresIsSet_ = false;
    fileListIsSet_ = false;
    requestHeaderIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

CaptureResultUrlVO::~CaptureResultUrlVO() = default;

void CaptureResultUrlVO::validate()
{
}

web::json::value CaptureResultUrlVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(captchaIsSet_) {
        val[utility::conversions::to_string_t("captcha")] = ModelBase::toJson(captcha_);
    }
    if(expiresIsSet_) {
        val[utility::conversions::to_string_t("expires")] = ModelBase::toJson(expires_);
    }
    if(fileListIsSet_) {
        val[utility::conversions::to_string_t("file_list")] = ModelBase::toJson(fileList_);
    }
    if(requestHeaderIsSet_) {
        val[utility::conversions::to_string_t("request_header")] = ModelBase::toJson(requestHeader_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool CaptureResultUrlVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("captcha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("captcha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaptcha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpires(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CaptureFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_header"));
        if(!fieldValue.is_null())
        {
            HostHeaderInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestHeader(refVal);
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


std::string CaptureResultUrlVO::getCaptcha() const
{
    return captcha_;
}

void CaptureResultUrlVO::setCaptcha(const std::string& value)
{
    captcha_ = value;
    captchaIsSet_ = true;
}

bool CaptureResultUrlVO::captchaIsSet() const
{
    return captchaIsSet_;
}

void CaptureResultUrlVO::unsetcaptcha()
{
    captchaIsSet_ = false;
}

int64_t CaptureResultUrlVO::getExpires() const
{
    return expires_;
}

void CaptureResultUrlVO::setExpires(int64_t value)
{
    expires_ = value;
    expiresIsSet_ = true;
}

bool CaptureResultUrlVO::expiresIsSet() const
{
    return expiresIsSet_;
}

void CaptureResultUrlVO::unsetexpires()
{
    expiresIsSet_ = false;
}

std::vector<CaptureFile>& CaptureResultUrlVO::getFileList()
{
    return fileList_;
}

void CaptureResultUrlVO::setFileList(const std::vector<CaptureFile>& value)
{
    fileList_ = value;
    fileListIsSet_ = true;
}

bool CaptureResultUrlVO::fileListIsSet() const
{
    return fileListIsSet_;
}

void CaptureResultUrlVO::unsetfileList()
{
    fileListIsSet_ = false;
}

HostHeaderInfo CaptureResultUrlVO::getRequestHeader() const
{
    return requestHeader_;
}

void CaptureResultUrlVO::setRequestHeader(const HostHeaderInfo& value)
{
    requestHeader_ = value;
    requestHeaderIsSet_ = true;
}

bool CaptureResultUrlVO::requestHeaderIsSet() const
{
    return requestHeaderIsSet_;
}

void CaptureResultUrlVO::unsetrequestHeader()
{
    requestHeaderIsSet_ = false;
}

std::string CaptureResultUrlVO::getUrl() const
{
    return url_;
}

void CaptureResultUrlVO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CaptureResultUrlVO::urlIsSet() const
{
    return urlIsSet_;
}

void CaptureResultUrlVO::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


