

#include "huaweicloud/gaussdbfornosql/v3/model/CertInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CertInfo::CertInfo()
{
    category_ = "";
    categoryIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
}

CertInfo::~CertInfo() = default;

void CertInfo::validate()
{
}

web::json::value CertInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }

    return val;
}
bool CertInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    return ok;
}


std::string CertInfo::getCategory() const
{
    return category_;
}

void CertInfo::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CertInfo::categoryIsSet() const
{
    return categoryIsSet_;
}

void CertInfo::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CertInfo::getDownloadLink() const
{
    return downloadLink_;
}

void CertInfo::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool CertInfo::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void CertInfo::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

}
}
}
}
}


