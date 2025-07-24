
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CaseAutomationDetailsVo.h>
#include <huaweicloud/cloudtest/v1/model/CustomReportListVo.h>
#include <huaweicloud/cloudtest/v1/model/DetailTestTypeCasePassRateVo.h>
#include <huaweicloud/cloudtest/v1/model/IssuePassDetailsVo.h>
#include <huaweicloud/cloudtest/v1/model/IdAndNameAndValueVo.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/NameAndValueVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestReportVo
    : public ModelBase
{
public:
    TestReportVo();
    virtual ~TestReportVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestReportVo members

    /// <summary>
    /// 测试报告Uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 测试报告名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 修改人ID
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 测试计划Uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 分支Uri
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 测试计划名称
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// 测试结论
    /// </summary>

    std::string getTestConclusion() const;
    bool testConclusionIsSet() const;
    void unsettestConclusion();
    void setTestConclusion(const std::string& value);

    /// <summary>
    /// 测试结论描述
    /// </summary>

    std::string getTestConclusionDetails() const;
    bool testConclusionDetailsIsSet() const;
    void unsettestConclusionDetails();
    void setTestConclusionDetails(const std::string& value);

    /// <summary>
    /// 缺陷解决率
    /// </summary>

    std::string getDefectResolutionRate() const;
    bool defectResolutionRateIsSet() const;
    void unsetdefectResolutionRate();
    void setDefectResolutionRate(const std::string& value);

    /// <summary>
    /// 缺陷解决分数
    /// </summary>

    std::string getDefectResolutionScore() const;
    bool defectResolutionScoreIsSet() const;
    void unsetdefectResolutionScore();
    void setDefectResolutionScore(const std::string& value);

    /// <summary>
    /// 用例执行率
    /// </summary>

    std::string getCaseExecutionRate() const;
    bool caseExecutionRateIsSet() const;
    void unsetcaseExecutionRate();
    void setCaseExecutionRate(const std::string& value);

    /// <summary>
    /// 用例执行分数
    /// </summary>

    std::string getCaseExecutionScore() const;
    bool caseExecutionScoreIsSet() const;
    void unsetcaseExecutionScore();
    void setCaseExecutionScore(const std::string& value);

    /// <summary>
    /// 用例通过率
    /// </summary>

    std::string getCasePassRate() const;
    bool casePassRateIsSet() const;
    void unsetcasePassRate();
    void setCasePassRate(const std::string& value);

    /// <summary>
    /// 用例通过分数
    /// </summary>

    std::string getCasePassScore() const;
    bool casePassScoreIsSet() const;
    void unsetcasePassScore();
    void setCasePassScore(const std::string& value);

    /// <summary>
    /// 需求通过率
    /// </summary>

    std::string getIssuePassRate() const;
    bool issuePassRateIsSet() const;
    void unsetissuePassRate();
    void setIssuePassRate(const std::string& value);

    /// <summary>
    /// 需求通过分数
    /// </summary>

    std::string getIssuePassScore() const;
    bool issuePassScoreIsSet() const;
    void unsetissuePassScore();
    void setIssuePassScore(const std::string& value);

    /// <summary>
    /// 需求覆盖率
    /// </summary>

    std::string getIssueCoverageRate() const;
    bool issueCoverageRateIsSet() const;
    void unsetissueCoverageRate();
    void setIssueCoverageRate(const std::string& value);

    /// <summary>
    /// 需求覆盖分数
    /// </summary>

    std::string getIssueCoverageScore() const;
    bool issueCoverageScoreIsSet() const;
    void unsetissueCoverageScore();
    void setIssueCoverageScore(const std::string& value);

    /// <summary>
    /// 项目总遗留DI
    /// </summary>

    std::string getProjectResidualDefectIndex() const;
    bool projectResidualDefectIndexIsSet() const;
    void unsetprojectResidualDefectIndex();
    void setProjectResidualDefectIndex(const std::string& value);

    /// <summary>
    /// 计划新增DI
    /// </summary>

    std::string getIteratorResidualDefectIndex() const;
    bool iteratorResidualDefectIndexIsSet() const;
    void unsetiteratorResidualDefectIndex();
    void setIteratorResidualDefectIndex(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CaseAutomationDetailsVo getCaseAutomationDetails() const;
    bool caseAutomationDetailsIsSet() const;
    void unsetcaseAutomationDetails();
    void setCaseAutomationDetails(const CaseAutomationDetailsVo& value);

    /// <summary>
    /// 用例有效性比例
    /// </summary>

    std::string getCaseValidityRatio() const;
    bool caseValidityRatioIsSet() const;
    void unsetcaseValidityRatio();
    void setCaseValidityRatio(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssuePassDetailsVo getIssueDetails() const;
    bool issueDetailsIsSet() const;
    void unsetissueDetails();
    void setIssueDetails(const IssuePassDetailsVo& value);

    /// <summary>
    /// 用例通过情况
    /// </summary>

    std::vector<NameAndValueVo>& getCaseDetails();
    bool caseDetailsIsSet() const;
    void unsetcaseDetails();
    void setCaseDetails(const std::vector<NameAndValueVo>& value);

    /// <summary>
    /// 缺陷严重程度
    /// </summary>

    std::vector<IdAndNameAndValueVo>& getDefectDetailsBySeverity();
    bool defectDetailsBySeverityIsSet() const;
    void unsetdefectDetailsBySeverity();
    void setDefectDetailsBySeverity(const std::vector<IdAndNameAndValueVo>& value);

    /// <summary>
    /// 缺陷按照模块分布情况
    /// </summary>

    std::vector<IdAndNameAndValueVo>& getDefectDetailsByModule();
    bool defectDetailsByModuleIsSet() const;
    void unsetdefectDetailsByModule();
    void setDefectDetailsByModule(const std::vector<IdAndNameAndValueVo>& value);

    /// <summary>
    /// 每个测试类型的用例通过率
    /// </summary>

    std::vector<DetailTestTypeCasePassRateVo>& getCasePassRateByTestType();
    bool casePassRateByTestTypeIsSet() const;
    void unsetcasePassRateByTestType();
    void setCasePassRateByTestType(const std::vector<DetailTestTypeCasePassRateVo>& value);

    /// <summary>
    /// 测试报告自定义报告详情
    /// </summary>

    std::vector<CustomReportListVo>& getTestReportCustomReportDetail();
    bool testReportCustomReportDetailIsSet() const;
    void unsettestReportCustomReportDetail();
    void setTestReportCustomReportDetail(const std::vector<CustomReportListVo>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    int64_t getCreateTimestamp() const;
    bool createTimestampIsSet() const;
    void unsetcreateTimestamp();
    void setCreateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 修改时间戳
    /// </summary>

    int64_t getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(int64_t value);

    /// <summary>
    /// 修改人名
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 风险分析
    /// </summary>

    std::string getRiskAnalysis() const;
    bool riskAnalysisIsSet() const;
    void unsetriskAnalysis();
    void setRiskAnalysis(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string testConclusion_;
    bool testConclusionIsSet_;
    std::string testConclusionDetails_;
    bool testConclusionDetailsIsSet_;
    std::string defectResolutionRate_;
    bool defectResolutionRateIsSet_;
    std::string defectResolutionScore_;
    bool defectResolutionScoreIsSet_;
    std::string caseExecutionRate_;
    bool caseExecutionRateIsSet_;
    std::string caseExecutionScore_;
    bool caseExecutionScoreIsSet_;
    std::string casePassRate_;
    bool casePassRateIsSet_;
    std::string casePassScore_;
    bool casePassScoreIsSet_;
    std::string issuePassRate_;
    bool issuePassRateIsSet_;
    std::string issuePassScore_;
    bool issuePassScoreIsSet_;
    std::string issueCoverageRate_;
    bool issueCoverageRateIsSet_;
    std::string issueCoverageScore_;
    bool issueCoverageScoreIsSet_;
    std::string projectResidualDefectIndex_;
    bool projectResidualDefectIndexIsSet_;
    std::string iteratorResidualDefectIndex_;
    bool iteratorResidualDefectIndexIsSet_;
    CaseAutomationDetailsVo caseAutomationDetails_;
    bool caseAutomationDetailsIsSet_;
    std::string caseValidityRatio_;
    bool caseValidityRatioIsSet_;
    IssuePassDetailsVo issueDetails_;
    bool issueDetailsIsSet_;
    std::vector<NameAndValueVo> caseDetails_;
    bool caseDetailsIsSet_;
    std::vector<IdAndNameAndValueVo> defectDetailsBySeverity_;
    bool defectDetailsBySeverityIsSet_;
    std::vector<IdAndNameAndValueVo> defectDetailsByModule_;
    bool defectDetailsByModuleIsSet_;
    std::vector<DetailTestTypeCasePassRateVo> casePassRateByTestType_;
    bool casePassRateByTestTypeIsSet_;
    std::vector<CustomReportListVo> testReportCustomReportDetail_;
    bool testReportCustomReportDetailIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    int64_t createTimestamp_;
    bool createTimestampIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string riskAnalysis_;
    bool riskAnalysisIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportVo_H_
