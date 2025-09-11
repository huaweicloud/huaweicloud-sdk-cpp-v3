

#include "huaweicloud/dbss/v1/model/UnSupportAuditInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnSupportAuditInfoResponse::UnSupportAuditInfoResponse()
{
    auditInfosIsSet_ = false;
    supportVersion_ = "";
    supportVersionIsSet_ = false;
}

UnSupportAuditInfoResponse::~UnSupportAuditInfoResponse() = default;

void UnSupportAuditInfoResponse::validate()
{
}

web::json::value UnSupportAuditInfoResponse::toJson() const
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
bool UnSupportAuditInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<UnSupportAuditInfo> refVal;
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


std::vector<UnSupportAuditInfo>& UnSupportAuditInfoResponse::getAuditInfos()
{
    return auditInfos_;
}

void UnSupportAuditInfoResponse::setAuditInfos(const std::vector<UnSupportAuditInfo>& value)
{
    auditInfos_ = value;
    auditInfosIsSet_ = true;
}

bool UnSupportAuditInfoResponse::auditInfosIsSet() const
{
    return auditInfosIsSet_;
}

void UnSupportAuditInfoResponse::unsetauditInfos()
{
    auditInfosIsSet_ = false;
}

std::string UnSupportAuditInfoResponse::getSupportVersion() const
{
    return supportVersion_;
}

void UnSupportAuditInfoResponse::setSupportVersion(const std::string& value)
{
    supportVersion_ = value;
    supportVersionIsSet_ = true;
}

bool UnSupportAuditInfoResponse::supportVersionIsSet() const
{
    return supportVersionIsSet_;
}

void UnSupportAuditInfoResponse::unsetsupportVersion()
{
    supportVersionIsSet_ = false;
}

}
}
}
}
}


