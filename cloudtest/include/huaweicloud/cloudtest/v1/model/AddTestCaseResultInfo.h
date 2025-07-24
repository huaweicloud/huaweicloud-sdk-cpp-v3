
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/TestCaseStepResultInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddTestCaseResultInfo
    : public ModelBase
{
public:
    AddTestCaseResultInfo();
    virtual ~AddTestCaseResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTestCaseResultInfo members

    /// <summary>
    /// 主键
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 结果名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 用例结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 前置条件
    /// </summary>

    std::string getPreparation() const;
    bool preparationIsSet() const;
    void unsetpreparation();
    void setPreparation(const std::string& value);

    /// <summary>
    /// 用例步骤结果信息
    /// </summary>

    std::vector<TestCaseStepResultInfo>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<TestCaseStepResultInfo>& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 任务URI
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 测试套结果URI
    /// </summary>

    std::string getTaskResultUri() const;
    bool taskResultUriIsSet() const;
    void unsettaskResultUri();
    void setTaskResultUri(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string preparation_;
    bool preparationIsSet_;
    std::vector<TestCaseStepResultInfo> steps_;
    bool stepsIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string taskResultUri_;
    bool taskResultUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultInfo_H_
