

#include "huaweicloud/cloudtest/v1/model/TestReportVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestReportVo::TestReportVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    testConclusion_ = "";
    testConclusionIsSet_ = false;
    testConclusionDetails_ = "";
    testConclusionDetailsIsSet_ = false;
    defectResolutionRate_ = "";
    defectResolutionRateIsSet_ = false;
    defectResolutionScore_ = "";
    defectResolutionScoreIsSet_ = false;
    caseExecutionRate_ = "";
    caseExecutionRateIsSet_ = false;
    caseExecutionScore_ = "";
    caseExecutionScoreIsSet_ = false;
    casePassRate_ = "";
    casePassRateIsSet_ = false;
    casePassScore_ = "";
    casePassScoreIsSet_ = false;
    issuePassRate_ = "";
    issuePassRateIsSet_ = false;
    issuePassScore_ = "";
    issuePassScoreIsSet_ = false;
    issueCoverageRate_ = "";
    issueCoverageRateIsSet_ = false;
    issueCoverageScore_ = "";
    issueCoverageScoreIsSet_ = false;
    projectResidualDefectIndex_ = "";
    projectResidualDefectIndexIsSet_ = false;
    iteratorResidualDefectIndex_ = "";
    iteratorResidualDefectIndexIsSet_ = false;
    caseAutomationDetailsIsSet_ = false;
    caseValidityRatio_ = "";
    caseValidityRatioIsSet_ = false;
    issueDetailsIsSet_ = false;
    caseDetailsIsSet_ = false;
    defectDetailsBySeverityIsSet_ = false;
    defectDetailsByModuleIsSet_ = false;
    casePassRateByTestTypeIsSet_ = false;
    testReportCustomReportDetailIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createTimestamp_ = 0L;
    createTimestampIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimestamp_ = 0L;
    updateTimestampIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    riskAnalysis_ = "";
    riskAnalysisIsSet_ = false;
}

TestReportVo::~TestReportVo() = default;

void TestReportVo::validate()
{
}

