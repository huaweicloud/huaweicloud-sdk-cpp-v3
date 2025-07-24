
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultBean_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultBean_H_


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
/// 测试用例状态信息，数组长度小于等于50
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateTestCaseResultBean
    : public ModelBase
{
public:
    UpdateTestCaseResultBean();
    virtual ~UpdateTestCaseResultBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTestCaseResultBean members

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
    /// 用例结束执行的时间戳，在执行结束时该字段必传
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 执行用例持续时长ms，更新状态时改字段必传
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// 用于记录该次结果执行的备注信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string executeId_;
    bool executeIdIsSet_;
    std::string resultId_;
    bool resultIdIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultBean_H_
