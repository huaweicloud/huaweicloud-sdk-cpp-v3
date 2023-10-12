

#include "huaweicloud/eip/v2/model/BandwidthPkgPage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BandwidthPkgPage::BandwidthPkgPage()
{
    href_ = "";
    hrefIsSet_ = false;
    rel_ = "";
    relIsSet_ = false;
}

BandwidthPkgPage::~BandwidthPkgPage() = default;

void BandwidthPkgPage::validate()
{
}

web::json::value BandwidthPkgPage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }
    if(relIsSet_) {
        val[utility::conversions::to_string_t("rel")] = ModelBase::toJson(rel_);
    }

    return val;
}
bool BandwidthPkgPage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("href"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHref(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRel(refVal);
        }
    }
    return ok;
}


std::string BandwidthPkgPage::getHref() const
{
    return href_;
}

void BandwidthPkgPage::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool BandwidthPkgPage::hrefIsSet() const
{
    return hrefIsSet_;
}

void BandwidthPkgPage::unsethref()
{
    hrefIsSet_ = false;
}

std::string BandwidthPkgPage::getRel() const
{
    return rel_;
}

void BandwidthPkgPage::setRel(const std::string& value)
{
    rel_ = value;
    relIsSet_ = true;
}

bool BandwidthPkgPage::relIsSet() const
{
    return relIsSet_;
}

void BandwidthPkgPage::unsetrel()
{
    relIsSet_ = false;
}

}
}
}
}
}


