

#include "huaweicloud/gaussdbforopengauss/v3/model/AvailableFlavorInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AvailableFlavorInfoResult::AvailableFlavorInfoResult()
{
    specCpde_ = "";
    specCpdeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    azStatusIsSet_ = false;
}

AvailableFlavorInfoResult::~AvailableFlavorInfoResult() = default;

void AvailableFlavorInfoResult::validate()
{
}

web::json::value AvailableFlavorInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCpdeIsSet_) {
        val[utility::conversions::to_string_t("spec_cpde")] = ModelBase::toJson(specCpde_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool AvailableFlavorInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_cpde"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_cpde"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCpde(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    return ok;
}


std::string AvailableFlavorInfoResult::getSpecCpde() const
{
    return specCpde_;
}

void AvailableFlavorInfoResult::setSpecCpde(const std::string& value)
{
    specCpde_ = value;
    specCpdeIsSet_ = true;
}

bool AvailableFlavorInfoResult::specCpdeIsSet() const
{
    return specCpdeIsSet_;
}

void AvailableFlavorInfoResult::unsetspecCpde()
{
    specCpdeIsSet_ = false;
}

std::string AvailableFlavorInfoResult::getVcpus() const
{
    return vcpus_;
}

void AvailableFlavorInfoResult::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool AvailableFlavorInfoResult::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void AvailableFlavorInfoResult::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string AvailableFlavorInfoResult::getRam() const
{
    return ram_;
}

void AvailableFlavorInfoResult::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool AvailableFlavorInfoResult::ramIsSet() const
{
    return ramIsSet_;
}

void AvailableFlavorInfoResult::unsetram()
{
    ramIsSet_ = false;
}

std::map<std::string, std::string>& AvailableFlavorInfoResult::getAzStatus()
{
    return azStatus_;
}

void AvailableFlavorInfoResult::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool AvailableFlavorInfoResult::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void AvailableFlavorInfoResult::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


