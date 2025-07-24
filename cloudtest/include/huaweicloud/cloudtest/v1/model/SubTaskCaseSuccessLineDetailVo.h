
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineDetailVo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SubTaskCaseSuccessLineDetailVo
    : public ModelBase
{
public:
    SubTaskCaseSuccessLineDetailVo();
    virtual ~SubTaskCaseSuccessLineDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskCaseSuccessLineDetailVo members

    /// <summary>
    /// 统计时间
    /// </summary>

    int64_t getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(int64_t value);

    /// <summary>
    /// 成功率
    /// </summary>

    float getPassRate() const;
    bool passRateIsSet() const;
    void unsetpassRate();
    void setPassRate(float value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    int64_t date_;
    bool dateIsSet_;
    float passRate_;
    bool passRateIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineDetailVo_H_
