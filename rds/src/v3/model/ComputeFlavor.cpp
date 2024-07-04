

#include "huaweicloud/rds/v3/model/ComputeFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ComputeFlavor::ComputeFlavor()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    azStatusIsSet_ = false;
}

ComputeFlavor::~ComputeFlavor() = default;

void ComputeFlavor::validate()
{
}

web::json::value ComputeFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
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
bool ComputeFlavor::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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


std::string ComputeFlavor::getId() const
{
    return id_;
}

void ComputeFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ComputeFlavor::idIsSet() const
{
    return idIsSet_;
}

void ComputeFlavor::unsetid()
{
    idIsSet_ = false;
}

std::string ComputeFlavor::getCode() const
{
    return code_;
}

void ComputeFlavor::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ComputeFlavor::codeIsSet() const
{
    return codeIsSet_;
}

void ComputeFlavor::unsetcode()
{
    codeIsSet_ = false;
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

}
}
}
}
}


