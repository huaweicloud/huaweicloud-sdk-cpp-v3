
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ProgressInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ProgressInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移进度信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ProgressInfo
    : public ModelBase
{
public:
    ProgressInfo();
    virtual ~ProgressInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgressInfo members

    /// <summary>
    /// **参数解释**：  完成进度，以百分比形式表示，如\&quot;94%\&quot;、\&quot;100%\&quot;。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getCompleted() const;
    bool completedIsSet() const;
    void unsetcompleted();
    void setCompleted(const std::string& value);

    /// <summary>
    /// **参数解释**：  该子项迁移的预计剩余时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);


protected:
    std::string completed_;
    bool completedIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ProgressInfo_H_