web::json::value TestReportVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(testConclusionIsSet_) {
        val[utility::conversions::to_string_t("test_conclusion")] = ModelBase::toJson(testConclusion_);
    }
    if(testConclusionDetailsIsSet_) {
        val[utility::conversions::to_string_t("test_conclusion_details")] = ModelBase::toJson(testConclusionDetails_);
    }
    if(defectResolutionRateIsSet_) {
        val[utility::conversions::to_string_t("defect_resolution_rate")] = ModelBase::toJson(defectResolutionRate_);
    }
    if(defectResolutionScoreIsSet_) {
        val[utility::conversions::to_string_t("defect_resolution_score")] = ModelBase::toJson(defectResolutionScore_);
    }
    if(caseExecutionRateIsSet_) {
        val[utility::conversions::to_string_t("case_execution_rate")] = ModelBase::toJson(caseExecutionRate_);
    }
    if(caseExecutionScoreIsSet_) {
        val[utility::conversions::to_string_t("case_execution_score")] = ModelBase::toJson(caseExecutionScore_);
    }
    if(casePassRateIsSet_) {
        val[utility::conversions::to_string_t("case_pass_rate")] = ModelBase::toJson(casePassRate_);
    }
    if(casePassScoreIsSet_) {
        val[utility::conversions::to_string_t("case_pass_score")] = ModelBase::toJson(casePassScore_);
    }
    if(issuePassRateIsSet_) {
        val[utility::conversions::to_string_t("issue_pass_rate")] = ModelBase::toJson(issuePassRate_);
    }
    if(issuePassScoreIsSet_) {
        val[utility::conversions::to_string_t("issue_pass_score")] = ModelBase::toJson(issuePassScore_);
    }
    if(issueCoverageRateIsSet_) {
        val[utility::conversions::to_string_t("issue_coverage_rate")] = ModelBase::toJson(issueCoverageRate_);
    }
    if(issueCoverageScoreIsSet_) {
        val[utility::conversions::to_string_t("issue_coverage_score")] = ModelBase::toJson(issueCoverageScore_);
    }
    if(projectResidualDefectIndexIsSet_) {
        val[utility::conversions::to_string_t("project_residual_defect_index")] = ModelBase::toJson(projectResidualDefectIndex_);
    }
    if(iteratorResidualDefectIndexIsSet_) {
        val[utility::conversions::to_string_t("iterator_residual_defect_index")] = ModelBase::toJson(iteratorResidualDefectIndex_);
    }
    if(caseAutomationDetailsIsSet_) {
        val[utility::conversions::to_string_t("case_automation_details")] = ModelBase::toJson(caseAutomationDetails_);
    }
    if(caseValidityRatioIsSet_) {
        val[utility::conversions::to_string_t("case_validity_ratio")] = ModelBase::toJson(caseValidityRatio_);
    }
    if(issueDetailsIsSet_) {
        val[utility::conversions::to_string_t("issue_details")] = ModelBase::toJson(issueDetails_);
    }
    if(caseDetailsIsSet_) {
        val[utility::conversions::to_string_t("case_details")] = ModelBase::toJson(caseDetails_);
    }
    if(defectDetailsBySeverityIsSet_) {
        val[utility::conversions::to_string_t("defect_details_by_severity")] = ModelBase::toJson(defectDetailsBySeverity_);
    }
    if(defectDetailsByModuleIsSet_) {
        val[utility::conversions::to_string_t("defect_details_by_module")] = ModelBase::toJson(defectDetailsByModule_);
    }
    if(casePassRateByTestTypeIsSet_) {
        val[utility::conversions::to_string_t("case_pass_rate_by_test_type")] = ModelBase::toJson(casePassRateByTestType_);
    }
    if(testReportCustomReportDetailIsSet_) {
        val[utility::conversions::to_string_t("test_report_custom_report_detail")] = ModelBase::toJson(testReportCustomReportDetail_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_timestamp")] = ModelBase::toJson(createTimestamp_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_timestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(riskAnalysisIsSet_) {
        val[utility::conversions::to_string_t("risk_analysis")] = ModelBase::toJson(riskAnalysis_);
    }

    return val;
}
bool TestReportVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_conclusion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_conclusion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestConclusion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_conclusion_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_conclusion_details"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestConclusionDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_resolution_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_resolution_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectResolutionRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_resolution_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_resolution_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectResolutionScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_execution_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_execution_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseExecutionRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_execution_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_execution_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseExecutionScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_pass_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePassRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_pass_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_pass_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePassScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_coverage_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_coverage_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCoverageRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_coverage_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_coverage_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCoverageScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_residual_defect_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_residual_defect_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectResidualDefectIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_residual_defect_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_residual_defect_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorResidualDefectIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_automation_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_automation_details"));
        if(!fieldValue.is_null())
        {
            CaseAutomationDetailsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseAutomationDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_validity_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_validity_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseValidityRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_details"));
        if(!fieldValue.is_null())
        {
            IssuePassDetailsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_details"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_details_by_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_details_by_severity"));
        if(!fieldValue.is_null())
        {
            std::vector<IdAndNameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectDetailsBySeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_details_by_module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_details_by_module"));
        if(!fieldValue.is_null())
        {
            std::vector<IdAndNameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectDetailsByModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_rate_by_test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_rate_by_test_type"));
        if(!fieldValue.is_null())
        {
            std::vector<DetailTestTypeCasePassRateVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassRateByTestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_report_custom_report_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_report_custom_report_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomReportListVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestReportCustomReportDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_analysis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskAnalysis(refVal);
        }
    }
    return ok;
}


std::string TestReportVo::getUri() const
{
    return uri_;
}

void TestReportVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestReportVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestReportVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestReportVo::getName() const
{
    return name_;
}

void TestReportVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestReportVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestReportVo::unsetname()
{
    nameIsSet_ = false;
}

std::string TestReportVo::getCreator() const
{
    return creator_;
}

void TestReportVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TestReportVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void TestReportVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string TestReportVo::getUpdator() const
{
    return updator_;
}

void TestReportVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool TestReportVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void TestReportVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string TestReportVo::getVersionUri() const
{
    return versionUri_;
}

void TestReportVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestReportVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestReportVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestReportVo::getBranchUri() const
{
    return branchUri_;
}

void TestReportVo::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool TestReportVo::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void TestReportVo::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string TestReportVo::getVersionName() const
{
    return versionName_;
}

void TestReportVo::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool TestReportVo::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void TestReportVo::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string TestReportVo::getBranchName() const
{
    return branchName_;
}

