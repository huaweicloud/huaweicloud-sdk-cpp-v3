
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesQueryInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesQueryInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/QueryCustomFieldsInfo.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCasesQueryInfo
    : public ModelBase
{
public:
    TestCasesQueryInfo();
    virtual ~TestCasesQueryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCasesQueryInfo members

    /// <summary>
    /// 关键字查询，用例名或编号
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// 执行平台
    /// </summary>

    std::vector<std::string>& getExeplatforms();
    bool exeplatformsIsSet() const;
    void unsetexeplatforms();
    void setExeplatforms(const std::vector<std::string>& value);

    /// <summary>
    /// 是否是我的
    /// </summary>

    bool isOwn() const;
    bool ownIsSet() const;
    void unsetown();
    void setOwn(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isUseOffset() const;
    bool useOffsetIsSet() const;
    void unsetuseOffset();
    void setUseOffset(bool value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 用例URI集合
    /// </summary>

    std::vector<std::string>& getCaseUris();
    bool caseUrisIsSet() const;
    void unsetcaseUris();
    void setCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 处理者ID集合
    /// </summary>

    std::vector<std::string>& getOwnerIds();
    bool ownerIdsIsSet() const;
    void unsetownerIds();
    void setOwnerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 状态Code集合
    /// </summary>

    std::vector<std::string>& getStatusCodes();
    bool statusCodesIsSet() const;
    void unsetstatusCodes();
    void setStatusCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 用例等级ID集合
    /// </summary>

    std::vector<std::string>& getRankIds();
    bool rankIdsIsSet() const;
    void unsetrankIds();
    void setRankIds(const std::vector<std::string>& value);

    /// <summary>
    /// 模块ID集合
    /// </summary>

    std::vector<std::string>& getModuleIds();
    bool moduleIdsIsSet() const;
    void unsetmoduleIds();
    void setModuleIds(const std::vector<std::string>& value);

    /// <summary>
    /// 需求编号
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 创建者ID集合
    /// </summary>

    std::vector<std::string>& getCreatorIds();
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(const std::vector<std::string>& value);

    /// <summary>
    /// 结果Code集合
    /// </summary>

    std::vector<std::string>& getResultCodes();
    bool resultCodesIsSet() const;
    void unsetresultCodes();
    void setResultCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 归属迭代ID集合
    /// </summary>

    std::vector<std::string>& getIterationIds();
    bool iterationIdsIsSet() const;
    void unsetiterationIds();
    void setIterationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 创建开始时间
    /// </summary>

    std::string getCreateStartTime() const;
    bool createStartTimeIsSet() const;
    void unsetcreateStartTime();
    void setCreateStartTime(const std::string& value);

    /// <summary>
    /// 创建结束时间
    /// </summary>

    std::string getCreateEndTime() const;
    bool createEndTimeIsSet() const;
    void unsetcreateEndTime();
    void setCreateEndTime(const std::string& value);

    /// <summary>
    /// 是否关联需求（null：不限，false：未关联，true：已关联）
    /// </summary>

    bool isAssociatedIssue() const;
    bool associatedIssueIsSet() const;
    void unsetassociatedIssue();
    void setAssociatedIssue(bool value);

    /// <summary>
    /// 是否关联缺陷（null：不限，false：未关联，true：已关联）
    /// </summary>

    bool isAssociatedDefects() const;
    bool associatedDefectsIsSet() const;
    void unsetassociatedDefects();
    void setAssociatedDefects(bool value);

    /// <summary>
    /// 是否查询子需求关联的用例，默认true
    /// </summary>

    bool isIncludeSubIssue() const;
    bool includeSubIssueIsSet() const;
    void unsetincludeSubIssue();
    void setIncludeSubIssue(bool value);

    /// <summary>
    /// 是否查询子目录的用例，默认true
    /// </summary>

    bool isIncludeSubFeature() const;
    bool includeSubFeatureIsSet() const;
    void unsetincludeSubFeature();
    void setIncludeSubFeature(bool value);

    /// <summary>
    /// 标签ID集合
    /// </summary>

    std::vector<std::string>& getLabelIds();
    bool labelIdsIsSet() const;
    void unsetlabelIds();
    void setLabelIds(const std::vector<std::string>& value);

    /// <summary>
    /// 执行开始时间
    /// </summary>

    std::string getExecuteStartTime() const;
    bool executeStartTimeIsSet() const;
    void unsetexecuteStartTime();
    void setExecuteStartTime(const std::string& value);

    /// <summary>
    /// 执行结束时间
    /// </summary>

    std::string getExecuteEndTime() const;
    bool executeEndTimeIsSet() const;
    void unsetexecuteEndTime();
    void setExecuteEndTime(const std::string& value);

    /// <summary>
    /// 执行者ID集合
    /// </summary>

    std::vector<std::string>& getExecutorIds();
    bool executorIdsIsSet() const;
    void unsetexecutorIds();
    void setExecutorIds(const std::vector<std::string>& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::vector<std::string>& getTestTypes();
    bool testTypesIsSet() const;
    void unsettestTypes();
    void setTestTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 是否组合关键字
    /// </summary>

    bool isIsKeyword() const;
    bool isKeywordIsSet() const;
    void unsetisKeyword();
    void setIsKeyword(bool value);

    /// <summary>
    /// 是否是需求树点击的查询关联用例
    /// </summary>

    bool isIssueTreeSearch() const;
    bool issueTreeSearchIsSet() const;
    void unsetissueTreeSearch();
    void setIssueTreeSearch(bool value);

    /// <summary>
    /// 服务类型
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 服务类型集合
    /// </summary>

    std::vector<int32_t>& getServiceTypes();
    bool serviceTypesIsSet() const;
    void unsetserviceTypes();
    void setServiceTypes(std::vector<int32_t> value);

    /// <summary>
    /// 阶段过程（2：测试设计，3：测试执行，4：质量报告）
    /// </summary>

    int32_t getStageType() const;
    bool stageTypeIsSet() const;
    void unsetstageType();
    void setStageType(int32_t value);

    /// <summary>
    /// 目录URI
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序方式
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 用例类型
    /// </summary>

    int32_t getCaseType() const;
    bool caseTypeIsSet() const;
    void unsetcaseType();
    void setCaseType(int32_t value);

    /// <summary>
    /// 用例自定义字段信息
    /// </summary>

    std::vector<QueryCustomFieldsInfo>& getCustomFieldInfo();
    bool customFieldInfoIsSet() const;
    void unsetcustomFieldInfo();
    void setCustomFieldInfo(const std::vector<QueryCustomFieldsInfo>& value);

    /// <summary>
    /// 测试套uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 是否返回需求具体信息（返回需求名称，需求id）
    /// </summary>

    bool isAssociateIssueDetail() const;
    bool associateIssueDetailIsSet() const;
    void unsetassociateIssueDetail();
    void setAssociateIssueDetail(bool value);

    /// <summary>
    /// 该字段为false,则查询全量用例，为true表示查询未分配测试套的用例
    /// </summary>

    bool isNotAssignTask() const;
    bool notAssignTaskIsSet() const;
    void unsetnotAssignTask();
    void setNotAssignTask(bool value);

    /// <summary>
    /// 是否来自测试设计（null或者[true, false]：不限，[true]：来自测试设计，[false]：否来自测试设计）
    /// </summary>

    std::vector<bool>& getTestDesigns();
    bool testDesignsIsSet() const;
    void unsettestDesigns();
    void setTestDesigns(std::vector<bool> value);

    /// <summary>
    /// 用例评审状态
    /// </summary>

    int32_t getReviewStatus() const;
    bool reviewStatusIsSet() const;
    void unsetreviewStatus();
    void setReviewStatus(int32_t value);


protected:
    std::string keyword_;
    bool keywordIsSet_;
    std::vector<std::string> exeplatforms_;
    bool exeplatformsIsSet_;
    bool own_;
    bool ownIsSet_;
    bool useOffset_;
    bool useOffsetIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::vector<std::string> caseUris_;
    bool caseUrisIsSet_;
    std::vector<std::string> ownerIds_;
    bool ownerIdsIsSet_;
    std::vector<std::string> statusCodes_;
    bool statusCodesIsSet_;
    std::vector<std::string> rankIds_;
    bool rankIdsIsSet_;
    std::vector<std::string> moduleIds_;
    bool moduleIdsIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::vector<std::string> creatorIds_;
    bool creatorIdsIsSet_;
    std::vector<std::string> resultCodes_;
    bool resultCodesIsSet_;
    std::vector<std::string> iterationIds_;
    bool iterationIdsIsSet_;
    std::string createStartTime_;
    bool createStartTimeIsSet_;
    std::string createEndTime_;
    bool createEndTimeIsSet_;
    bool associatedIssue_;
    bool associatedIssueIsSet_;
    bool associatedDefects_;
    bool associatedDefectsIsSet_;
    bool includeSubIssue_;
    bool includeSubIssueIsSet_;
    bool includeSubFeature_;
    bool includeSubFeatureIsSet_;
    std::vector<std::string> labelIds_;
    bool labelIdsIsSet_;
    std::string executeStartTime_;
    bool executeStartTimeIsSet_;
    std::string executeEndTime_;
    bool executeEndTimeIsSet_;
    std::vector<std::string> executorIds_;
    bool executorIdsIsSet_;
    std::vector<std::string> testTypes_;
    bool testTypesIsSet_;
    bool isKeyword_;
    bool isKeywordIsSet_;
    bool issueTreeSearch_;
    bool issueTreeSearchIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::vector<int32_t> serviceTypes_;
    bool serviceTypesIsSet_;
    int32_t stageType_;
    bool stageTypeIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t caseType_;
    bool caseTypeIsSet_;
    std::vector<QueryCustomFieldsInfo> customFieldInfo_;
    bool customFieldInfoIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    bool associateIssueDetail_;
    bool associateIssueDetailIsSet_;
    bool notAssignTask_;
    bool notAssignTaskIsSet_;
    std::vector<bool> testDesigns_;
    bool testDesignsIsSet_;
    int32_t reviewStatus_;
    bool reviewStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesQueryInfo_H_
