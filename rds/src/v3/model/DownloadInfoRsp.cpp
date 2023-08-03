

#include "huaweicloud/rds/v3/model/DownloadInfoRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DownloadInfoRsp::DownloadInfoRsp()
{
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

DownloadInfoRsp::~DownloadInfoRsp() = default;

void DownloadInfoRsp::validate()
{
}

web::json::value DownloadInfoRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}

bool DownloadInfoRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}

std::string DownloadInfoRsp::getDownloadLink() const
{
    return downloadLink_;
}

void DownloadInfoRsp::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool DownloadInfoRsp::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void DownloadInfoRsp::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string DownloadInfoRsp::getCategory() const
{
    return category_;
}

void DownloadInfoRsp::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool DownloadInfoRsp::categoryIsSet() const
{
    return categoryIsSet_;
}

void DownloadInfoRsp::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