void TestReportVo::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool TestReportVo::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void TestReportVo::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string TestReportVo::getTestConclusion() const
{
    return testConclusion_;
}

void TestReportVo::setTestConclusion(const std::string& value)
{
    testConclusion_ = value;
    testConclusionIsSet_ = true;
}

bool TestReportVo::testConclusionIsSet() const
{
    return testConclusionIsSet_;
}

void TestReportVo::unsettestConclusion()
{
    testConclusionIsSet_ = false;
}

std::string TestReportVo::getTestConclusionDetails() const
{
    return testConclusionDetails_;
}

void TestReportVo::setTestConclusionDetails(const std::string& value)
{
    testConclusionDetails_ = value;
    testConclusionDetailsIsSet_ = true;
}

bool TestReportVo::testConclusionDetailsIsSet() const
{
    return testConclusionDetailsIsSet_;
}

void TestReportVo::unsettestConclusionDetails()
{
    testConclusionDetailsIsSet_ = false;
}

std::string TestReportVo::getDefectResolutionRate() const
{
    return defectResolutionRate_;
}

void TestReportVo::setDefectResolutionRate(const std::string& value)
{
    defectResolutionRate_ = value;
    defectResolutionRateIsSet_ = true;
}

bool TestReportVo::defectResolutionRateIsSet() const
{
    return defectResolutionRateIsSet_;
}

void TestReportVo::unsetdefectResolutionRate()
{
    defectResolutionRateIsSet_ = false;
}

std::string TestReportVo::getDefectResolutionScore() const
{
    return defectResolutionScore_;
}

void TestReportVo::setDefectResolutionScore(const std::string& value)
{
    defectResolutionScore_ = value;
    defectResolutionScoreIsSet_ = true;
}

bool TestReportVo::defectResolutionScoreIsSet() const
{
    return defectResolutionScoreIsSet_;
}

void TestReportVo::unsetdefectResolutionScore()
{
    defectResolutionScoreIsSet_ = false;
}

std::string TestReportVo::getCaseExecutionRate() const
{
    return caseExecutionRate_;
}

void TestReportVo::setCaseExecutionRate(const std::string& value)
{
    caseExecutionRate_ = value;
    caseExecutionRateIsSet_ = true;
}

bool TestReportVo::caseExecutionRateIsSet() const
{
    return caseExecutionRateIsSet_;
}

void TestReportVo::unsetcaseExecutionRate()
{
    caseExecutionRateIsSet_ = false;
}

std::string TestReportVo::getCaseExecutionScore() const
{
    return caseExecutionScore_;
}

void TestReportVo::setCaseExecutionScore(const std::string& value)
{
    caseExecutionScore_ = value;
    caseExecutionScoreIsSet_ = true;
}

bool TestReportVo::caseExecutionScoreIsSet() const
{
    return caseExecutionScoreIsSet_;
}

void TestReportVo::unsetcaseExecutionScore()
{
    caseExecutionScoreIsSet_ = false;
}

std::string TestReportVo::getCasePassRate() const
{
    return casePassRate_;
}

void TestReportVo::setCasePassRate(const std::string& value)
{
    casePassRate_ = value;
    casePassRateIsSet_ = true;
}

bool TestReportVo::casePassRateIsSet() const
{
    return casePassRateIsSet_;
}

void TestReportVo::unsetcasePassRate()
{
    casePassRateIsSet_ = false;
}

std::string TestReportVo::getCasePassScore() const
{
    return casePassScore_;
}

void TestReportVo::setCasePassScore(const std::string& value)
{
    casePassScore_ = value;
    casePassScoreIsSet_ = true;
}

bool TestReportVo::casePassScoreIsSet() const
{
    return casePassScoreIsSet_;
}

void TestReportVo::unsetcasePassScore()
{
    casePassScoreIsSet_ = false;
}

std::string TestReportVo::getIssuePassRate() const
{
    return issuePassRate_;
}

void TestReportVo::setIssuePassRate(const std::string& value)
{
    issuePassRate_ = value;
    issuePassRateIsSet_ = true;
}

bool TestReportVo::issuePassRateIsSet() const
{
    return issuePassRateIsSet_;
}

void TestReportVo::unsetissuePassRate()
{
    issuePassRateIsSet_ = false;
}

std::string TestReportVo::getIssuePassScore() const
{
    return issuePassScore_;
}

