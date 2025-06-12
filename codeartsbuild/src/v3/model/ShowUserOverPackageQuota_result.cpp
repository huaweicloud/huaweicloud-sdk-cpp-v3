

#include "huaweicloud/codeartsbuild/v3/model/ShowUserOverPackageQuota_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserOverPackageQuota_result::ShowUserOverPackageQuota_result()
{
    isOverQuota_ = false;
    isOverQuotaIsSet_ = false;
    buildQuota_ = "";
    buildQuotaIsSet_ = false;
    usedQuota_ = "";
    usedQuotaIsSet_ = false;
}

ShowUserOverPackageQuota_result::~ShowUserOverPackageQuota_result() = default;

void ShowUserOverPackageQuota_result::validate()
{
}

web::json::value ShowUserOverPackageQuota_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isOverQuotaIsSet_) {
        val[utility::conversions::to_string_t("is_over_quota")] = ModelBase::toJson(isOverQuota_);
    }
    if(buildQuotaIsSet_) {
        val[utility::conversions::to_string_t("build_quota")] = ModelBase::toJson(buildQuota_);
    }
    if(usedQuotaIsSet_) {
        val[utility::conversions::to_string_t("used_quota")] = ModelBase::toJson(usedQuota_);
    }

    return val;
}
bool ShowUserOverPackageQuota_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_over_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_over_quota"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOverQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_quota"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_quota"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedQuota(refVal);
        }
    }
    return ok;
}


bool ShowUserOverPackageQuota_result::isIsOverQuota() const
{
    return isOverQuota_;
}

void ShowUserOverPackageQuota_result::setIsOverQuota(bool value)
{
    isOverQuota_ = value;
    isOverQuotaIsSet_ = true;
}

bool ShowUserOverPackageQuota_result::isOverQuotaIsSet() const
{
    return isOverQuotaIsSet_;
}

void ShowUserOverPackageQuota_result::unsetisOverQuota()
{
    isOverQuotaIsSet_ = false;
}

std::string ShowUserOverPackageQuota_result::getBuildQuota() const
{
    return buildQuota_;
}

void ShowUserOverPackageQuota_result::setBuildQuota(const std::string& value)
{
    buildQuota_ = value;
    buildQuotaIsSet_ = true;
}

bool ShowUserOverPackageQuota_result::buildQuotaIsSet() const
{
    return buildQuotaIsSet_;
}

void ShowUserOverPackageQuota_result::unsetbuildQuota()
{
    buildQuotaIsSet_ = false;
}

std::string ShowUserOverPackageQuota_result::getUsedQuota() const
{
    return usedQuota_;
}

void ShowUserOverPackageQuota_result::setUsedQuota(const std::string& value)
{
    usedQuota_ = value;
    usedQuotaIsSet_ = true;
}

bool ShowUserOverPackageQuota_result::usedQuotaIsSet() const
{
    return usedQuotaIsSet_;
}

void ShowUserOverPackageQuota_result::unsetusedQuota()
{
    usedQuotaIsSet_ = false;
}

}
}
}
}
}


