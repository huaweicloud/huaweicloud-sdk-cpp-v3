
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeOverviewResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeOverviewResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/BestPracticeOverviewItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowBestPracticeOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBestPracticeOverviewResponse();
    virtual ~ShowBestPracticeOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBestPracticeOverviewResponse members

    /// <summary>
    /// 总分数
    /// </summary>

    double getTotalScore() const;
    bool totalScoreIsSet() const;
    void unsettotalScore();
    void setTotalScore(double value);

    /// <summary>
    /// 检测完成时间
    /// </summary>

    std::string getDetectTime() const;
    bool detectTimeIsSet() const;
    void unsetdetectTime();
    void setDetectTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getOrganizationAccount() const;
    bool organizationAccountIsSet() const;
    void unsetorganizationAccount();
    void setOrganizationAccount(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getIdentityPermission() const;
    bool identityPermissionIsSet() const;
    void unsetidentityPermission();
    void setIdentityPermission(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getNetworkPlanning() const;
    bool networkPlanningIsSet() const;
    void unsetnetworkPlanning();
    void setNetworkPlanning(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getComplianceAudit() const;
    bool complianceAuditIsSet() const;
    void unsetcomplianceAudit();
    void setComplianceAudit(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getFinancialGovernance() const;
    bool financialGovernanceIsSet() const;
    void unsetfinancialGovernance();
    void setFinancialGovernance(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getDataBoundary() const;
    bool dataBoundaryIsSet() const;
    void unsetdataBoundary();
    void setDataBoundary(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getOmMonitor() const;
    bool omMonitorIsSet() const;
    void unsetomMonitor();
    void setOmMonitor(const BestPracticeOverviewItem& value);

    /// <summary>
    /// 
    /// </summary>

    BestPracticeOverviewItem getSecurityManagement() const;
    bool securityManagementIsSet() const;
    void unsetsecurityManagement();
    void setSecurityManagement(const BestPracticeOverviewItem& value);


protected:
    double totalScore_;
    bool totalScoreIsSet_;
    std::string detectTime_;
    bool detectTimeIsSet_;
    BestPracticeOverviewItem organizationAccount_;
    bool organizationAccountIsSet_;
    BestPracticeOverviewItem identityPermission_;
    bool identityPermissionIsSet_;
    BestPracticeOverviewItem networkPlanning_;
    bool networkPlanningIsSet_;
    BestPracticeOverviewItem complianceAudit_;
    bool complianceAuditIsSet_;
    BestPracticeOverviewItem financialGovernance_;
    bool financialGovernanceIsSet_;
    BestPracticeOverviewItem dataBoundary_;
    bool dataBoundaryIsSet_;
    BestPracticeOverviewItem omMonitor_;
    bool omMonitorIsSet_;
    BestPracticeOverviewItem securityManagement_;
    bool securityManagementIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeOverviewResponse_H_
