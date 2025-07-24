
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProjectDataDashboardResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProjectDataDashboardResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/DefectVo.h>
#include <huaweicloud/cloudtest/v1/model/CasePassRateVo.h>
#include <huaweicloud/cloudtest/v1/model/CaseCompletionRateVo.h>
#include <huaweicloud/cloudtest/v1/model/IssueCoverRateVo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowProjectDataDashboardResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectDataDashboardResponse();
    virtual ~ShowProjectDataDashboardResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectDataDashboardResponse members

    /// <summary>
    /// 
    /// </summary>

    DefectVo getDefect() const;
    bool defectIsSet() const;
    void unsetdefect();
    void setDefect(const DefectVo& value);

    /// <summary>
    /// 
    /// </summary>

    CasePassRateVo getCasePassRate() const;
    bool casePassRateIsSet() const;
    void unsetcasePassRate();
    void setCasePassRate(const CasePassRateVo& value);

    /// <summary>
    /// 
    /// </summary>

    CaseCompletionRateVo getCaseCompletionRate() const;
    bool caseCompletionRateIsSet() const;
    void unsetcaseCompletionRate();
    void setCaseCompletionRate(const CaseCompletionRateVo& value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueCoverRateVo getIssueCoverRate() const;
    bool issueCoverRateIsSet() const;
    void unsetissueCoverRate();
    void setIssueCoverRate(const IssueCoverRateVo& value);


protected:
    DefectVo defect_;
    bool defectIsSet_;
    CasePassRateVo casePassRate_;
    bool casePassRateIsSet_;
    CaseCompletionRateVo caseCompletionRate_;
    bool caseCompletionRateIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    IssueCoverRateVo issueCoverRate_;
    bool issueCoverRateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowProjectDataDashboardResponse_H_
