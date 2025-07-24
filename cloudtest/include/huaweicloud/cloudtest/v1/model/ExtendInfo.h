
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtendInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtendInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExtendAuthorInfo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AssignedUserInfo.h>
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
/// 用例其他扩展信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExtendInfo
    : public ModelBase
{
public:
    ExtendInfo();
    virtual ~ExtendInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtendInfo members

    /// <summary>
    /// 
    /// </summary>

    ExtendAuthorInfo getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const ExtendAuthorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ExtendAuthorInfo getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const ExtendAuthorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AssignedUserInfo getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const AssignedUserInfo& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 前置条件
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
    /// 标签信息
    /// </summary>

    std::vector<AssignedUserInfo>& getLabelList();
    bool labelListIsSet() const;
    void unsetlabelList();
    void setLabelList(const std::vector<AssignedUserInfo>& value);

    /// <summary>
    /// 缺陷信息
    /// </summary>

    std::vector<AssignedUserInfo>& getDefectList();
    bool defectListIsSet() const;
    void unsetdefectList();
    void setDefectList(const std::vector<AssignedUserInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    AssignedUserInfo getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const AssignedUserInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AssignedUserInfo getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const AssignedUserInfo& value);

    /// <summary>
    /// 测试版本号
    /// </summary>

    std::string getTestVersionId() const;
    bool testVersionIdIsSet() const;
    void unsettestVersionId();
    void setTestVersionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AssignedUserInfo getFixedVersion() const;
    bool fixedVersionIsSet() const;
    void unsetfixedVersion();
    void setFixedVersion(const AssignedUserInfo& value);


protected:
    ExtendAuthorInfo author_;
    bool authorIsSet_;
    ExtendAuthorInfo updator_;
    bool updatorIsSet_;
    AssignedUserInfo domain_;
    bool domainIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string preparation_;
    bool preparationIsSet_;
    std::vector<ExternalServiceCaseStep> steps_;
    bool stepsIsSet_;
    std::vector<AssignedUserInfo> labelList_;
    bool labelListIsSet_;
    std::vector<AssignedUserInfo> defectList_;
    bool defectListIsSet_;
    AssignedUserInfo module_;
    bool moduleIsSet_;
    AssignedUserInfo issue_;
    bool issueIsSet_;
    std::string testVersionId_;
    bool testVersionIdIsSet_;
    AssignedUserInfo fixedVersion_;
    bool fixedVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtendInfo_H_
