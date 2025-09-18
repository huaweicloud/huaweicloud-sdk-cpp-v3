

#include "huaweicloud/ga/v1/model/CreateListenerOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateListenerOption::CreateListenerOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    protocolIsSet_ = false;
    portRangesIsSet_ = false;
    clientAffinityIsSet_ = false;
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
    tagsIsSet_ = false;
}

CreateListenerOption::~CreateListenerOption() = default;

void CreateListenerOption::validate()
{
}

web::json::value CreateListenerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(portRangesIsSet_) {
        val[utility::conversions::to_string_t("port_ranges")] = ModelBase::toJson(portRanges_);
    }
    if(clientAffinityIsSet_) {
        val[utility::conversions::to_string_t("client_affinity")] = ModelBase::toJson(clientAffinity_);
    }
    if(acceleratorIdIsSet_) {
        val[utility::conversions::to_string_t("accelerator_id")] = ModelBase::toJson(acceleratorId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateListenerOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            ListenerProtocol refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("accelerator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceleratorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateListenerOption::getName() const
{
    return name_;
}

void CreateListenerOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateListenerOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateListenerOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateListenerOption::getDescription() const
{
    return description_;
}

void CreateListenerOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateListenerOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateListenerOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

ListenerProtocol CreateListenerOption::getProtocol() const
{
    return protocol_;
}

void CreateListenerOption::setProtocol(const ListenerProtocol& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CreateListenerOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void CreateListenerOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<PortRange>& CreateListenerOption::getPortRanges()
{
    return portRanges_;
}

void CreateListenerOption::setPortRanges(const std::vector<PortRange>& value)
{
    portRanges_ = value;
    portRangesIsSet_ = true;
}

bool CreateListenerOption::portRangesIsSet() const
{
    return portRangesIsSet_;
}

void CreateListenerOption::unsetportRanges()
{
    portRangesIsSet_ = false;
}

ClientAffinity CreateListenerOption::getClientAffinity() const
{
    return clientAffinity_;
}

void CreateListenerOption::setClientAffinity(const ClientAffinity& value)
{
    clientAffinity_ = value;
    clientAffinityIsSet_ = true;
}

bool CreateListenerOption::clientAffinityIsSet() const
{
    return clientAffinityIsSet_;
}

void CreateListenerOption::unsetclientAffinity()
{
    clientAffinityIsSet_ = false;
}

std::string CreateListenerOption::getAcceleratorId() const
{
    return acceleratorId_;
}

void CreateListenerOption::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool CreateListenerOption::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void CreateListenerOption::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

std::vector<ResourceTag>& CreateListenerOption::getTags()
{
    return tags_;
}

void CreateListenerOption::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateListenerOption::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateListenerOption::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


