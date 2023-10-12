

#include "huaweicloud/gaussdbfornosql/v3/model/ListFlavorsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListFlavorsResult::ListFlavorsResult()
{
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    availabilityZoneIsSet_ = false;
    azStatusIsSet_ = false;
}

ListFlavorsResult::~ListFlavorsResult() = default;

void ListFlavorsResult::validate()
{
}

web::json::value ListFlavorsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool ListFlavorsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    return ok;
}


std::string ListFlavorsResult::getEngineName() const
{
    return engineName_;
}

void ListFlavorsResult::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListFlavorsResult::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListFlavorsResult::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListFlavorsResult::getEngineVersion() const
{
    return engineVersion_;
}

void ListFlavorsResult::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ListFlavorsResult::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ListFlavorsResult::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string ListFlavorsResult::getVcpus() const
{
    return vcpus_;
}

void ListFlavorsResult::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ListFlavorsResult::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ListFlavorsResult::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string ListFlavorsResult::getRam() const
{
    return ram_;
}

void ListFlavorsResult::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ListFlavorsResult::ramIsSet() const
{
    return ramIsSet_;
}

void ListFlavorsResult::unsetram()
{
    ramIsSet_ = false;
}

std::string ListFlavorsResult::getSpecCode() const
{
    return specCode_;
}

void ListFlavorsResult::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListFlavorsResult::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListFlavorsResult::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::vector<std::string>& ListFlavorsResult::getAvailabilityZone()
{
    return availabilityZone_;
}

void ListFlavorsResult::setAvailabilityZone(const std::vector<std::string>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListFlavorsResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListFlavorsResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

Object ListFlavorsResult::getAzStatus() const
{
    return azStatus_;
}

void ListFlavorsResult::setAzStatus(const Object& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool ListFlavorsResult::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void ListFlavorsResult::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


