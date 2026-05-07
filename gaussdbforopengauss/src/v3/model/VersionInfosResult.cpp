

#include "huaweicloud/gaussdbforopengauss/v3/model/VersionInfosResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




VersionInfosResult::VersionInfosResult()
{
    version_ = "";
    versionIsSet_ = false;
    kernelVersion_ = "";
    kernelVersionIsSet_ = false;
    recommend_ = false;
    recommendIsSet_ = false;
}

VersionInfosResult::~VersionInfosResult() = default;

void VersionInfosResult::validate()
{
}

web::json::value VersionInfosResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(kernelVersionIsSet_) {
        val[utility::conversions::to_string_t("kernel_version")] = ModelBase::toJson(kernelVersion_);
    }
    if(recommendIsSet_) {
        val[utility::conversions::to_string_t("recommend")] = ModelBase::toJson(recommend_);
    }

    return val;
}
bool VersionInfosResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recommend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommend"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommend(refVal);
        }
    }
    return ok;
}


std::string VersionInfosResult::getVersion() const
{
    return version_;
}

void VersionInfosResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool VersionInfosResult::versionIsSet() const
{
    return versionIsSet_;
}

void VersionInfosResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string VersionInfosResult::getKernelVersion() const
{
    return kernelVersion_;
}

void VersionInfosResult::setKernelVersion(const std::string& value)
{
    kernelVersion_ = value;
    kernelVersionIsSet_ = true;
}

bool VersionInfosResult::kernelVersionIsSet() const
{
    return kernelVersionIsSet_;
}

void VersionInfosResult::unsetkernelVersion()
{
    kernelVersionIsSet_ = false;
}

bool VersionInfosResult::isRecommend() const
{
    return recommend_;
}

void VersionInfosResult::setRecommend(bool value)
{
    recommend_ = value;
    recommendIsSet_ = true;
}

bool VersionInfosResult::recommendIsSet() const
{
    return recommendIsSet_;
}

void VersionInfosResult::unsetrecommend()
{
    recommendIsSet_ = false;
}

}
}
}
}
}


