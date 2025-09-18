

#include "huaweicloud/ga/v1/model/ListenerDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListenerDetail::ListenerDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    protocolIsSet_ = false;
    statusIsSet_ = false;
    portRangesIsSet_ = false;
    clientAffinityIsSet_ = false;
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    frozenInfoIsSet_ = false;
    tagsIsSet_ = false;
}

ListenerDetail::~ListenerDetail() = default;

void ListenerDetail::validate()
{
}

web::json::value ListenerDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(frozenInfoIsSet_) {
        val[utility::conversions::to_string_t("frozen_info")] = ModelBase::toJson(frozenInfo_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListenerDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ConfigStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_info"));
        if(!fieldValue.is_null())
        {
            FrozenInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfo(refVal);
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


std::string ListenerDetail::getId() const
{
    return id_;
}

void ListenerDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListenerDetail::idIsSet() const
{
    return idIsSet_;
}

void ListenerDetail::unsetid()
{
    idIsSet_ = false;
}

std::string ListenerDetail::getName() const
{
    return name_;
}

void ListenerDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListenerDetail::nameIsSet() const
{
    return nameIsSet_;
}

void ListenerDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string ListenerDetail::getDescription() const
{
    return description_;
}

void ListenerDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListenerDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListenerDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

ListenerProtocol ListenerDetail::getProtocol() const
{
    return protocol_;
}

void ListenerDetail::setProtocol(const ListenerProtocol& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListenerDetail::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListenerDetail::unsetprotocol()
{
    protocolIsSet_ = false;
}

ConfigStatus ListenerDetail::getStatus() const
{
    return status_;
}

void ListenerDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListenerDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ListenerDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<PortRange>& ListenerDetail::getPortRanges()
{
    return portRanges_;
}

void ListenerDetail::setPortRanges(const std::vector<PortRange>& value)
{
    portRanges_ = value;
    portRangesIsSet_ = true;
}

bool ListenerDetail::portRangesIsSet() const
{
    return portRangesIsSet_;
}

void ListenerDetail::unsetportRanges()
{
    portRangesIsSet_ = false;
}

ClientAffinity ListenerDetail::getClientAffinity() const
{
    return clientAffinity_;
}

void ListenerDetail::setClientAffinity(const ClientAffinity& value)
{
    clientAffinity_ = value;
    clientAffinityIsSet_ = true;
}

bool ListenerDetail::clientAffinityIsSet() const
{
    return clientAffinityIsSet_;
}

void ListenerDetail::unsetclientAffinity()
{
    clientAffinityIsSet_ = false;
}

std::string ListenerDetail::getAcceleratorId() const
{
    return acceleratorId_;
}

void ListenerDetail::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool ListenerDetail::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void ListenerDetail::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

utility::datetime ListenerDetail::getCreatedAt() const
{
    return createdAt_;
}

void ListenerDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListenerDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListenerDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListenerDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void ListenerDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListenerDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListenerDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ListenerDetail::getDomainId() const
{
    return domainId_;
}

void ListenerDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListenerDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListenerDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

FrozenInfo ListenerDetail::getFrozenInfo() const
{
    return frozenInfo_;
}

void ListenerDetail::setFrozenInfo(const FrozenInfo& value)
{
    frozenInfo_ = value;
    frozenInfoIsSet_ = true;
}

bool ListenerDetail::frozenInfoIsSet() const
{
    return frozenInfoIsSet_;
}

void ListenerDetail::unsetfrozenInfo()
{
    frozenInfoIsSet_ = false;
}

std::vector<ResourceTag>& ListenerDetail::getTags()
{
    return tags_;
}

void ListenerDetail::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListenerDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListenerDetail::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


