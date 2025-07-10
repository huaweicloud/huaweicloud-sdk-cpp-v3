

#include "huaweicloud/rgc/v1/model/ShowBestPracticeOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowBestPracticeOverviewResponse::ShowBestPracticeOverviewResponse()
{
    totalScore_ = 0.0;
    totalScoreIsSet_ = false;
    detectTime_ = "";
    detectTimeIsSet_ = false;
    organizationAccountIsSet_ = false;
    identityPermissionIsSet_ = false;
    networkPlanningIsSet_ = false;
    complianceAuditIsSet_ = false;
    financialGovernanceIsSet_ = false;
    dataBoundaryIsSet_ = false;
    omMonitorIsSet_ = false;
    securityManagementIsSet_ = false;
}

ShowBestPracticeOverviewResponse::~ShowBestPracticeOverviewResponse() = default;

void ShowBestPracticeOverviewResponse::validate()
{
}

web::json::value ShowBestPracticeOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalScoreIsSet_) {
        val[utility::conversions::to_string_t("total_score")] = ModelBase::toJson(totalScore_);
    }
    if(detectTimeIsSet_) {
        val[utility::conversions::to_string_t("detect_time")] = ModelBase::toJson(detectTime_);
    }
    if(organizationAccountIsSet_) {
        val[utility::conversions::to_string_t("organization_account")] = ModelBase::toJson(organizationAccount_);
    }
    if(identityPermissionIsSet_) {
        val[utility::conversions::to_string_t("identity_permission")] = ModelBase::toJson(identityPermission_);
    }
    if(networkPlanningIsSet_) {
        val[utility::conversions::to_string_t("network_planning")] = ModelBase::toJson(networkPlanning_);
    }
    if(complianceAuditIsSet_) {
        val[utility::conversions::to_string_t("compliance_audit")] = ModelBase::toJson(complianceAudit_);
    }
    if(financialGovernanceIsSet_) {
        val[utility::conversions::to_string_t("financial_governance")] = ModelBase::toJson(financialGovernance_);
    }
    if(dataBoundaryIsSet_) {
        val[utility::conversions::to_string_t("data_boundary")] = ModelBase::toJson(dataBoundary_);
    }
    if(omMonitorIsSet_) {
        val[utility::conversions::to_string_t("om_monitor")] = ModelBase::toJson(omMonitor_);
    }
    if(securityManagementIsSet_) {
        val[utility::conversions::to_string_t("security_management")] = ModelBase::toJson(securityManagement_);
    }

    return val;
}
bool ShowBestPracticeOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_account"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_permission"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_planning"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_planning"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkPlanning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compliance_audit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compliance_audit"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComplianceAudit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("financial_governance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("financial_governance"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinancialGovernance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_boundary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_boundary"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataBoundary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("om_monitor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("om_monitor"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOmMonitor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_management"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_management"));
        if(!fieldValue.is_null())
        {
            BestPracticeOverviewItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityManagement(refVal);
        }
    }
    return ok;
}


double ShowBestPracticeOverviewResponse::getTotalScore() const
{
    return totalScore_;
}

void ShowBestPracticeOverviewResponse::setTotalScore(double value)
{
    totalScore_ = value;
    totalScoreIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::totalScoreIsSet() const
{
    return totalScoreIsSet_;
}

void ShowBestPracticeOverviewResponse::unsettotalScore()
{
    totalScoreIsSet_ = false;
}

std::string ShowBestPracticeOverviewResponse::getDetectTime() const
{
    return detectTime_;
}

void ShowBestPracticeOverviewResponse::setDetectTime(const std::string& value)
{
    detectTime_ = value;
    detectTimeIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::detectTimeIsSet() const
{
    return detectTimeIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetdetectTime()
{
    detectTimeIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getOrganizationAccount() const
{
    return organizationAccount_;
}

void ShowBestPracticeOverviewResponse::setOrganizationAccount(const BestPracticeOverviewItem& value)
{
    organizationAccount_ = value;
    organizationAccountIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::organizationAccountIsSet() const
{
    return organizationAccountIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetorganizationAccount()
{
    organizationAccountIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getIdentityPermission() const
{
    return identityPermission_;
}

void ShowBestPracticeOverviewResponse::setIdentityPermission(const BestPracticeOverviewItem& value)
{
    identityPermission_ = value;
    identityPermissionIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::identityPermissionIsSet() const
{
    return identityPermissionIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetidentityPermission()
{
    identityPermissionIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getNetworkPlanning() const
{
    return networkPlanning_;
}

void ShowBestPracticeOverviewResponse::setNetworkPlanning(const BestPracticeOverviewItem& value)
{
    networkPlanning_ = value;
    networkPlanningIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::networkPlanningIsSet() const
{
    return networkPlanningIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetnetworkPlanning()
{
    networkPlanningIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getComplianceAudit() const
{
    return complianceAudit_;
}

void ShowBestPracticeOverviewResponse::setComplianceAudit(const BestPracticeOverviewItem& value)
{
    complianceAudit_ = value;
    complianceAuditIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::complianceAuditIsSet() const
{
    return complianceAuditIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetcomplianceAudit()
{
    complianceAuditIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getFinancialGovernance() const
{
    return financialGovernance_;
}

void ShowBestPracticeOverviewResponse::setFinancialGovernance(const BestPracticeOverviewItem& value)
{
    financialGovernance_ = value;
    financialGovernanceIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::financialGovernanceIsSet() const
{
    return financialGovernanceIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetfinancialGovernance()
{
    financialGovernanceIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getDataBoundary() const
{
    return dataBoundary_;
}

void ShowBestPracticeOverviewResponse::setDataBoundary(const BestPracticeOverviewItem& value)
{
    dataBoundary_ = value;
    dataBoundaryIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::dataBoundaryIsSet() const
{
    return dataBoundaryIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetdataBoundary()
{
    dataBoundaryIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getOmMonitor() const
{
    return omMonitor_;
}

void ShowBestPracticeOverviewResponse::setOmMonitor(const BestPracticeOverviewItem& value)
{
    omMonitor_ = value;
    omMonitorIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::omMonitorIsSet() const
{
    return omMonitorIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetomMonitor()
{
    omMonitorIsSet_ = false;
}

BestPracticeOverviewItem ShowBestPracticeOverviewResponse::getSecurityManagement() const
{
    return securityManagement_;
}

void ShowBestPracticeOverviewResponse::setSecurityManagement(const BestPracticeOverviewItem& value)
{
    securityManagement_ = value;
    securityManagementIsSet_ = true;
}

bool ShowBestPracticeOverviewResponse::securityManagementIsSet() const
{
    return securityManagementIsSet_;
}

void ShowBestPracticeOverviewResponse::unsetsecurityManagement()
{
    securityManagementIsSet_ = false;
}

}
}
}
}
}


