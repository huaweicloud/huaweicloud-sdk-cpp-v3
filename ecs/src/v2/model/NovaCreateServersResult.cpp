

#include "huaweicloud/ecs/v2/model/NovaCreateServersResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersResult::NovaCreateServersResult()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    securityGroupsIsSet_ = false;
    oSDCFdiskConfig_ = "";
    oSDCFdiskConfigIsSet_ = false;
    reservationId_ = "";
    reservationIdIsSet_ = false;
    adminPass_ = "";
    adminPassIsSet_ = false;
}

NovaCreateServersResult::~NovaCreateServersResult() = default;

void NovaCreateServersResult::validate()
{
}

web::json::value NovaCreateServersResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(oSDCFdiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFdiskConfig_);
    }
    if(reservationIdIsSet_) {
        val[utility::conversions::to_string_t("reservation_id")] = ModelBase::toJson(reservationId_);
    }
    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("adminPass")] = ModelBase::toJson(adminPass_);
    }

    return val;
}

bool NovaCreateServersResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-DCF:diskConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-DCF:diskConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSDCFdiskConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reservation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reservation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminPass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminPass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
        }
    }
    return ok;
}


std::string NovaCreateServersResult::getId() const
{
    return id_;
}

void NovaCreateServersResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaCreateServersResult::idIsSet() const
{
    return idIsSet_;
}

void NovaCreateServersResult::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaCreateServersResult::getLinks()
{
    return links_;
}

void NovaCreateServersResult::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaCreateServersResult::linksIsSet() const
{
    return linksIsSet_;
}

void NovaCreateServersResult::unsetlinks()
{
    linksIsSet_ = false;
}

std::vector<NovaServerSecurityGroup>& NovaCreateServersResult::getSecurityGroups()
{
    return securityGroups_;
}

void NovaCreateServersResult::setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NovaCreateServersResult::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NovaCreateServersResult::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string NovaCreateServersResult::getOSDCFdiskConfig() const
{
    return oSDCFdiskConfig_;
}

void NovaCreateServersResult::setOSDCFdiskConfig(const std::string& value)
{
    oSDCFdiskConfig_ = value;
    oSDCFdiskConfigIsSet_ = true;
}

bool NovaCreateServersResult::oSDCFdiskConfigIsSet() const
{
    return oSDCFdiskConfigIsSet_;
}

void NovaCreateServersResult::unsetoSDCFdiskConfig()
{
    oSDCFdiskConfigIsSet_ = false;
}

std::string NovaCreateServersResult::getReservationId() const
{
    return reservationId_;
}

void NovaCreateServersResult::setReservationId(const std::string& value)
{
    reservationId_ = value;
    reservationIdIsSet_ = true;
}

bool NovaCreateServersResult::reservationIdIsSet() const
{
    return reservationIdIsSet_;
}

void NovaCreateServersResult::unsetreservationId()
{
    reservationIdIsSet_ = false;
}

std::string NovaCreateServersResult::getAdminPass() const
{
    return adminPass_;
}

void NovaCreateServersResult::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool NovaCreateServersResult::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void NovaCreateServersResult::unsetadminPass()
{
    adminPassIsSet_ = false;
}

}
}
}
}
}


