
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceBizCase_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceBizCase_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ExternalServiceCaseStep.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试用例其他扩展信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalServiceBizCase
    : public ModelBase
{
public:
    ExternalServiceBizCase();
    virtual ~ExternalServiceBizCase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalServiceBizCase members

    /// <summary>
    /// 测试用例描述信息，长度为[0-500]位字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 执行该测试用例时需要满足的前置条件，长度为[0-500]位字符
    /// </summary>

    std::string getPreparation() const;
    bool preparationIsSet() const;
    void unsetpreparation();
    void setPreparation(const std::string& value);

    /// <summary>
    /// 测试步骤，数组长度小于10
    /// </summary>

    std::vector<ExternalServiceCaseStep>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<ExternalServiceCaseStep>& value);

    /// <summary>
    /// 标签名称列表，数组长度小于25
    /// </summary>

    std::vector<std::string>& getLabelList();
    bool labelListIsSet() const;
    void unsetlabelList();
    void setLabelList(const std::vector<std::string>& value);

    /// <summary>
    /// 模块号，长度为[0-32]位字符
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 测试版本号，长度为[0-10]位字符
    /// </summary>

    std::string getTestVersionId() const;
    bool testVersionIdIsSet() const;
    void unsettestVersionId();
    void setTestVersionId(const std::string& value);

    /// <summary>
    /// 迭代号，长度为[0-32]位字符
    /// </summary>

    std::string getFixVersionId() const;
    bool fixVersionIdIsSet() const;
    void unsetfixVersionId();
    void setFixVersionId(const std::string& value);

    /// <summary>
    /// 处理者id信息，固定长度32位字符
    /// </summary>

    std::string getAssignedId() const;
    bool assignedIdIsSet() const;
    void unsetassignedId();
    void setAssignedId(const std::string& value);

    /// <summary>
    /// 用例关联的需求id信息，长度为[0-32]位字符
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 测试用例状态信息，（0-新建，5-设计中，6-测试中，7-完成）
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 缺陷id信息，数组长度小于50个
    /// </summary>

    std::vector<std::string>& getDefectIdList();
    bool defectIdListIsSet() const;
    void unsetdefectIdList();
    void setDefectIdList(const std::vector<std::string>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string preparation_;
    bool preparationIsSet_;
    std::vector<ExternalServiceCaseStep> steps_;
    bool stepsIsSet_;
    std::vector<std::string> labelList_;
    bool labelListIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string testVersionId_;
    bool testVersionIdIsSet_;
    std::string fixVersionId_;
    bool fixVersionIdIsSet_;
    std::string assignedId_;
    bool assignedIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::vector<std::string> defectIdList_;
    bool defectIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceBizCase_H_
