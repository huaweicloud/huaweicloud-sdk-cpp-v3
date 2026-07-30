
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageInfoWithSub_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageInfoWithSub_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/SubStage.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业流程阶段信息列表的主阶段元信息，包含子阶段。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StageInfoWithSub
    : public ModelBase
{
public:
    StageInfoWithSub();
    virtual ~StageInfoWithSub();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StageInfoWithSub members

    /// <summary>
    /// **参数解释**：作业ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段名称。  **取值范围**： - scheduling：作业调度 - preparing：环境准备 - running：作业运行 - end：作业结束
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段英文描述信息。  **取值范围**：不涉及。
    /// </summary>

    std::string getEnMessage() const;
    bool enMessageIsSet() const;
    void unsetenMessage();
    void setEnMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段中文描述信息。  **取值范围**：不涉及。
    /// </summary>

    std::string getZhMessage() const;
    bool zhMessageIsSet() const;
    void unsetzhMessage();
    void setZhMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段开始时间。  **取值范围**：不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段结束时间。  **取值范围**：不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：主阶段序号。 **取值范围**：[1,4]。
    /// </summary>

    int32_t getStageOrder() const;
    bool stageOrderIsSet() const;
    void unsetstageOrder();
    void setStageOrder(int32_t value);

    /// <summary>
    /// **参数解释**：子阶段信息列表。
    /// </summary>

    std::vector<SubStage>& getSubStages();
    bool subStagesIsSet() const;
    void unsetsubStages();
    void setSubStages(const std::vector<SubStage>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string enMessage_;
    bool enMessageIsSet_;
    std::string zhMessage_;
    bool zhMessageIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t stageOrder_;
    bool stageOrderIsSet_;
    std::vector<SubStage> subStages_;
    bool subStagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StageInfoWithSub_H_
