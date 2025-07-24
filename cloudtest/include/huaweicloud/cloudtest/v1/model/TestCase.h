
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCase_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCase_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCase
    : public ModelBase
{
public:
    TestCase();
    virtual ~TestCase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCase members

    /// <summary>
    /// 自动化类型
    /// </summary>

    std::string getAutoType() const;
    bool autoTypeIsSet() const;
    void unsetautoType();
    void setAutoType(const std::string& value);

    /// <summary>
    /// 用例设计描述
    /// </summary>

    std::string getCaseDesignDesc() const;
    bool caseDesignDescIsSet() const;
    void unsetcaseDesignDesc();
    void setCaseDesignDesc(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getCaseName() const;
    bool caseNameIsSet() const;
    void unsetcaseName();
    void setCaseName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getCaseNum() const;
    bool caseNumIsSet() const;
    void unsetcaseNum();
    void setCaseNum(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建人名字
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建人工号
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 删除状态
    /// </summary>

    std::string getDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(const std::string& value);

    /// <summary>
    /// 预期结果
    /// </summary>

    std::string getExpectedResults() const;
    bool expectedResultsIsSet() const;
    void unsetexpectedResults();
    void setExpectedResults(const std::string& value);

    /// <summary>
    /// 额外模板字段：以json形式存储，前台解析
    /// </summary>

    std::string getExtraParam() const;
    bool extraParamIsSet() const;
    void unsetextraParam();
    void setExtraParam(const std::string& value);

    /// <summary>
    /// 因子组合json
    /// </summary>

    std::string getFactorCombinationJson() const;
    bool factorCombinationJsonIsSet() const;
    void unsetfactorCombinationJson();
    void setFactorCombinationJson(const std::string& value);

    /// <summary>
    /// 操作及预期结果
    /// </summary>

    std::string getOperationAndExpectedResult() const;
    bool operationAndExpectedResultIsSet() const;
    void unsetoperationAndExpectedResult();
    void setOperationAndExpectedResult(const std::string& value);

    /// <summary>
    /// id 主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    bool isIsArchive() const;
    bool isArchiveIsSet() const;
    void unsetisArchive();
    void setIsArchive(bool value);

    /// <summary>
    /// 脑图id
    /// </summary>

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);

    /// <summary>
    /// 节点id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 批次id
    /// </summary>

    std::string getBatchId() const;
    bool batchIdIsSet() const;
    void unsetbatchId();
    void setBatchId(const std::string& value);

    /// <summary>
    /// 分支ID
    /// </summary>

    std::string getBranchId() const;
    bool branchIdIsSet() const;
    void unsetbranchId();
    void setBranchId(const std::string& value);

    /// <summary>
    /// 计划ID
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 用例前置步骤
    /// </summary>

    std::string getPrerequisite() const;
    bool prerequisiteIsSet() const;
    void unsetprerequisite();
    void setPrerequisite(const std::string& value);

    /// <summary>
    /// 测试用例级别
    /// </summary>

    std::string getTestCaseLevel() const;
    bool testCaseLevelIsSet() const;
    void unsettestCaseLevel();
    void setTestCaseLevel(const std::string& value);

    /// <summary>
    /// 测试步骤
    /// </summary>

    std::string getTestProcedure() const;
    bool testProcedureIsSet() const;
    void unsettestProcedure();
    void setTestProcedure(const std::string& value);

    /// <summary>
    /// 更新人名字
    /// </summary>

    std::string getUpdateName() const;
    bool updateNameIsSet() const;
    void unsetupdateName();
    void setUpdateName(const std::string& value);

    /// <summary>
    /// 更新人工号
    /// </summary>

    std::string getUpdateNum() const;
    bool updateNumIsSet() const;
    void unsetupdateNum();
    void setUpdateNum(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// url
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);


protected:
    std::string autoType_;
    bool autoTypeIsSet_;
    std::string caseDesignDesc_;
    bool caseDesignDescIsSet_;
    std::string caseName_;
    bool caseNameIsSet_;
    std::string caseNum_;
    bool caseNumIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string deleted_;
    bool deletedIsSet_;
    std::string expectedResults_;
    bool expectedResultsIsSet_;
    std::string extraParam_;
    bool extraParamIsSet_;
    std::string factorCombinationJson_;
    bool factorCombinationJsonIsSet_;
    std::string operationAndExpectedResult_;
    bool operationAndExpectedResultIsSet_;
    std::string id_;
    bool idIsSet_;
    bool isArchive_;
    bool isArchiveIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string batchId_;
    bool batchIdIsSet_;
    std::string branchId_;
    bool branchIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::string prerequisite_;
    bool prerequisiteIsSet_;
    std::string testCaseLevel_;
    bool testCaseLevelIsSet_;
    std::string testProcedure_;
    bool testProcedureIsSet_;
    std::string updateName_;
    bool updateNameIsSet_;
    std::string updateNum_;
    bool updateNumIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCase_H_
