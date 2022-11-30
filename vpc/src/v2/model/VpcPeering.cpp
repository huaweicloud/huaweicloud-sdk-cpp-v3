

#include "huaweicloud/vpc/v2/model/VpcPeering.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




VpcPeering::VpcPeering()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    requestVpcInfoIsSet_ = false;
    acceptVpcInfoIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

VpcPeering::~VpcPeering() = default;

void VpcPeering::validate()
{
}

web::json::value VpcPeering::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(requestVpcInfoIsSet_) {
        val[utility::conversions::to_string_t("request_vpc_info")] = ModelBase::toJson(requestVpcInfo_);
    }
    if(acceptVpcInfoIsSet_) {
        val[utility::conversions::to_string_t("accept_vpc_info")] = ModelBase::toJson(acceptVpcInfo_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool VpcPeering::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_vpc_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_vpc_info"));
        if(!fieldValue.is_null())
        {
            VpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestVpcInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accept_vpc_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept_vpc_info"));
        if(!fieldValue.is_null())
        {
            VpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptVpcInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string VpcPeering::getId() const
{
    return id_;
}

void VpcPeering::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VpcPeering::idIsSet() const
{
    return idIsSet_;
}

void VpcPeering::unsetid()
{
    idIsSet_ = false;
}

std::string VpcPeering::getName() const
{
    return name_;
}

void VpcPeering::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VpcPeering::nameIsSet() const
{
    return nameIsSet_;
}

void VpcPeering::unsetname()
{
    nameIsSet_ = false;
}

std::string VpcPeering::getStatus() const
{
    return status_;
}

void VpcPeering::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VpcPeering::statusIsSet() const
{
    return statusIsSet_;
}

void VpcPeering::unsetstatus()
{
    statusIsSet_ = false;
}

VpcInfo VpcPeering::getRequestVpcInfo() const
{
    return requestVpcInfo_;
}

void VpcPeering::setRequestVpcInfo(const VpcInfo& value)
{
    requestVpcInfo_ = value;
    requestVpcInfoIsSet_ = true;
}

bool VpcPeering::requestVpcInfoIsSet() const
{
    return requestVpcInfoIsSet_;
}

void VpcPeering::unsetrequestVpcInfo()
{
    requestVpcInfoIsSet_ = false;
}

VpcInfo VpcPeering::getAcceptVpcInfo() const
{
    return acceptVpcInfo_;
}

void VpcPeering::setAcceptVpcInfo(const VpcInfo& value)
{
    acceptVpcInfo_ = value;
    acceptVpcInfoIsSet_ = true;
}

bool VpcPeering::acceptVpcInfoIsSet() const
{
    return acceptVpcInfoIsSet_;
}

void VpcPeering::unsetacceptVpcInfo()
{
    acceptVpcInfoIsSet_ = false;
}

utility::datetime VpcPeering::getCreatedAt() const
{
    return createdAt_;
}

void VpcPeering::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VpcPeering::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VpcPeering::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime VpcPeering::getUpdatedAt() const
{
    return updatedAt_;
}

void VpcPeering::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VpcPeering::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VpcPeering::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string VpcPeering::getDescription() const
{
    return description_;
}

void VpcPeering::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VpcPeering::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VpcPeering::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


