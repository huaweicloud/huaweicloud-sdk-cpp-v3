

#include "huaweicloud/vod/v1/model/CheckMd5DuplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CheckMd5DuplicationRequest::CheckMd5DuplicationRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
}

CheckMd5DuplicationRequest::~CheckMd5DuplicationRequest() = default;

void CheckMd5DuplicationRequest::validate()
{
}

web::json::value CheckMd5DuplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }

    return val;
}
bool CheckMd5DuplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
        }
    }
    return ok;
}


std::string CheckMd5DuplicationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CheckMd5DuplicationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CheckMd5DuplicationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CheckMd5DuplicationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

int64_t CheckMd5DuplicationRequest::getSize() const
{
    return size_;
}

void CheckMd5DuplicationRequest::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CheckMd5DuplicationRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void CheckMd5DuplicationRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CheckMd5DuplicationRequest::getMd5() const
{
    return md5_;
}

void CheckMd5DuplicationRequest::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool CheckMd5DuplicationRequest::md5IsSet() const
{
    return md5IsSet_;
}

void CheckMd5DuplicationRequest::unsetmd5()
{
    md5IsSet_ = false;
}

}
}
}
}
}


