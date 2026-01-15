

#include "huaweicloud/dbss/v1/model/UnsupportedAuditInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnsupportedAuditInfoResponse::UnsupportedAuditInfoResponse()
{
    auditInfosIsSet_ = false;
    supportVersion_ = "";
    supportVersionIsSet_ = false;
}

UnsupportedAuditInfoResponse::~UnsupportedAuditInfoResponse() = default;

void UnsupportedAuditInfoResponse::validate()
{
}

web::json::value UnsupportedAuditInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditInfosIsSet_) {
        val[utility::conversions::to_string_t("audit_infos")] = ModelBase::toJson(auditInfos_);
    }
    if(supportVersionIsSet_) {
        val[utility::conversions::to_string_t("support_version")] = ModelBase::toJson(supportVersion_);
    }

    return val;
}
bool UnsupportedAuditInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<UnsupportedAuditInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportVersion(refVal);
        }
    }
    return ok;
}


std::vector<UnsupportedAuditInfo>& UnsupportedAuditInfoResponse::getAuditInfos()
{
    return auditInfos_;
}

void UnsupportedAuditInfoResponse::setAuditInfos(const std::vector<UnsupportedAuditInfo>& value)
{
    auditInfos_ = value;
    auditInfosIsSet_ = true;
}

bool UnsupportedAuditInfoResponse::auditInfosIsSet() const
{
    return auditInfosIsSet_;
}

void UnsupportedAuditInfoResponse::unsetauditInfos()
{
    auditInfosIsSet_ = false;
}

std::string UnsupportedAuditInfoResponse::getSupportVersion() const
{
    return supportVersion_;
}

void UnsupportedAuditInfoResponse::setSupportVersion(const std::string& value)
{
    supportVersion_ = value;
    supportVersionIsSet_ = true;
}

bool UnsupportedAuditInfoResponse::supportVersionIsSet() const
{
    return supportVersionIsSet_;
}

void UnsupportedAuditInfoResponse::unsetsupportVersion()
{
    supportVersionIsSet_ = false;
}

}
}
}
}
}


