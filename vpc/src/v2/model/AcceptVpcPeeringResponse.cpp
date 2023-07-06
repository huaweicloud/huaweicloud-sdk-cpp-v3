

#include "huaweicloud/vpc/v2/model/AcceptVpcPeeringResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AcceptVpcPeeringResponse::AcceptVpcPeeringResponse()
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

AcceptVpcPeeringResponse::~AcceptVpcPeeringResponse() = default;

void AcceptVpcPeeringResponse::validate()
{
}

web::json::value AcceptVpcPeeringResponse::toJson() const
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

bool AcceptVpcPeeringResponse::fromJson(const web::json::value& val)
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

std::string AcceptVpcPeeringResponse::getId() const
{
    return id_;
}

void AcceptVpcPeeringResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AcceptVpcPeeringResponse::idIsSet() const
{
    return idIsSet_;
}

void AcceptVpcPeeringResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AcceptVpcPeeringResponse::getName() const
{
    return name_;
}

void AcceptVpcPeeringResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AcceptVpcPeeringResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AcceptVpcPeeringResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AcceptVpcPeeringResponse::getStatus() const
{
    return status_;
}

void AcceptVpcPeeringResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AcceptVpcPeeringResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AcceptVpcPeeringResponse::unsetstatus()
{
    statusIsSet_ = false;
}

VpcInfo AcceptVpcPeeringResponse::getRequestVpcInfo() const
{
    return requestVpcInfo_;
}

void AcceptVpcPeeringResponse::setRequestVpcInfo(const VpcInfo& value)
{
    requestVpcInfo_ = value;
    requestVpcInfoIsSet_ = true;
}

bool AcceptVpcPeeringResponse::requestVpcInfoIsSet() const
{
    return requestVpcInfoIsSet_;
}

void AcceptVpcPeeringResponse::unsetrequestVpcInfo()
{
    requestVpcInfoIsSet_ = false;
}

VpcInfo AcceptVpcPeeringResponse::getAcceptVpcInfo() const
{
    return acceptVpcInfo_;
}

void AcceptVpcPeeringResponse::setAcceptVpcInfo(const VpcInfo& value)
{
    acceptVpcInfo_ = value;
    acceptVpcInfoIsSet_ = true;
}

bool AcceptVpcPeeringResponse::acceptVpcInfoIsSet() const
{
    return acceptVpcInfoIsSet_;
}

void AcceptVpcPeeringResponse::unsetacceptVpcInfo()
{
    acceptVpcInfoIsSet_ = false;
}

utility::datetime AcceptVpcPeeringResponse::getCreatedAt() const
{
    return createdAt_;
}

void AcceptVpcPeeringResponse::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AcceptVpcPeeringResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AcceptVpcPeeringResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime AcceptVpcPeeringResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void AcceptVpcPeeringResponse::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AcceptVpcPeeringResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AcceptVpcPeeringResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string AcceptVpcPeeringResponse::getDescription() const
{
    return description_;
}

void AcceptVpcPeeringResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AcceptVpcPeeringResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AcceptVpcPeeringResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


