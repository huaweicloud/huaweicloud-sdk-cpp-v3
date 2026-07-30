
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolJob_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolJob_H_


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
/// 资源管理作业。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolJob
    : public ModelBase
{
public:
    PoolJob();
    virtual ~PoolJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolJob members

    /// <summary>
    /// **参数解释**： job开始处理时间，单位毫秒。 **取值范围**： 不涉及。
    /// </summary>

    int64_t getStartTimestamp() const;
    bool startTimestampIsSet() const;
    void unsetstartTimestamp();
    void setStartTimestamp(int64_t value);

    /// <summary>
    /// **参数解释**： Job结束时间，单位毫秒。 **取值范围**： 不涉及。
    /// </summary>

    int64_t getEndTimestamp() const;
    bool endTimestampIsSet() const;
    void unsetendTimestamp();
    void setEndTimestamp(int64_t value);

    /// <summary>
    /// **参数解释**： 任务ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// **参数解释**： Job关联的资源，比如资源池描述。 **取值范围**： 不涉及。
    /// </summary>

    std::string getInvolvedObjects() const;
    bool involvedObjectsIsSet() const;
    void unsetinvolvedObjects();
    void setInvolvedObjects(const std::string& value);

    /// <summary>
    /// **参数解释**： Job输入参数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getInputs() const;
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::string& value);

    /// <summary>
    /// **参数解释**： Job状态。 **取值范围**： 可选值如下： - Running：任务正在运行中。 - Success：任务执行成功。 - Failed：任务执行失败。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释**： Job是否被挂起。 **取值范围**： 不涉及。
    /// </summary>

    bool isSuspend() const;
    bool suspendIsSet() const;
    void unsetsuspend();
    void setSuspend(bool value);

    /// <summary>
    /// **参数解释**： Job类型。 **取值范围**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： Job的执行过程信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getConditions() const;
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::string& value);

    /// <summary>
    /// **参数解释**： Job执行失败时返回执行信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    int64_t startTimestamp_;
    bool startTimestampIsSet_;
    int64_t endTimestamp_;
    bool endTimestampIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string involvedObjects_;
    bool involvedObjectsIsSet_;
    std::string inputs_;
    bool inputsIsSet_;
    std::string phase_;
    bool phaseIsSet_;
    bool suspend_;
    bool suspendIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string conditions_;
    bool conditionsIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolJob_H_
