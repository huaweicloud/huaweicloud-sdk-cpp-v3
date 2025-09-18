

#include "huaweicloud/ga/v1/model/IpGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




IpGroupDetail::IpGroupDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    statusIsSet_ = false;
    ipListIsSet_ = false;
    associatedListenersIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

IpGroupDetail::~IpGroupDetail() = default;

void IpGroupDetail::validate()
{
}

web::json::value IpGroupDetail::toJson() const
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
    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }
    if(associatedListenersIsSet_) {
        val[utility::conversions::to_string_t("associated_listeners")] = ModelBase::toJson(associatedListeners_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool IpGroupDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IpInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_listeners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_listeners"));
        if(!fieldValue.is_null())
        {
            std::vector<ListenerAccessControlPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedListeners(refVal);
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
    return ok;
}


std::string IpGroupDetail::getId() const
{
    return id_;
}

void IpGroupDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IpGroupDetail::idIsSet() const
{
    return idIsSet_;
}

void IpGroupDetail::unsetid()
{
    idIsSet_ = false;
}

std::string IpGroupDetail::getName() const
{
    return name_;
}

void IpGroupDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IpGroupDetail::nameIsSet() const
{
    return nameIsSet_;
}

void IpGroupDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string IpGroupDetail::getDescription() const
{
    return description_;
}

void IpGroupDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpGroupDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpGroupDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConfigStatus IpGroupDetail::getStatus() const
{
    return status_;
}

void IpGroupDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpGroupDetail::statusIsSet() const
{
    return statusIsSet_;
}

void IpGroupDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<IpInfo>& IpGroupDetail::getIpList()
{
    return ipList_;
}

void IpGroupDetail::setIpList(const std::vector<IpInfo>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool IpGroupDetail::ipListIsSet() const
{
    return ipListIsSet_;
}

void IpGroupDetail::unsetipList()
{
    ipListIsSet_ = false;
}

std::vector<ListenerAccessControlPolicy>& IpGroupDetail::getAssociatedListeners()
{
    return associatedListeners_;
}

void IpGroupDetail::setAssociatedListeners(const std::vector<ListenerAccessControlPolicy>& value)
{
    associatedListeners_ = value;
    associatedListenersIsSet_ = true;
}

bool IpGroupDetail::associatedListenersIsSet() const
{
    return associatedListenersIsSet_;
}

void IpGroupDetail::unsetassociatedListeners()
{
    associatedListenersIsSet_ = false;
}

utility::datetime IpGroupDetail::getCreatedAt() const
{
    return createdAt_;
}

void IpGroupDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool IpGroupDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void IpGroupDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime IpGroupDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void IpGroupDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool IpGroupDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void IpGroupDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


