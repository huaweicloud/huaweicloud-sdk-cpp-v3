
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestResultVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestResultVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ResultStepVo.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestResultVo
    : public ModelBase
{
public:
    TestResultVo();
    virtual ~TestResultVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestResultVo members

    /// <summary>
    /// 结果URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 用例结果名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 测试结果Code
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);

    /// <summary>
    /// 执行批次
    /// </summary>

    int32_t getRound() const;
    bool roundIsSet() const;
    void unsetround();
    void setRound(int32_t value);

    /// <summary>
    /// 前置条件
    /// </summary>

    std::string getPreparation() const;
    bool preparationIsSet() const;
    void unsetpreparation();
    void setPreparation(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 逻辑Region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 测试步骤信息
    /// </summary>

    std::vector<ResultStepVo>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<ResultStepVo>& value);

    /// <summary>
    /// 用例结果编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 执行开始时间
    /// </summary>

    utility::datetime getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const utility::datetime& value);

    /// <summary>
    /// 执行开始时间时间戳
    /// </summary>

    int64_t getBeginTimeTimestamp() const;
    bool beginTimeTimestampIsSet() const;
    void unsetbeginTimeTimestamp();
    void setBeginTimeTimestamp(int64_t value);

    /// <summary>
    /// 执行结束时间
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 执行结束时间时间戳
    /// </summary>

    int64_t getEndTimeTimestamp() const;
    bool endTimeTimestampIsSet() const;
    void unsetendTimeTimestamp();
    void setEndTimeTimestamp(int64_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreationDateTimestamp() const;
    bool creationDateTimestampIsSet() const;
    void unsetcreationDateTimestamp();
    void setCreationDateTimestamp(int64_t value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    int64_t getLastModifiedTimestamp() const;
    bool lastModifiedTimestampIsSet() const;
    void unsetlastModifiedTimestamp();
    void setLastModifiedTimestamp(int64_t value);

    /// <summary>
    /// 最后变更时间
    /// </summary>

    utility::datetime getLastChangeTime() const;
    bool lastChangeTimeIsSet() const;
    void unsetlastChangeTime();
    void setLastChangeTime(const utility::datetime& value);

    /// <summary>
    /// 最后变更时间
    /// </summary>

    int64_t getLastChangeTimeTimestamp() const;
    bool lastChangeTimeTimestampIsSet() const;
    void unsetlastChangeTimeTimestamp();
    void setLastChangeTimeTimestamp(int64_t value);

    /// <summary>
    /// DFX测试结果
    /// </summary>

    std::string getDfxTestResult() const;
    bool dfxTestResultIsSet() const;
    void unsetdfxTestResult();
    void setDfxTestResult(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailureCause() const;
    bool failureCauseIsSet() const;
    void unsetfailureCause();
    void setFailureCause(const std::string& value);

    /// <summary>
    /// 父节点URI(分支用例URI或迭代用例URI)
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 分支用例URI
    /// </summary>

    std::string getTestCaseUri() const;
    bool testCaseUriIsSet() const;
    void unsettestCaseUri();
    void setTestCaseUri(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 测试任务URI
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 测试结果
    /// </summary>

    std::string getResultName() const;
    bool resultNameIsSet() const;
    void unsetresultName();
    void setResultName(const std::string& value);

    /// <summary>
    /// 是否自动化执行
    /// </summary>

    std::string getTestResultAe() const;
    bool testResultAeIsSet() const;
    void unsettestResultAe();
    void setTestResultAe(const std::string& value);

    /// <summary>
    /// 执行人ID
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// 执行人名称
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);

    /// <summary>
    /// 执行机任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 执行ID
    /// </summary>

    std::string getExecuteId() const;
    bool executeIdIsSet() const;
    void unsetexecuteId();
    void setExecuteId(const std::string& value);

    /// <summary>
    /// 执行耗时
    /// </summary>

    int32_t getTimeCost() const;
    bool timeCostIsSet() const;
    void unsettimeCost();
    void setTimeCost(int32_t value);

    /// <summary>
    /// 测试步骤
    /// </summary>

    std::string getStepTxt() const;
    bool stepTxtIsSet() const;
    void unsetstepTxt();
    void setStepTxt(const std::string& value);

    /// <summary>
    /// 测试步骤期望结果
    /// </summary>

    std::string getStepExpect() const;
    bool stepExpectIsSet() const;
    void unsetstepExpect();
    void setStepExpect(const std::string& value);

    /// <summary>
    /// 测试步骤实际结果
    /// </summary>

    std::string getStepActual() const;
    bool stepActualIsSet() const;
    void unsetstepActual();
    void setStepActual(const std::string& value);

    /// <summary>
    /// 测试步骤结果
    /// </summary>

    std::string getStepResult() const;
    bool stepResultIsSet() const;
    void unsetstepResult();
    void setStepResult(const std::string& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 创建版本URI
    /// </summary>

    std::string getCreationVersionUri() const;
    bool creationVersionUriIsSet() const;
    void unsetcreationVersionUri();
    void setCreationVersionUri(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 第三方过来的执行结果，返回跳转到第三方的url
    /// </summary>

    std::string getReportUrl() const;
    bool reportUrlIsSet() const;
    void unsetreportUrl();
    void setReportUrl(const std::string& value);

    /// <summary>
    /// 测试用例编号
    /// </summary>

    std::string getTestCaseNumber() const;
    bool testCaseNumberIsSet() const;
    void unsettestCaseNumber();
    void setTestCaseNumber(const std::string& value);

    /// <summary>
    /// 测试类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string author_;
    bool authorIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    int32_t result_;
    bool resultIsSet_;
    int32_t round_;
    bool roundIsSet_;
    std::string preparation_;
    bool preparationIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::vector<ResultStepVo> steps_;
    bool stepsIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    utility::datetime beginTime_;
    bool beginTimeIsSet_;
    int64_t beginTimeTimestamp_;
    bool beginTimeTimestampIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    int64_t endTimeTimestamp_;
    bool endTimeTimestampIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;
    int64_t creationDateTimestamp_;
    bool creationDateTimestampIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    int64_t lastModifiedTimestamp_;
    bool lastModifiedTimestampIsSet_;
    utility::datetime lastChangeTime_;
    bool lastChangeTimeIsSet_;
    int64_t lastChangeTimeTimestamp_;
    bool lastChangeTimeTimestampIsSet_;
    std::string dfxTestResult_;
    bool dfxTestResultIsSet_;
    std::string failureCause_;
    bool failureCauseIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string testCaseUri_;
    bool testCaseUriIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string resultName_;
    bool resultNameIsSet_;
    std::string testResultAe_;
    bool testResultAeIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string executeId_;
    bool executeIdIsSet_;
    int32_t timeCost_;
    bool timeCostIsSet_;
    std::string stepTxt_;
    bool stepTxtIsSet_;
    std::string stepExpect_;
    bool stepExpectIsSet_;
    std::string stepActual_;
    bool stepActualIsSet_;
    std::string stepResult_;
    bool stepResultIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string creationVersionUri_;
    bool creationVersionUriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string reportUrl_;
    bool reportUrlIsSet_;
    std::string testCaseNumber_;
    bool testCaseNumberIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestResultVo_H_
