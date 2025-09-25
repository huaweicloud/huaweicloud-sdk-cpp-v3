
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StepRun_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StepRun_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/StepRun_inputs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 步骤运行信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StepRun
    : public ModelBase
{
public:
    StepRun();
    virtual ~StepRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepRun members

    /// <summary>
    /// **参数解释**： 步骤名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 步骤插件名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件业务类型。 **取值范围**： - Normal：通用。 - Build：构建。 - Test：测试。 - Check：代码检查。 - Deploy：部署。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 输入参数。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<StepRun_inputs>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<StepRun_inputs>& value);

    /// <summary>
    /// **参数解释**： 序列号。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 官方插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOfficialTaskVersion() const;
    bool officialTaskVersionIsSet() const;
    void unsetofficialTaskVersion();
    void setOfficialTaskVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 唯一标识符。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否可编辑。 **取值范围**： - true：可编辑。 - false：不可编辑。 
    /// </summary>

    int32_t getMultiStepEditable() const;
    bool multiStepEditableIsSet() const;
    void unsetmultiStepEditable();
    void setMultiStepEditable(int32_t value);

    /// <summary>
    /// **参数解释**： 步骤ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展点ID列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getEndpointIds();
    bool endpointIdsIsSet() const;
    void unsetendpointIds();
    void setEndpointIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 上次下发任务ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getLastDispatchId() const;
    bool lastDispatchIdIsSet() const;
    void unsetlastDispatchId();
    void setLastDispatchId(const std::string& value);

    /// <summary>
    /// **参数解释**： 状态。 **取值范围**： - RUNNING：运行中。 - CANCELED：取消。 - COMPLETED：已完成。 - FAILED：失败。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 错误消息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释**： 步骤开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 步骤结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string task_;
    bool taskIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::vector<StepRun_inputs> inputs_;
    bool inputsIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    std::string officialTaskVersion_;
    bool officialTaskVersionIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    int32_t multiStepEditable_;
    bool multiStepEditableIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> endpointIds_;
    bool endpointIdsIsSet_;
    std::string lastDispatchId_;
    bool lastDispatchIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StepRun_H_