void TestReportVo::setIssuePassScore(const std::string& value)
{
    issuePassScore_ = value;
    issuePassScoreIsSet_ = true;
}

bool TestReportVo::issuePassScoreIsSet() const
{
    return issuePassScoreIsSet_;
}

void TestReportVo::unsetissuePassScore()
{
    issuePassScoreIsSet_ = false;
}

std::string TestReportVo::getIssueCoverageRate() const
{
    return issueCoverageRate_;
}

void TestReportVo::setIssueCoverageRate(const std::string& value)
{
    issueCoverageRate_ = value;
    issueCoverageRateIsSet_ = true;
}

bool TestReportVo::issueCoverageRateIsSet() const
{
    return issueCoverageRateIsSet_;
}

void TestReportVo::unsetissueCoverageRate()
{
    issueCoverageRateIsSet_ = false;
}

std::string TestReportVo::getIssueCoverageScore() const
{
    return issueCoverageScore_;
}

void TestReportVo::setIssueCoverageScore(const std::string& value)
{
    issueCoverageScore_ = value;
    issueCoverageScoreIsSet_ = true;
}

bool TestReportVo::issueCoverageScoreIsSet() const
{
    return issueCoverageScoreIsSet_;
}

void TestReportVo::unsetissueCoverageScore()
{
    issueCoverageScoreIsSet_ = false;
}

std::string TestReportVo::getProjectResidualDefectIndex() const
{
    return projectResidualDefectIndex_;
}

void TestReportVo::setProjectResidualDefectIndex(const std::string& value)
{
    projectResidualDefectIndex_ = value;
    projectResidualDefectIndexIsSet_ = true;
}

bool TestReportVo::projectResidualDefectIndexIsSet() const
{
    return projectResidualDefectIndexIsSet_;
}

void TestReportVo::unsetprojectResidualDefectIndex()
{
    projectResidualDefectIndexIsSet_ = false;
}

std::string TestReportVo::getIteratorResidualDefectIndex() const
{
    return iteratorResidualDefectIndex_;
}

void TestReportVo::setIteratorResidualDefectIndex(const std::string& value)
{
    iteratorResidualDefectIndex_ = value;
    iteratorResidualDefectIndexIsSet_ = true;
}

bool TestReportVo::iteratorResidualDefectIndexIsSet() const
{
    return iteratorResidualDefectIndexIsSet_;
}

void TestReportVo::unsetiteratorResidualDefectIndex()
{
    iteratorResidualDefectIndexIsSet_ = false;
}

CaseAutomationDetailsVo TestReportVo::getCaseAutomationDetails() const
{
    return caseAutomationDetails_;
}

void TestReportVo::setCaseAutomationDetails(const CaseAutomationDetailsVo& value)
{
    caseAutomationDetails_ = value;
    caseAutomationDetailsIsSet_ = true;
}

bool TestReportVo::caseAutomationDetailsIsSet() const
{
    return caseAutomationDetailsIsSet_;
}

void TestReportVo::unsetcaseAutomationDetails()
{
    caseAutomationDetailsIsSet_ = false;
}

std::string TestReportVo::getCaseValidityRatio() const
{
    return caseValidityRatio_;
}

void TestReportVo::setCaseValidityRatio(const std::string& value)
{
    caseValidityRatio_ = value;
    caseValidityRatioIsSet_ = true;
}

bool TestReportVo::caseValidityRatioIsSet() const
{
    return caseValidityRatioIsSet_;
}

void TestReportVo::unsetcaseValidityRatio()
{
    caseValidityRatioIsSet_ = false;
}

IssuePassDetailsVo TestReportVo::getIssueDetails() const
{
    return issueDetails_;
}

void TestReportVo::setIssueDetails(const IssuePassDetailsVo& value)
{
    issueDetails_ = value;
    issueDetailsIsSet_ = true;
}

bool TestReportVo::issueDetailsIsSet() const
{
    return issueDetailsIsSet_;
}

void TestReportVo::unsetissueDetails()
{
    issueDetailsIsSet_ = false;
}

std::vector<NameAndValueVo>& TestReportVo::getCaseDetails()
{
    return caseDetails_;
}

void TestReportVo::setCaseDetails(const std::vector<NameAndValueVo>& value)
{
    caseDetails_ = value;
    caseDetailsIsSet_ = true;
}

