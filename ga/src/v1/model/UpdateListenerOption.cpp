

#include "huaweicloud/ga/v1/model/UpdateListenerOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateListenerOption::UpdateListenerOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    portRangesIsSet_ = false;
    clientAffinityIsSet_ = false;
}

UpdateListenerOption::~UpdateListenerOption() = default;

void UpdateListenerOption::validate()
{
}

web::json::value UpdateListenerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(portRangesIsSet_) {
        val[utility::conversions::to_string_t("port_ranges")] = ModelBase::toJson(portRanges_);
    }
    if(clientAffinityIsSet_) {
        val[utility::conversions::to_string_t("client_affinity")] = ModelBase::toJson(clientAffinity_);
    }

    return val;
}
bool UpdateListenerOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_ranges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_ranges"));
        if(!fieldValue.is_null())
        {
            std::vector<PortRange> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRanges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_affinity"));
        if(!fieldValue.is_null())
        {
            ClientAffinity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientAffinity(refVal);
        }
    }
    return ok;
}


std::string UpdateListenerOption::getName() const
{
    return name_;
}

void UpdateListenerOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateListenerOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateListenerOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateListenerOption::getDescription() const
{
    return description_;
}

void UpdateListenerOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateListenerOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateListenerOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<PortRange>& UpdateListenerOption::getPortRanges()
{
    return portRanges_;
}

void UpdateListenerOption::setPortRanges(const std::vector<PortRange>& value)
{
    portRanges_ = value;
    portRangesIsSet_ = true;
}

bool UpdateListenerOption::portRangesIsSet() const
{
    return portRangesIsSet_;
}

void UpdateListenerOption::unsetportRanges()
{
    portRangesIsSet_ = false;
}

ClientAffinity UpdateListenerOption::getClientAffinity() const
{
    return clientAffinity_;
}

void UpdateListenerOption::setClientAffinity(const ClientAffinity& value)
{
    clientAffinity_ = value;
    clientAffinityIsSet_ = true;
}

bool UpdateListenerOption::clientAffinityIsSet() const
{
    return clientAffinityIsSet_;
}

void UpdateListenerOption::unsetclientAffinity()
{
    clientAffinityIsSet_ = false;
}

}
}
}
}
}


