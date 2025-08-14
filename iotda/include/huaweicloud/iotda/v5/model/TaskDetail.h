
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskDetail_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskDetail_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ErrorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单个子任务详情结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TaskDetail
    : public ModelBase
{
public:
    TaskDetail();
    virtual ~TaskDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskDetail members

    /// <summary>
    /// 执行批量任务的目标。
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 子任务的执行状态，结果范围：Processing，Success，Fail，Waitting，FailWaitRetry，Stopped。 - Waitting: 等待执行。 - Processing: 执行中。 - Success: 成功。 - Fail: 失败。 - FailWaitRetry: 失败重试。 - Stopped: 已停止。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 子任务执行的输出信息。
    /// </summary>

    std::string getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorInfo getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ErrorInfo& value);


protected:
    std::string target_;
    bool targetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string output_;
    bool outputIsSet_;
    ErrorInfo error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskDetail_H_