bool TestReportVo::caseDetailsIsSet() const
{
    return caseDetailsIsSet_;
}

void TestReportVo::unsetcaseDetails()
{
    caseDetailsIsSet_ = false;
}

std::vector<IdAndNameAndValueVo>& TestReportVo::getDefectDetailsBySeverity()
{
    return defectDetailsBySeverity_;
}

void TestReportVo::setDefectDetailsBySeverity(const std::vector<IdAndNameAndValueVo>& value)
{
    defectDetailsBySeverity_ = value;
    defectDetailsBySeverityIsSet_ = true;
}

bool TestReportVo::defectDetailsBySeverityIsSet() const
{
    return defectDetailsBySeverityIsSet_;
}

void TestReportVo::unsetdefectDetailsBySeverity()
{
    defectDetailsBySeverityIsSet_ = false;
}

std::vector<IdAndNameAndValueVo>& TestReportVo::getDefectDetailsByModule()
{
    return defectDetailsByModule_;
}

void TestReportVo::setDefectDetailsByModule(const std::vector<IdAndNameAndValueVo>& value)
{
    defectDetailsByModule_ = value;
    defectDetailsByModuleIsSet_ = true;
}

bool TestReportVo::defectDetailsByModuleIsSet() const
{
    return defectDetailsByModuleIsSet_;
}

void TestReportVo::unsetdefectDetailsByModule()
{
    defectDetailsByModuleIsSet_ = false;
}

std::vector<DetailTestTypeCasePassRateVo>& TestReportVo::getCasePassRateByTestType()
{
    return casePassRateByTestType_;
}

void TestReportVo::setCasePassRateByTestType(const std::vector<DetailTestTypeCasePassRateVo>& value)
{
    casePassRateByTestType_ = value;
    casePassRateByTestTypeIsSet_ = true;
}

bool TestReportVo::casePassRateByTestTypeIsSet() const
{
    return casePassRateByTestTypeIsSet_;
}

void TestReportVo::unsetcasePassRateByTestType()
{
    casePassRateByTestTypeIsSet_ = false;
}

std::vector<CustomReportListVo>& TestReportVo::getTestReportCustomReportDetail()
{
    return testReportCustomReportDetail_;
}

void TestReportVo::setTestReportCustomReportDetail(const std::vector<CustomReportListVo>& value)
{
    testReportCustomReportDetail_ = value;
    testReportCustomReportDetailIsSet_ = true;
}

bool TestReportVo::testReportCustomReportDetailIsSet() const
{
    return testReportCustomReportDetailIsSet_;
}

void TestReportVo::unsettestReportCustomReportDetail()
{
    testReportCustomReportDetailIsSet_ = false;
}

utility::datetime TestReportVo::getCreateTime() const
{
    return createTime_;
}

void TestReportVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TestReportVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TestReportVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TestReportVo::getCreateTimestamp() const
{
    return createTimestamp_;
}

void TestReportVo::setCreateTimestamp(int64_t value)
{
    createTimestamp_ = value;
    createTimestampIsSet_ = true;
}

bool TestReportVo::createTimestampIsSet() const
{
    return createTimestampIsSet_;
}

void TestReportVo::unsetcreateTimestamp()
{
    createTimestampIsSet_ = false;
}

std::string TestReportVo::getCreatorName() const
{
    return creatorName_;
}

void TestReportVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TestReportVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TestReportVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

utility::datetime TestReportVo::getUpdateTime() const
{
    return updateTime_;
}

void TestReportVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TestReportVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TestReportVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t TestReportVo::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void TestReportVo::setUpdateTimestamp(int64_t value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool TestReportVo::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void TestReportVo::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string TestReportVo::getUpdatorName() const
{
    return updatorName_;
}

void TestReportVo::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool TestReportVo::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void TestReportVo::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

std::string TestReportVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestReportVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestReportVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestReportVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string TestReportVo::getRiskAnalysis() const
{
    return riskAnalysis_;
}

void TestReportVo::setRiskAnalysis(const std::string& value)
{
    riskAnalysis_ = value;
    riskAnalysisIsSet_ = true;
}

bool TestReportVo::riskAnalysisIsSet() const
{
    return riskAnalysisIsSet_;
}

void TestReportVo::unsetriskAnalysis()
{
    riskAnalysisIsSet_ = false;
}

}
}
}
}
}


