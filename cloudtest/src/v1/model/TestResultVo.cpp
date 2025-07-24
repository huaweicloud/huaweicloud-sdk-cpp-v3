

#include "huaweicloud/cloudtest/v1/model/TestResultVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestResultVo::TestResultVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    round_ = 0;
    roundIsSet_ = false;
    preparation_ = "";
    preparationIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    stepsIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    beginTime_ = utility::datetime();
    beginTimeIsSet_ = false;
    beginTimeTimestamp_ = 0L;
    beginTimeTimestampIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    endTimeTimestamp_ = 0L;
    endTimeTimestampIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    lastModifiedTimestamp_ = 0L;
    lastModifiedTimestampIsSet_ = false;
    lastChangeTime_ = utility::datetime();
    lastChangeTimeIsSet_ = false;
    lastChangeTimeTimestamp_ = 0L;
    lastChangeTimeTimestampIsSet_ = false;
    dfxTestResult_ = "";
    dfxTestResultIsSet_ = false;
    failureCause_ = "";
    failureCauseIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    testCaseUri_ = "";
    testCaseUriIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    resultName_ = "";
    resultNameIsSet_ = false;
    testResultAe_ = "";
    testResultAeIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    executeId_ = "";
    executeIdIsSet_ = false;
    timeCost_ = 0;
    timeCostIsSet_ = false;
    stepTxt_ = "";
    stepTxtIsSet_ = false;
    stepExpect_ = "";
    stepExpectIsSet_ = false;
    stepActual_ = "";
    stepActualIsSet_ = false;
    stepResult_ = "";
    stepResultIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    creationVersionUri_ = "";
    creationVersionUriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    reportUrl_ = "";
    reportUrlIsSet_ = false;
    testCaseNumber_ = "";
    testCaseNumberIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

TestResultVo::~TestResultVo() = default;

void TestResultVo::validate()
{
}

