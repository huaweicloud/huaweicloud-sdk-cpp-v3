

#include "huaweicloud/live/v1/model/EndpointItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




EndpointItem::EndpointItem()
{
    hlsPackageIsSet_ = false;
    dashPackageIsSet_ = false;
    mssPackageIsSet_ = false;
}

EndpointItem::~EndpointItem() = default;

void EndpointItem::validate()
{
}

web::json::value EndpointItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hlsPackageIsSet_) {
        val[utility::conversions::to_string_t("hls_package")] = ModelBase::toJson(hlsPackage_);
    }
    if(dashPackageIsSet_) {
        val[utility::conversions::to_string_t("dash_package")] = ModelBase::toJson(dashPackage_);
    }
    if(mssPackageIsSet_) {
        val[utility::conversions::to_string_t("mss_package")] = ModelBase::toJson(mssPackage_);
    }

    return val;
}
bool EndpointItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hls_package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_package"));
        if(!fieldValue.is_null())
        {
            std::vector<HlsPackageItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dash_package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dash_package"));
        if(!fieldValue.is_null())
        {
            std::vector<DashPackageItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDashPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mss_package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mss_package"));
        if(!fieldValue.is_null())
        {
            std::vector<MssPackageItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMssPackage(refVal);
        }
    }
    return ok;
}


std::vector<HlsPackageItem>& EndpointItem::getHlsPackage()
{
    return hlsPackage_;
}

void EndpointItem::setHlsPackage(const std::vector<HlsPackageItem>& value)
{
    hlsPackage_ = value;
    hlsPackageIsSet_ = true;
}

bool EndpointItem::hlsPackageIsSet() const
{
    return hlsPackageIsSet_;
}

void EndpointItem::unsethlsPackage()
{
    hlsPackageIsSet_ = false;
}

std::vector<DashPackageItem>& EndpointItem::getDashPackage()
{
    return dashPackage_;
}

void EndpointItem::setDashPackage(const std::vector<DashPackageItem>& value)
{
    dashPackage_ = value;
    dashPackageIsSet_ = true;
}

bool EndpointItem::dashPackageIsSet() const
{
    return dashPackageIsSet_;
}

void EndpointItem::unsetdashPackage()
{
    dashPackageIsSet_ = false;
}

std::vector<MssPackageItem>& EndpointItem::getMssPackage()
{
    return mssPackage_;
}

void EndpointItem::setMssPackage(const std::vector<MssPackageItem>& value)
{
    mssPackage_ = value;
    mssPackageIsSet_ = true;
}

bool EndpointItem::mssPackageIsSet() const
{
    return mssPackageIsSet_;
}

void EndpointItem::unsetmssPackage()
{
    mssPackageIsSet_ = false;
}

}
}
}
}
}


