
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaEventResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaEventResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动扩缩容事件返回体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HpaEventResponse
    : public ModelBase
{
public:
    HpaEventResponse();
    virtual ~HpaEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HpaEventResponse members

    /// <summary>
    /// **参数解释：** 自动扩缩容策略事件ID **取值范围：** 事件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略ID **取值范围：** 策略ID
    /// </summary>

    std::string getHpaId() const;
    bool hpaIdIsSet() const;
    void unsethpaId();
    void setHpaId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容事件状态。 **取值范围：** - SUCCESS: 成功 - FAILED: 失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则执行信息。 **取值范围：** 不涉及
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 扩缩容前实例数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCurrentReplicas() const;
    bool currentReplicasIsSet() const;
    void unsetcurrentReplicas();
    void setCurrentReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 预设目标实例数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTargetReplicas() const;
    bool targetReplicasIsSet() const;
    void unsettargetReplicas();
    void setTargetReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 扩缩容后实例数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getFinalReplicas() const;
    bool finalReplicasIsSet() const;
    void unsetfinalReplicas();
    void setFinalReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 执行记录时间。 **取值范围：** 2025-05-20 10:05:55
    /// </summary>

    std::string getRecordTime() const;
    bool recordTimeIsSet() const;
    void unsetrecordTime();
    void setRecordTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string hpaId_;
    bool hpaIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    int32_t currentReplicas_;
    bool currentReplicasIsSet_;
    int32_t targetReplicas_;
    bool targetReplicasIsSet_;
    int32_t finalReplicas_;
    bool finalReplicasIsSet_;
    std::string recordTime_;
    bool recordTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HpaEventResponse_H_
