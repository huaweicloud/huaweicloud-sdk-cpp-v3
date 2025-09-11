

#include "huaweicloud/dbss/v1/model/ShowAuditUpgradeStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditUpgradeStatusResponse::ShowAuditUpgradeStatusResponse()
{
    auditUpgradeInfosIsSet_ = false;
}

ShowAuditUpgradeStatusResponse::~ShowAuditUpgradeStatusResponse() = default;

void ShowAuditUpgradeStatusResponse::validate()
{
}

web::json::value ShowAuditUpgradeStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditUpgradeInfosIsSet_) {
        val[utility::conversions::to_string_t("audit_upgrade_infos")] = ModelBase::toJson(auditUpgradeInfos_);
    }

    return val;
}
bool ShowAuditUpgradeStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_upgrade_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_upgrade_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditUpgradeStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditUpgradeInfos(refVal);
        }
    }
    return ok;
}


std::vector<AuditUpgradeStatus>& ShowAuditUpgradeStatusResponse::getAuditUpgradeInfos()
{
    return auditUpgradeInfos_;
}

void ShowAuditUpgradeStatusResponse::setAuditUpgradeInfos(const std::vector<AuditUpgradeStatus>& value)
{
    auditUpgradeInfos_ = value;
    auditUpgradeInfosIsSet_ = true;
}

bool ShowAuditUpgradeStatusResponse::auditUpgradeInfosIsSet() const
{
    return auditUpgradeInfosIsSet_;
}

void ShowAuditUpgradeStatusResponse::unsetauditUpgradeInfos()
{
    auditUpgradeInfosIsSet_ = false;
}

}
}
}
}
}


