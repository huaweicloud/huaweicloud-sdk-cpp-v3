

#include "huaweicloud/live/v1/model/PushDomainApplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




PushDomainApplication::PushDomainApplication()
{
    name_ = "";
    nameIsSet_ = false;
    hlsFragment_ = 0;
    hlsFragmentIsSet_ = false;
    hlsTsCount_ = 0;
    hlsTsCountIsSet_ = false;
    hlsMinFrags_ = 0;
    hlsMinFragsIsSet_ = false;
}

PushDomainApplication::~PushDomainApplication() = default;

void PushDomainApplication::validate()
{
}

web::json::value PushDomainApplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hlsFragmentIsSet_) {
        val[utility::conversions::to_string_t("hls_fragment")] = ModelBase::toJson(hlsFragment_);
    }
    if(hlsTsCountIsSet_) {
        val[utility::conversions::to_string_t("hls_ts_count")] = ModelBase::toJson(hlsTsCount_);
    }
    if(hlsMinFragsIsSet_) {
        val[utility::conversions::to_string_t("hls_min_frags")] = ModelBase::toJson(hlsMinFrags_);
    }

    return val;
}
bool PushDomainApplication::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hls_fragment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_fragment"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsFragment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls_ts_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_ts_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsTsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls_min_frags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_min_frags"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsMinFrags(refVal);
        }
    }
    return ok;
}


std::string PushDomainApplication::getName() const
{
    return name_;
}

void PushDomainApplication::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PushDomainApplication::nameIsSet() const
{
    return nameIsSet_;
}

void PushDomainApplication::unsetname()
{
    nameIsSet_ = false;
}

int32_t PushDomainApplication::getHlsFragment() const
{
    return hlsFragment_;
}

void PushDomainApplication::setHlsFragment(int32_t value)
{
    hlsFragment_ = value;
    hlsFragmentIsSet_ = true;
}

bool PushDomainApplication::hlsFragmentIsSet() const
{
    return hlsFragmentIsSet_;
}

void PushDomainApplication::unsethlsFragment()
{
    hlsFragmentIsSet_ = false;
}

int32_t PushDomainApplication::getHlsTsCount() const
{
    return hlsTsCount_;
}

void PushDomainApplication::setHlsTsCount(int32_t value)
{
    hlsTsCount_ = value;
    hlsTsCountIsSet_ = true;
}

bool PushDomainApplication::hlsTsCountIsSet() const
{
    return hlsTsCountIsSet_;
}

void PushDomainApplication::unsethlsTsCount()
{
    hlsTsCountIsSet_ = false;
}

int32_t PushDomainApplication::getHlsMinFrags() const
{
    return hlsMinFrags_;
}

void PushDomainApplication::setHlsMinFrags(int32_t value)
{
    hlsMinFrags_ = value;
    hlsMinFragsIsSet_ = true;
}

bool PushDomainApplication::hlsMinFragsIsSet() const
{
    return hlsMinFragsIsSet_;
}

void PushDomainApplication::unsethlsMinFrags()
{
    hlsMinFragsIsSet_ = false;
}

}
}
}
}
}


