

#include "huaweicloud/ga/v1/model/EndpointGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




EndpointGroupDetail::EndpointGroupDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    statusIsSet_ = false;
    trafficDialPercentage_ = 0;
    trafficDialPercentageIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    listenersIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    frozenInfoIsSet_ = false;
}

EndpointGroupDetail::~EndpointGroupDetail() = default;

void EndpointGroupDetail::validate()
{
}

web::json::value EndpointGroupDetail::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(trafficDialPercentageIsSet_) {
        val[utility::conversions::to_string_t("traffic_dial_percentage")] = ModelBase::toJson(trafficDialPercentage_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(listenersIsSet_) {
        val[utility::conversions::to_string_t("listeners")] = ModelBase::toJson(listeners_);
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

    return val;
}
bool EndpointGroupDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ConfigStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_dial_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_dial_percentage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficDialPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listeners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listeners"));
        if(!fieldValue.is_null())
        {
            std::vector<Id> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListeners(refVal);
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
    return ok;
}


std::string EndpointGroupDetail::getId() const
{
    return id_;
}

void EndpointGroupDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EndpointGroupDetail::idIsSet() const
{
    return idIsSet_;
}

void EndpointGroupDetail::unsetid()
{
    idIsSet_ = false;
}

std::string EndpointGroupDetail::getName() const
{
    return name_;
}

void EndpointGroupDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EndpointGroupDetail::nameIsSet() const
{
    return nameIsSet_;
}

void EndpointGroupDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string EndpointGroupDetail::getDescription() const
{
    return description_;
}

void EndpointGroupDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EndpointGroupDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EndpointGroupDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConfigStatus EndpointGroupDetail::getStatus() const
{
    return status_;
}

void EndpointGroupDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EndpointGroupDetail::statusIsSet() const
{
    return statusIsSet_;
}

void EndpointGroupDetail::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t EndpointGroupDetail::getTrafficDialPercentage() const
{
    return trafficDialPercentage_;
}

void EndpointGroupDetail::setTrafficDialPercentage(int32_t value)
{
    trafficDialPercentage_ = value;
    trafficDialPercentageIsSet_ = true;
}

bool EndpointGroupDetail::trafficDialPercentageIsSet() const
{
    return trafficDialPercentageIsSet_;
}

void EndpointGroupDetail::unsettrafficDialPercentage()
{
    trafficDialPercentageIsSet_ = false;
}

std::string EndpointGroupDetail::getRegionId() const
{
    return regionId_;
}

void EndpointGroupDetail::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool EndpointGroupDetail::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void EndpointGroupDetail::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::vector<Id>& EndpointGroupDetail::getListeners()
{
    return listeners_;
}

void EndpointGroupDetail::setListeners(const std::vector<Id>& value)
{
    listeners_ = value;
    listenersIsSet_ = true;
}

bool EndpointGroupDetail::listenersIsSet() const
{
    return listenersIsSet_;
}

void EndpointGroupDetail::unsetlisteners()
{
    listenersIsSet_ = false;
}

utility::datetime EndpointGroupDetail::getCreatedAt() const
{
    return createdAt_;
}

void EndpointGroupDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EndpointGroupDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EndpointGroupDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime EndpointGroupDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void EndpointGroupDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EndpointGroupDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EndpointGroupDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string EndpointGroupDetail::getDomainId() const
{
    return domainId_;
}

void EndpointGroupDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool EndpointGroupDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void EndpointGroupDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

FrozenInfo EndpointGroupDetail::getFrozenInfo() const
{
    return frozenInfo_;
}

void EndpointGroupDetail::setFrozenInfo(const FrozenInfo& value)
{
    frozenInfo_ = value;
    frozenInfoIsSet_ = true;
}

bool EndpointGroupDetail::frozenInfoIsSet() const
{
    return frozenInfoIsSet_;
}

void EndpointGroupDetail::unsetfrozenInfo()
{
    frozenInfoIsSet_ = false;
}

}
}
}
}
}


