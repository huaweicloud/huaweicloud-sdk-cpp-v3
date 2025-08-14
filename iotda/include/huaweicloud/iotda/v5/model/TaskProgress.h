
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskProgress_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskProgress_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务执行状态统计对象，用于统计任务的整体执行情况。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TaskProgress
    : public ModelBase
{
public:
    TaskProgress();
    virtual ~TaskProgress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskProgress members

    /// <summary>
    /// 子任务总个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 正在执行的子任务个数。
    /// </summary>

    int32_t getProcessing() const;
    bool processingIsSet() const;
    void unsetprocessing();
    void setProcessing(int32_t value);

    /// <summary>
    /// 执行成功的子任务个数。
    /// </summary>

    int32_t getSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(int32_t value);

    /// <summary>
    /// 执行失败的的子任务个数。
    /// </summary>

    int32_t getFail() const;
    bool failIsSet() const;
    void unsetfail();
    void setFail(int32_t value);

    /// <summary>
    /// 等待执行的子任务个数。
    /// </summary>

    int32_t getWaitting() const;
    bool waittingIsSet() const;
    void unsetwaitting();
    void setWaitting(int32_t value);

    /// <summary>
    /// 失败等待重试的子任务个数。
    /// </summary>

    int32_t getFailWaitRetry() const;
    bool failWaitRetryIsSet() const;
    void unsetfailWaitRetry();
    void setFailWaitRetry(int32_t value);

    /// <summary>
    /// 停止的子任务个数。
    /// </summary>

    int32_t getStopped() const;
    bool stoppedIsSet() const;
    void unsetstopped();
    void setStopped(int32_t value);

    /// <summary>
    /// 移除的子任务个数。
    /// </summary>

    int32_t getRemoved() const;
    bool removedIsSet() const;
    void unsetremoved();
    void setRemoved(int32_t value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t processing_;
    bool processingIsSet_;
    int32_t success_;
    bool successIsSet_;
    int32_t fail_;
    bool failIsSet_;
    int32_t waitting_;
    bool waittingIsSet_;
    int32_t failWaitRetry_;
    bool failWaitRetryIsSet_;
    int32_t stopped_;
    bool stoppedIsSet_;
    int32_t removed_;
    bool removedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TaskProgress_H_
