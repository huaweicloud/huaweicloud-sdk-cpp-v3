

#include "huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowDisasterRecoveryDrillParams::ShowDisasterRecoveryDrillParams()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    drillVpcId_ = "";
    drillVpcIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    drillServersIsSet_ = false;
}

ShowDisasterRecoveryDrillParams::~ShowDisasterRecoveryDrillParams() = default;

void ShowDisasterRecoveryDrillParams::validate()
{
}

web::json::value ShowDisasterRecoveryDrillParams::toJson() const
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
    if(drillVpcIdIsSet_) {
        val[utility::conversions::to_string_t("drill_vpc_id")] = ModelBase::toJson(drillVpcId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(drillServersIsSet_) {
        val[utility::conversions::to_string_t("drill_servers")] = ModelBase::toJson(drillServers_);
    }

    return val;
}

bool ShowDisasterRecoveryDrillParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("drill_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drill_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrillVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drill_servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drill_servers"));
        if(!fieldValue.is_null())
        {
            std::vector<DrillServerParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrillServers(refVal);
        }
    }
    return ok;
}


std::string ShowDisasterRecoveryDrillParams::getId() const
{
    return id_;
}

void ShowDisasterRecoveryDrillParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::idIsSet() const
{
    return idIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetid()
{
    idIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getName() const
{
    return name_;
}

void ShowDisasterRecoveryDrillParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getStatus() const
{
    return status_;
}

void ShowDisasterRecoveryDrillParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getDrillVpcId() const
{
    return drillVpcId_;
}

void ShowDisasterRecoveryDrillParams::setDrillVpcId(const std::string& value)
{
    drillVpcId_ = value;
    drillVpcIdIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::drillVpcIdIsSet() const
{
    return drillVpcIdIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetdrillVpcId()
{
    drillVpcIdIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getCreatedAt() const
{
    return createdAt_;
}

void ShowDisasterRecoveryDrillParams::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowDisasterRecoveryDrillParams::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowDisasterRecoveryDrillParams::getServerGroupId() const
{
    return serverGroupId_;
}

void ShowDisasterRecoveryDrillParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::vector<DrillServerParams>& ShowDisasterRecoveryDrillParams::getDrillServers()
{
    return drillServers_;
}

void ShowDisasterRecoveryDrillParams::setDrillServers(const std::vector<DrillServerParams>& value)
{
    drillServers_ = value;
    drillServersIsSet_ = true;
}

bool ShowDisasterRecoveryDrillParams::drillServersIsSet() const
{
    return drillServersIsSet_;
}

void ShowDisasterRecoveryDrillParams::unsetdrillServers()
{
    drillServersIsSet_ = false;
}

}
}
}
}
}


