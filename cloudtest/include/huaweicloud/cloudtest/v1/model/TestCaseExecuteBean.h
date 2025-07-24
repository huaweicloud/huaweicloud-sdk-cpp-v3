
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseExecuteBean_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseExecuteBean_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试用例执行信息，数组长度小于等于50
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseExecuteBean
    : public ModelBase
{
public:
    TestCaseExecuteBean();
    virtual ~TestCaseExecuteBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseExecuteBean members

    /// <summary>
    /// 测试用例唯一标识，列表中不允许存在重复的id，固定长度32位字符
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 注册服务执行id，该值不允许重复，不超过32位字符
    /// </summary>

    std::string getExecuteId() const;
    bool executeIdIsSet() const;
    void unsetexecuteId();
    void setExecuteId(const std::string& value);

    /// <summary>
    /// 测试用例结果，（0-成功，1-失败，5-执行中，6-停止）
    /// </summary>

    std::string getResultId() const;
    bool resultIdIsSet() const;
    void unsetresultId();
    void setResultId(const std::string& value);

    /// <summary>
    /// 用例开始执行的时间戳，在执行开始时该字段必传
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);


protected:
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string executeId_;
    bool executeIdIsSet_;
    std::string resultId_;
    bool resultIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseExecuteBean_H_
