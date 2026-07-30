
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_status_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_status_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**：不同状态下作业个数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadStatistics_status
    : public ModelBase
{
public:
    WorkloadStatistics_status();
    virtual ~WorkloadStatistics_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadStatistics_status members

    /// <summary>
    /// **参数描述**： 排队中的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getQueue() const;
    bool queueIsSet() const;
    void unsetqueue();
    void setQueue(int32_t value);

    /// <summary>
    /// **参数描述**： 等待中的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getPending() const;
    bool pendingIsSet() const;
    void unsetpending();
    void setPending(int32_t value);

    /// <summary>
    /// **参数描述**： 异常的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getAbnormal() const;
    bool abnormalIsSet() const;
    void unsetabnormal();
    void setAbnormal(int32_t value);

    /// <summary>
    /// **参数描述**： 终止中的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTerminating() const;
    bool terminatingIsSet() const;
    void unsetterminating();
    void setTerminating(int32_t value);

    /// <summary>
    /// **参数描述**： 创建中的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getCreating() const;
    bool creatingIsSet() const;
    void unsetcreating();
    void setCreating(int32_t value);

    /// <summary>
    /// **参数描述**： 运行中的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getRunning() const;
    bool runningIsSet() const;
    void unsetrunning();
    void setRunning(int32_t value);

    /// <summary>
    /// **参数描述**： 已完成的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getCompleted() const;
    bool completedIsSet() const;
    void unsetcompleted();
    void setCompleted(int32_t value);

    /// <summary>
    /// **参数描述**： 已终止的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTerminated() const;
    bool terminatedIsSet() const;
    void unsetterminated();
    void setTerminated(int32_t value);

    /// <summary>
    /// **参数描述**：运行失败的作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getFailed() const;
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(int32_t value);


protected:
    int32_t queue_;
    bool queueIsSet_;
    int32_t pending_;
    bool pendingIsSet_;
    int32_t abnormal_;
    bool abnormalIsSet_;
    int32_t terminating_;
    bool terminatingIsSet_;
    int32_t creating_;
    bool creatingIsSet_;
    int32_t running_;
    bool runningIsSet_;
    int32_t completed_;
    bool completedIsSet_;
    int32_t terminated_;
    bool terminatedIsSet_;
    int32_t failed_;
    bool failedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_status_H_
