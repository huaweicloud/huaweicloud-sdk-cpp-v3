

#include "huaweicloud/gaussdbforopengauss/v3/model/DownloadObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DownloadObject::DownloadObject()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    linkExpiredTime_ = "";
    linkExpiredTimeIsSet_ = false;
}

DownloadObject::~DownloadObject() = default;

void DownloadObject::validate()
{
}

web::json::value DownloadObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(linkExpiredTimeIsSet_) {
        val[utility::conversions::to_string_t("link_expired_time")] = ModelBase::toJson(linkExpiredTime_);
    }

    return val;
}
bool DownloadObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_expired_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkExpiredTime(refVal);
        }
    }
    return ok;
}


std::string DownloadObject::getName() const
{
    return name_;
}

void DownloadObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DownloadObject::nameIsSet() const
{
    return nameIsSet_;
}

void DownloadObject::unsetname()
{
    nameIsSet_ = false;
}

double DownloadObject::getSize() const
{
    return size_;
}

void DownloadObject::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DownloadObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void DownloadObject::unsetsize()
{
    sizeIsSet_ = false;
}

std::string DownloadObject::getDownloadLink() const
{
    return downloadLink_;
}

void DownloadObject::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool DownloadObject::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void DownloadObject::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string DownloadObject::getLinkExpiredTime() const
{
    return linkExpiredTime_;
}

void DownloadObject::setLinkExpiredTime(const std::string& value)
{
    linkExpiredTime_ = value;
    linkExpiredTimeIsSet_ = true;
}

bool DownloadObject::linkExpiredTimeIsSet() const
{
    return linkExpiredTimeIsSet_;
}

void DownloadObject::unsetlinkExpiredTime()
{
    linkExpiredTimeIsSet_ = false;
}

}
}
}
}
}


