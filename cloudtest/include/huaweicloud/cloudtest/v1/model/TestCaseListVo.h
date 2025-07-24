
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseListVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseListVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AssociateDefectInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/ExecuteInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/LabelVo.h>
#include <huaweicloud/cloudtest/v1/model/IntegerIdAndNameVo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/CreateInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/AssociateIssueInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/CustomFieldVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseListVo
    : public ModelBase
{
public:
    TestCaseListVo();
    virtual ~TestCaseListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseListVo members

    /// <summary>
    /// 用例URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const NameAndIdVo& value);

    /// <summary>
    /// 执行平台，如：apittest,其他三方执行平台
    /// </summary>

    std::string getExeplatform() const;
    bool exeplatformIsSet() const;
    void unsetexeplatform();
    void setExeplatform(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用例描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 用例等级
    /// </summary>

    std::string getRankId() const;
    bool rankIdIsSet() const;
    void unsetrankId();
    void setRankId(const std::string& value);

    /// <summary>
    /// 目录URI
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 是否组合关键字
    /// </summary>

    bool isIsKeyword() const;
    bool isKeywordIsSet() const;
    void unsetisKeyword();
    void setIsKeyword(bool value);

    /// <summary>
    /// 脚本路径
    /// </summary>

    std::string getScriptUrl() const;
    bool scriptUrlIsSet() const;
    void unsetscriptUrl();
    void setScriptUrl(const std::string& value);

    /// <summary>
    /// 实时报告地址
    /// </summary>

    std::string getReportUrl() const;
    bool reportUrlIsSet() const;
    void unsetreportUrl();
    void setReportUrl(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    IntegerIdAndNameVo getTestType() const;
    bool testTypeIsSet() const;
    void unsettestType();
    void setTestType(const IntegerIdAndNameVo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateInfoVo getCreateInfo() const;
    bool createInfoIsSet() const;
    void unsetcreateInfo();
    void setCreateInfo(const CreateInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteInfoVo getExecuteInfo() const;
    bool executeInfoIsSet() const;
    void unsetexecuteInfo();
    void setExecuteInfo(const ExecuteInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateIssueInfoVo getAssociateIssueInfo() const;
    bool associateIssueInfoIsSet() const;
    void unsetassociateIssueInfo();
    void setAssociateIssueInfo(const AssociateIssueInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateDefectInfoVo getAssociateDefectInfo() const;
    bool associateDefectInfoIsSet() const;
    void unsetassociateDefectInfo();
    void setAssociateDefectInfo(const AssociateDefectInfoVo& value);

    /// <summary>
    /// 用例类型
    /// </summary>

    int32_t getCaseType() const;
    bool caseTypeIsSet() const;
    void unsetcaseType();
    void setCaseType(int32_t value);

    /// <summary>
    /// 用例标签名称列表
    /// </summary>

    std::vector<LabelVo>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelVo>& value);

    /// <summary>
    /// 自定义字段信息
    /// </summary>

    std::vector<CustomFieldVo>& getCustomFieldInfo();
    bool customFieldInfoIsSet() const;
    void unsetcustomFieldInfo();
    void setCustomFieldInfo(const std::vector<CustomFieldVo>& value);

    /// <summary>
    /// 是否来自测试设计（null：不限，false：否来自测试设计，true：来自测试设计）
    /// </summary>

    bool isIsTestDesign() const;
    bool isTestDesignIsSet() const;
    void unsetisTestDesign();
    void setIsTestDesign(bool value);

    /// <summary>
    /// 最后修改时间（null：不限）
    /// </summary>

    int64_t getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(int64_t value);

    /// <summary>
    /// 用例评审状态（null：0至127）
    /// </summary>

    int32_t getReviewStatus() const;
    bool reviewStatusIsSet() const;
    void unsetreviewStatus();
    void setReviewStatus(int32_t value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    NameAndIdVo owner_;
    bool ownerIsSet_;
    NameAndIdVo status_;
    bool statusIsSet_;
    NameAndIdVo result_;
    bool resultIsSet_;
    NameAndIdVo module_;
    bool moduleIsSet_;
    NameAndIdVo iteration_;
    bool iterationIsSet_;
    std::string exeplatform_;
    bool exeplatformIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string rankId_;
    bool rankIdIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    bool isKeyword_;
    bool isKeywordIsSet_;
    std::string scriptUrl_;
    bool scriptUrlIsSet_;
    std::string reportUrl_;
    bool reportUrlIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    NameAndIdVo serviceType_;
    bool serviceTypeIsSet_;
    IntegerIdAndNameVo testType_;
    bool testTypeIsSet_;
    CreateInfoVo createInfo_;
    bool createInfoIsSet_;
    ExecuteInfoVo executeInfo_;
    bool executeInfoIsSet_;
    AssociateIssueInfoVo associateIssueInfo_;
    bool associateIssueInfoIsSet_;
    AssociateDefectInfoVo associateDefectInfo_;
    bool associateDefectInfoIsSet_;
    int32_t caseType_;
    bool caseTypeIsSet_;
    std::vector<LabelVo> labels_;
    bool labelsIsSet_;
    std::vector<CustomFieldVo> customFieldInfo_;
    bool customFieldInfoIsSet_;
    bool isTestDesign_;
    bool isTestDesignIsSet_;
    int64_t lastModified_;
    bool lastModifiedIsSet_;
    int32_t reviewStatus_;
    bool reviewStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseListVo_H_
