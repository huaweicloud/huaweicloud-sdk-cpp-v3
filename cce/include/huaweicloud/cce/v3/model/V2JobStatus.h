
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  V2JobStatus
    : public ModelBase
{
public:
    V2JobStatus();
    virtual ~V2JobStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// V2JobStatus members

    /// <summary>
    /// **参数解释**： Job的状态 **约束限制**： 不涉及 **取值范围**： - Initializing：未执行 - Running：执行中 - Failed：执行失败 - Success：执行成功  **默认取值**： 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： Job执行失败的原因 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**： Job完成时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getCompletionTime() const;
    bool completionTimeIsSet() const;
    void unsetcompletionTime();
    void setCompletionTime(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string completionTime_;
    bool completionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobStatus_H_
