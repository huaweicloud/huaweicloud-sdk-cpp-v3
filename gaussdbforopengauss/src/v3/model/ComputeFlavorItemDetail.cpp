

#include "huaweicloud/gaussdbforopengauss/v3/model/ComputeFlavorItemDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ComputeFlavorItemDetail::ComputeFlavorItemDetail()
{
    id_ = "";
    idIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    iaasCode_ = "";
    iaasCodeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    supportedIpv6_ = false;
    supportedIpv6IsSet_ = false;
    azStatusIsSet_ = false;
}

ComputeFlavorItemDetail::~ComputeFlavorItemDetail() = default;

void ComputeFlavorItemDetail::validate()
{
}

web::json::value ComputeFlavorItemDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(iaasCodeIsSet_) {
        val[utility::conversions::to_string_t("iaas_code")] = ModelBase::toJson(iaasCode_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(supportedIpv6IsSet_) {
        val[utility::conversions::to_string_t("supported_ipv6")] = ModelBase::toJson(supportedIpv6_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool ComputeFlavorItemDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("iaas_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iaas_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIaasCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("supported_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedIpv6(refVal);
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


std::string ComputeFlavorItemDetail::getId() const
{
    return id_;
}

void ComputeFlavorItemDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ComputeFlavorItemDetail::idIsSet() const
{
    return idIsSet_;
}

void ComputeFlavorItemDetail::unsetid()
{
    idIsSet_ = false;
}

std::string ComputeFlavorItemDetail::getSpecCode() const
{
    return specCode_;
}

void ComputeFlavorItemDetail::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ComputeFlavorItemDetail::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ComputeFlavorItemDetail::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ComputeFlavorItemDetail::getIaasCode() const
{
    return iaasCode_;
}

void ComputeFlavorItemDetail::setIaasCode(const std::string& value)
{
    iaasCode_ = value;
    iaasCodeIsSet_ = true;
}

bool ComputeFlavorItemDetail::iaasCodeIsSet() const
{
    return iaasCodeIsSet_;
}

void ComputeFlavorItemDetail::unsetiaasCode()
{
    iaasCodeIsSet_ = false;
}

std::string ComputeFlavorItemDetail::getVcpus() const
{
    return vcpus_;
}

void ComputeFlavorItemDetail::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ComputeFlavorItemDetail::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ComputeFlavorItemDetail::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string ComputeFlavorItemDetail::getRam() const
{
    return ram_;
}

void ComputeFlavorItemDetail::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ComputeFlavorItemDetail::ramIsSet() const
{
    return ramIsSet_;
}

void ComputeFlavorItemDetail::unsetram()
{
    ramIsSet_ = false;
}

bool ComputeFlavorItemDetail::isSupportedIpv6() const
{
    return supportedIpv6_;
}

void ComputeFlavorItemDetail::setSupportedIpv6(bool value)
{
    supportedIpv6_ = value;
    supportedIpv6IsSet_ = true;
}

bool ComputeFlavorItemDetail::supportedIpv6IsSet() const
{
    return supportedIpv6IsSet_;
}

void ComputeFlavorItemDetail::unsetsupportedIpv6()
{
    supportedIpv6IsSet_ = false;
}

std::map<std::string, std::string>& ComputeFlavorItemDetail::getAzStatus()
{
    return azStatus_;
}

void ComputeFlavorItemDetail::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool ComputeFlavorItemDetail::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void ComputeFlavorItemDetail::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


