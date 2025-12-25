

#include "huaweicloud/codeartsartifact/v2/model/AuditResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




AuditResult::AuditResult()
{
    auditInfoListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

AuditResult::~AuditResult() = default;

void AuditResult::validate()
{
}

web::json::value AuditResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditInfoListIsSet_) {
        val[utility::conversions::to_string_t("auditInfoList")] = ModelBase::toJson(auditInfoList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AuditResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auditInfoList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auditInfoList"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<AuditDO>& AuditResult::getAuditInfoList()
{
    return auditInfoList_;
}

void AuditResult::setAuditInfoList(const std::vector<AuditDO>& value)
{
    auditInfoList_ = value;
    auditInfoListIsSet_ = true;
}

bool AuditResult::auditInfoListIsSet() const
{
    return auditInfoListIsSet_;
}

void AuditResult::unsetauditInfoList()
{
    auditInfoListIsSet_ = false;
}

int32_t AuditResult::getTotal() const
{
    return total_;
}

void AuditResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AuditResult::totalIsSet() const
{
    return totalIsSet_;
}

void AuditResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


