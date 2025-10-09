

#include "huaweicloud/cce/v3/model/MasterFlavorSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterFlavorSpec::MasterFlavorSpec()
{
    name_ = "";
    nameIsSet_ = false;
    azsIsSet_ = false;
    azFaultDomainsIsSet_ = false;
}

MasterFlavorSpec::~MasterFlavorSpec() = default;

void MasterFlavorSpec::validate()
{
}

web::json::value MasterFlavorSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }
    if(azFaultDomainsIsSet_) {
        val[utility::conversions::to_string_t("azFaultDomains")] = ModelBase::toJson(azFaultDomains_);
    }

    return val;
}
bool MasterFlavorSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("azFaultDomains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azFaultDomains"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzFaultDomains(refVal);
        }
    }
    return ok;
}


std::string MasterFlavorSpec::getName() const
{
    return name_;
}

void MasterFlavorSpec::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MasterFlavorSpec::nameIsSet() const
{
    return nameIsSet_;
}

void MasterFlavorSpec::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& MasterFlavorSpec::getAzs()
{
    return azs_;
}

void MasterFlavorSpec::setAzs(const std::vector<std::string>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool MasterFlavorSpec::azsIsSet() const
{
    return azsIsSet_;
}

void MasterFlavorSpec::unsetazs()
{
    azsIsSet_ = false;
}

std::map<std::string, std::vector<std::string>>& MasterFlavorSpec::getAzFaultDomains()
{
    return azFaultDomains_;
}

void MasterFlavorSpec::setAzFaultDomains(const std::map<std::string, std::vector<std::string>>& value)
{
    azFaultDomains_ = value;
    azFaultDomainsIsSet_ = true;
}

bool MasterFlavorSpec::azFaultDomainsIsSet() const
{
    return azFaultDomainsIsSet_;
}

void MasterFlavorSpec::unsetazFaultDomains()
{
    azFaultDomainsIsSet_ = false;
}

}
}
}
}
}