web::json::value TestResultVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(roundIsSet_) {
        val[utility::conversions::to_string_t("round")] = ModelBase::toJson(round_);
    }
    if(preparationIsSet_) {
        val[utility::conversions::to_string_t("preparation")] = ModelBase::toJson(preparation_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(beginTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("begin_time_timestamp")] = ModelBase::toJson(beginTimeTimestamp_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(endTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("end_time_timestamp")] = ModelBase::toJson(endTimeTimestamp_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(lastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_modified_timestamp")] = ModelBase::toJson(lastModifiedTimestamp_);
    }
    if(lastChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("last_change_time")] = ModelBase::toJson(lastChangeTime_);
    }
    if(lastChangeTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_change_time_timestamp")] = ModelBase::toJson(lastChangeTimeTimestamp_);
    }
    if(dfxTestResultIsSet_) {
        val[utility::conversions::to_string_t("dfx_test_result")] = ModelBase::toJson(dfxTestResult_);
    }
    if(failureCauseIsSet_) {
        val[utility::conversions::to_string_t("failure_cause")] = ModelBase::toJson(failureCause_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(testCaseUriIsSet_) {
        val[utility::conversions::to_string_t("test_case_uri")] = ModelBase::toJson(testCaseUri_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("test_case_name")] = ModelBase::toJson(testCaseName_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(resultNameIsSet_) {
        val[utility::conversions::to_string_t("result_name")] = ModelBase::toJson(resultName_);
    }
    if(testResultAeIsSet_) {
        val[utility::conversions::to_string_t("test_result_ae")] = ModelBase::toJson(testResultAe_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(executeIdIsSet_) {
        val[utility::conversions::to_string_t("execute_id")] = ModelBase::toJson(executeId_);
    }
    if(timeCostIsSet_) {
        val[utility::conversions::to_string_t("time_cost")] = ModelBase::toJson(timeCost_);
    }
    if(stepTxtIsSet_) {
        val[utility::conversions::to_string_t("step_txt")] = ModelBase::toJson(stepTxt_);
    }
    if(stepExpectIsSet_) {
        val[utility::conversions::to_string_t("step_expect")] = ModelBase::toJson(stepExpect_);
    }
    if(stepActualIsSet_) {
        val[utility::conversions::to_string_t("step_actual")] = ModelBase::toJson(stepActual_);
    }
    if(stepResultIsSet_) {
        val[utility::conversions::to_string_t("step_result")] = ModelBase::toJson(stepResult_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(creationVersionUriIsSet_) {
        val[utility::conversions::to_string_t("creation_version_uri")] = ModelBase::toJson(creationVersionUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(reportUrlIsSet_) {
        val[utility::conversions::to_string_t("report_url")] = ModelBase::toJson(reportUrl_);
    }
    if(testCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("test_case_number")] = ModelBase::toJson(testCaseNumber_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }

    return val;
}
bool TestResultVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("round"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("round"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRound(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preparation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preparation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreparation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<ResultStepVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_change_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_change_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_change_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastChangeTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dfx_test_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dfx_test_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDfxTestResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_cause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_cause"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCause(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_result_ae"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_result_ae"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestResultAe(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_cost"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_txt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_txt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepTxt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_expect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_expect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepExpect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_actual"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_actual"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepActual(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationVersionUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    return ok;
}


std::string TestResultVo::getUri() const
{
    return uri_;
}

void TestResultVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestResultVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestResultVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestResultVo::getName() const
{
    return name_;
}

void TestResultVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestResultVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestResultVo::unsetname()
{
    nameIsSet_ = false;
}

std::string TestResultVo::getAuthor() const
{
    return author_;
}

void TestResultVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool TestResultVo::authorIsSet() const
{
    return authorIsSet_;
}

void TestResultVo::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t TestResultVo::getRank() const
{
    return rank_;
}

void TestResultVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool TestResultVo::rankIsSet() const
{
    return rankIsSet_;
}

void TestResultVo::unsetrank()
{
    rankIsSet_ = false;
}

int32_t TestResultVo::getResult() const
{
    return result_;
}

void TestResultVo::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool TestResultVo::resultIsSet() const
{
    return resultIsSet_;
}

void TestResultVo::unsetresult()
{
    resultIsSet_ = false;
}

int32_t TestResultVo::getRound() const
{
    return round_;
}

void TestResultVo::setRound(int32_t value)
{
    round_ = value;
    roundIsSet_ = true;
}

bool TestResultVo::roundIsSet() const
{
    return roundIsSet_;
}

void TestResultVo::unsetround()
{
    roundIsSet_ = false;
}

std::string TestResultVo::getPreparation() const
{
    return preparation_;
}

void TestResultVo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool TestResultVo::preparationIsSet() const
{
    return preparationIsSet_;
}

void TestResultVo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::string TestResultVo::getDescription() const
{
    return description_;
}

void TestResultVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TestResultVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TestResultVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TestResultVo::getRegion() const
{
    return region_;
}

void TestResultVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TestResultVo::regionIsSet() const
{
    return regionIsSet_;
}

void TestResultVo::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<ResultStepVo>& TestResultVo::getSteps()
{
    return steps_;
}

void TestResultVo::setSteps(const std::vector<ResultStepVo>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool TestResultVo::stepsIsSet() const
{
    return stepsIsSet_;
}

void TestResultVo::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string TestResultVo::getNumber() const
{
    return number_;
}

void TestResultVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestResultVo::numberIsSet() const
{
    return numberIsSet_;
}

void TestResultVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TestResultVo::getAuthorName() const
{
    return authorName_;
}

void TestResultVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool TestResultVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void TestResultVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

utility::datetime TestResultVo::getBeginTime() const
{
    return beginTime_;
}

void TestResultVo::setBeginTime(const utility::datetime& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool TestResultVo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void TestResultVo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t TestResultVo::getBeginTimeTimestamp() const
{
    return beginTimeTimestamp_;
}

void TestResultVo::setBeginTimeTimestamp(int64_t value)
{
    beginTimeTimestamp_ = value;
    beginTimeTimestampIsSet_ = true;
}

bool TestResultVo::beginTimeTimestampIsSet() const
{
    return beginTimeTimestampIsSet_;
}

void TestResultVo::unsetbeginTimeTimestamp()
{
    beginTimeTimestampIsSet_ = false;
}

utility::datetime TestResultVo::getEndTime() const
{
    return endTime_;
}

void TestResultVo::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TestResultVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TestResultVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t TestResultVo::getEndTimeTimestamp() const
{
    return endTimeTimestamp_;
}

void TestResultVo::setEndTimeTimestamp(int64_t value)
{
    endTimeTimestamp_ = value;
    endTimeTimestampIsSet_ = true;
}

bool TestResultVo::endTimeTimestampIsSet() const
{
    return endTimeTimestampIsSet_;
}

void TestResultVo::unsetendTimeTimestamp()
{
    endTimeTimestampIsSet_ = false;
}

std::string TestResultVo::getCreationDate() const
{
    return creationDate_;
}

void TestResultVo::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TestResultVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TestResultVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TestResultVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void TestResultVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool TestResultVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void TestResultVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

utility::datetime TestResultVo::getLastModified() const
{
    return lastModified_;
}

void TestResultVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool TestResultVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void TestResultVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t TestResultVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void TestResultVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool TestResultVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void TestResultVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime TestResultVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void TestResultVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool TestResultVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void TestResultVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

int64_t TestResultVo::getLastChangeTimeTimestamp() const
{
    return lastChangeTimeTimestamp_;
}

void TestResultVo::setLastChangeTimeTimestamp(int64_t value)
{
    lastChangeTimeTimestamp_ = value;
    lastChangeTimeTimestampIsSet_ = true;
}

bool TestResultVo::lastChangeTimeTimestampIsSet() const
{
    return lastChangeTimeTimestampIsSet_;
}

void TestResultVo::unsetlastChangeTimeTimestamp()
{
    lastChangeTimeTimestampIsSet_ = false;
}

std::string TestResultVo::getDfxTestResult() const
{
    return dfxTestResult_;
}

void TestResultVo::setDfxTestResult(const std::string& value)
{
    dfxTestResult_ = value;
    dfxTestResultIsSet_ = true;
}

bool TestResultVo::dfxTestResultIsSet() const
{
    return dfxTestResultIsSet_;
}

void TestResultVo::unsetdfxTestResult()
{
    dfxTestResultIsSet_ = false;
}

std::string TestResultVo::getFailureCause() const
{
    return failureCause_;
}

void TestResultVo::setFailureCause(const std::string& value)
{
    failureCause_ = value;
    failureCauseIsSet_ = true;
}

bool TestResultVo::failureCauseIsSet() const
{
    return failureCauseIsSet_;
}

void TestResultVo::unsetfailureCause()
{
    failureCauseIsSet_ = false;
}

std::string TestResultVo::getParentUri() const
{
    return parentUri_;
}

void TestResultVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TestResultVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TestResultVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TestResultVo::getTestCaseUri() const
{
    return testCaseUri_;
}

void TestResultVo::setTestCaseUri(const std::string& value)
{
    testCaseUri_ = value;
    testCaseUriIsSet_ = true;
}

bool TestResultVo::testCaseUriIsSet() const
{
    return testCaseUriIsSet_;
}

void TestResultVo::unsettestCaseUri()
{
    testCaseUriIsSet_ = false;
}

std::string TestResultVo::getTestCaseName() const
{
    return testCaseName_;
}

void TestResultVo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool TestResultVo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void TestResultVo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

std::string TestResultVo::getTaskUri() const
{
    return taskUri_;
}

void TestResultVo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool TestResultVo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void TestResultVo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string TestResultVo::getResultName() const
{
    return resultName_;
}

void TestResultVo::setResultName(const std::string& value)
{
    resultName_ = value;
    resultNameIsSet_ = true;
}

bool TestResultVo::resultNameIsSet() const
{
    return resultNameIsSet_;
}

void TestResultVo::unsetresultName()
{
    resultNameIsSet_ = false;
}

std::string TestResultVo::getTestResultAe() const
{
    return testResultAe_;
}

void TestResultVo::setTestResultAe(const std::string& value)
{
    testResultAe_ = value;
    testResultAeIsSet_ = true;
}

bool TestResultVo::testResultAeIsSet() const
{
    return testResultAeIsSet_;
}

void TestResultVo::unsettestResultAe()
{
    testResultAeIsSet_ = false;
}

std::string TestResultVo::getExecutorId() const
{
    return executorId_;
}

void TestResultVo::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool TestResultVo::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void TestResultVo::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string TestResultVo::getExecutorName() const
{
    return executorName_;
}

void TestResultVo::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool TestResultVo::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void TestResultVo::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::string TestResultVo::getTaskId() const
{
    return taskId_;
}

void TestResultVo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TestResultVo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TestResultVo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TestResultVo::getExecuteId() const
{
    return executeId_;
}

void TestResultVo::setExecuteId(const std::string& value)
{
    executeId_ = value;
    executeIdIsSet_ = true;
}

bool TestResultVo::executeIdIsSet() const
{
    return executeIdIsSet_;
}

void TestResultVo::unsetexecuteId()
{
    executeIdIsSet_ = false;
}

int32_t TestResultVo::getTimeCost() const
{
    return timeCost_;
}

void TestResultVo::setTimeCost(int32_t value)
{
    timeCost_ = value;
    timeCostIsSet_ = true;
}

bool TestResultVo::timeCostIsSet() const
{
    return timeCostIsSet_;
}

void TestResultVo::unsettimeCost()
{
    timeCostIsSet_ = false;
}

std::string TestResultVo::getStepTxt() const
{
    return stepTxt_;
}

void TestResultVo::setStepTxt(const std::string& value)
{
    stepTxt_ = value;
    stepTxtIsSet_ = true;
}

bool TestResultVo::stepTxtIsSet() const
{
    return stepTxtIsSet_;
}

void TestResultVo::unsetstepTxt()
{
    stepTxtIsSet_ = false;
}

std::string TestResultVo::getStepExpect() const
{
    return stepExpect_;
}

void TestResultVo::setStepExpect(const std::string& value)
{
    stepExpect_ = value;
    stepExpectIsSet_ = true;
}

bool TestResultVo::stepExpectIsSet() const
{
    return stepExpectIsSet_;
}

void TestResultVo::unsetstepExpect()
{
    stepExpectIsSet_ = false;
}

std::string TestResultVo::getStepActual() const
{
    return stepActual_;
}

void TestResultVo::setStepActual(const std::string& value)
{
    stepActual_ = value;
    stepActualIsSet_ = true;
}

bool TestResultVo::stepActualIsSet() const
{
    return stepActualIsSet_;
}

void TestResultVo::unsetstepActual()
{
    stepActualIsSet_ = false;
}

std::string TestResultVo::getStepResult() const
{
    return stepResult_;
}

void TestResultVo::setStepResult(const std::string& value)
{
    stepResult_ = value;
    stepResultIsSet_ = true;
}

bool TestResultVo::stepResultIsSet() const
{
    return stepResultIsSet_;
}

void TestResultVo::unsetstepResult()
{
    stepResultIsSet_ = false;
}

std::string TestResultVo::getReleaseDev() const
{
    return releaseDev_;
}

void TestResultVo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TestResultVo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TestResultVo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string TestResultVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void TestResultVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool TestResultVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void TestResultVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

std::string TestResultVo::getVersionUri() const
{
    return versionUri_;
}

void TestResultVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestResultVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestResultVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestResultVo::getProjectId() const
{
    return projectId_;
}

void TestResultVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestResultVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestResultVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestResultVo::getReportUrl() const
{
    return reportUrl_;
}

void TestResultVo::setReportUrl(const std::string& value)
{
    reportUrl_ = value;
    reportUrlIsSet_ = true;
}

bool TestResultVo::reportUrlIsSet() const
{
    return reportUrlIsSet_;
}

void TestResultVo::unsetreportUrl()
{
    reportUrlIsSet_ = false;
}

std::string TestResultVo::getTestCaseNumber() const
{
    return testCaseNumber_;
}

void TestResultVo::setTestCaseNumber(const std::string& value)
{
    testCaseNumber_ = value;
    testCaseNumberIsSet_ = true;
}

bool TestResultVo::testCaseNumberIsSet() const
{
    return testCaseNumberIsSet_;
}

void TestResultVo::unsettestCaseNumber()
{
    testCaseNumberIsSet_ = false;
}

std::string TestResultVo::getServiceType() const
{
    return serviceType_;
}

void TestResultVo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TestResultVo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TestResultVo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


