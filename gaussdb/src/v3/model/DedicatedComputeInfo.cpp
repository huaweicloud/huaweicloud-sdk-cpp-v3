

#include "huaweicloud/gaussdb/v3/model/DedicatedComputeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DedicatedComputeInfo::DedicatedComputeInfo()
{
    vcpusTotal_ = 0;
    vcpusTotalIsSet_ = false;
    vcpusUsed_ = 0;
    vcpusUsedIsSet_ = false;
    ramTotal_ = 0;
    ramTotalIsSet_ = false;
    ramUsed_ = 0;
    ramUsedIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    hostNum_ = 0;
    hostNumIsSet_ = false;
}

DedicatedComputeInfo::~DedicatedComputeInfo() = default;

void DedicatedComputeInfo::validate()
{
}

web::json::value DedicatedComputeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusTotalIsSet_) {
        val[utility::conversions::to_string_t("vcpus_total")] = ModelBase::toJson(vcpusTotal_);
    }
    if(vcpusUsedIsSet_) {
        val[utility::conversions::to_string_t("vcpus_used")] = ModelBase::toJson(vcpusUsed_);
    }
    if(ramTotalIsSet_) {
        val[utility::conversions::to_string_t("ram_total")] = ModelBase::toJson(ramTotal_);
    }
    if(ramUsedIsSet_) {
        val[utility::conversions::to_string_t("ram_used")] = ModelBase::toJson(ramUsed_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(hostNumIsSet_) {
        val[utility::conversions::to_string_t("host_num")] = ModelBase::toJson(hostNum_);
    }

    return val;
}

bool DedicatedComputeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpusTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpusUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRamTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRamUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNum(refVal);
        }
    }
    return ok;
}

int32_t DedicatedComputeInfo::getVcpusTotal() const
{
    return vcpusTotal_;
}

void DedicatedComputeInfo::setVcpusTotal(int32_t value)
{
    vcpusTotal_ = value;
    vcpusTotalIsSet_ = true;
}

bool DedicatedComputeInfo::vcpusTotalIsSet() const
{
    return vcpusTotalIsSet_;
}

void DedicatedComputeInfo::unsetvcpusTotal()
{
    vcpusTotalIsSet_ = false;
}

int32_t DedicatedComputeInfo::getVcpusUsed() const
{
    return vcpusUsed_;
}

void DedicatedComputeInfo::setVcpusUsed(int32_t value)
{
    vcpusUsed_ = value;
    vcpusUsedIsSet_ = true;
}

bool DedicatedComputeInfo::vcpusUsedIsSet() const
{
    return vcpusUsedIsSet_;
}

void DedicatedComputeInfo::unsetvcpusUsed()
{
    vcpusUsedIsSet_ = false;
}

int32_t DedicatedComputeInfo::getRamTotal() const
{
    return ramTotal_;
}

void DedicatedComputeInfo::setRamTotal(int32_t value)
{
    ramTotal_ = value;
    ramTotalIsSet_ = true;
}

bool DedicatedComputeInfo::ramTotalIsSet() const
{
    return ramTotalIsSet_;
}

void DedicatedComputeInfo::unsetramTotal()
{
    ramTotalIsSet_ = false;
}

int32_t DedicatedComputeInfo::getRamUsed() const
{
    return ramUsed_;
}

void DedicatedComputeInfo::setRamUsed(int32_t value)
{
    ramUsed_ = value;
    ramUsedIsSet_ = true;
}

bool DedicatedComputeInfo::ramUsedIsSet() const
{
    return ramUsedIsSet_;
}

void DedicatedComputeInfo::unsetramUsed()
{
    ramUsedIsSet_ = false;
}

std::string DedicatedComputeInfo::getSpecCode() const
{
    return specCode_;
}

void DedicatedComputeInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool DedicatedComputeInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void DedicatedComputeInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

int32_t DedicatedComputeInfo::getHostNum() const
{
    return hostNum_;
}

void DedicatedComputeInfo::setHostNum(int32_t value)
{
    hostNum_ = value;
    hostNumIsSet_ = true;
}

bool DedicatedComputeInfo::hostNumIsSet() const
{
    return hostNumIsSet_;
}

void DedicatedComputeInfo::unsethostNum()
{
    hostNumIsSet_ = false;
}

}
}
}
}
}


