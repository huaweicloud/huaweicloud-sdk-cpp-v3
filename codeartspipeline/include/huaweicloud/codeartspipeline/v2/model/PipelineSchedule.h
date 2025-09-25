
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSchedule_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSchedule_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineSchedule
    : public ModelBase
{
public:
    PipelineSchedule();
    virtual ~PipelineSchedule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineSchedule members

    /// <summary>
    /// **参数解释**： 定时任务ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务类型。 **约束限制**： 不涉及。 **取值范围**： 只支持fixed。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否启用。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释**： 一周内具体执行日。周日至周六对应1-7。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<int32_t>& getDaysOfWeek();
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**： 时区。 **约束限制**： 不涉及。 **取值范围**： - \&quot;China Standard Time\&quot;。 - \&quot;GMT Standard Time\&quot;。 - \&quot;South Africa Standard Time\&quot;。 - \&quot;Russian Standard Time\&quot;。 - \&quot;SE Asia Standard Time\&quot;。  - \&quot;Singapore Standard Time\&quot;。 - \&quot;Pacific SA Standard Time\&quot;。 - \&quot;E. South America Standard Time\&quot;。  - \&quot;Central Standard Time (Mexico)\&quot;。 - \&quot;Egypt Standard Time\&quot;。 - \&quot;Saudi Arabia Standard Time\&quot;。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);


protected:
    std::string uuid_;
    bool uuidIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<int32_t> daysOfWeek_;
    bool daysOfWeekIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSchedule_H_
