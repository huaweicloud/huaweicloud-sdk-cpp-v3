

#include "huaweicloud/gaussdbfornosql/v3/model/ComputeFlavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ComputeFlavor::ComputeFlavor()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    azStatusIsSet_ = false;
    regionStatus_ = "";
    regionStatusIsSet_ = false;
}

ComputeFlavor::~ComputeFlavor() = default;

void ComputeFlavor::validate()
{
}

web::json::value ComputeFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(regionStatusIsSet_) {
        val[utility::conversions::to_string_t("region_status")] = ModelBase::toJson(regionStatus_);
    }

    return val;
}

bool ComputeFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionStatus(refVal);
        }
    }
    return ok;
}

std::string ComputeFlavor::getVcpus() const
{
    return vcpus_;
}

void ComputeFlavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ComputeFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ComputeFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string ComputeFlavor::getRam() const
{
    return ram_;
}

void ComputeFlavor::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ComputeFlavor::ramIsSet() const
{
    return ramIsSet_;
}

void ComputeFlavor::unsetram()
{
    ramIsSet_ = false;
}

std::string ComputeFlavor::getSpecCode() const
{
    return specCode_;
}

void ComputeFlavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ComputeFlavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ComputeFlavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::map<std::string, std::string>& ComputeFlavor::getAzStatus()
{
    return azStatus_;
}

void ComputeFlavor::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool ComputeFlavor::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void ComputeFlavor::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::string ComputeFlavor::getRegionStatus() const
{
    return regionStatus_;
}

void ComputeFlavor::setRegionStatus(const std::string& value)
{
    regionStatus_ = value;
    regionStatusIsSet_ = true;
}

bool ComputeFlavor::regionStatusIsSet() const
{
    return regionStatusIsSet_;
}

void ComputeFlavor::unsetregionStatus()
{
    regionStatusIsSet_ = false;
}

}
}
}
}
}


