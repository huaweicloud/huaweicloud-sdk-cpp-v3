

#include "huaweicloud/dbss/v1/model/UnsupportedAuditInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnsupportedAuditInfo::UnsupportedAuditInfo()
{
    auditVersion_ = "";
    auditVersionIsSet_ = false;
    serverName_ = "";
    serverNameIsSet_ = false;
}

UnsupportedAuditInfo::~UnsupportedAuditInfo() = default;

void UnsupportedAuditInfo::validate()
{
}

web::json::value UnsupportedAuditInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditVersionIsSet_) {
        val[utility::conversions::to_string_t("audit_version")] = ModelBase::toJson(auditVersion_);
    }
    if(serverNameIsSet_) {
        val[utility::conversions::to_string_t("server_name")] = ModelBase::toJson(serverName_);
    }

    return val;
}
bool UnsupportedAuditInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerName(refVal);
        }
    }
    return ok;
}


std::string UnsupportedAuditInfo::getAuditVersion() const
{
    return auditVersion_;
}

void UnsupportedAuditInfo::setAuditVersion(const std::string& value)
{
    auditVersion_ = value;
    auditVersionIsSet_ = true;
}

bool UnsupportedAuditInfo::auditVersionIsSet() const
{
    return auditVersionIsSet_;
}

void UnsupportedAuditInfo::unsetauditVersion()
{
    auditVersionIsSet_ = false;
}

std::string UnsupportedAuditInfo::getServerName() const
{
    return serverName_;
}

void UnsupportedAuditInfo::setServerName(const std::string& value)
{
    serverName_ = value;
    serverNameIsSet_ = true;
}

bool UnsupportedAuditInfo::serverNameIsSet() const
{
    return serverNameIsSet_;
}

void UnsupportedAuditInfo::unsetserverName()
{
    serverNameIsSet_ = false;
}

}
}
}
}
}


