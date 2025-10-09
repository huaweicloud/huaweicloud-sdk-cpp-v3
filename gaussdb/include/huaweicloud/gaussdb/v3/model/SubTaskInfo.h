
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SubTaskInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SubTaskInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子任务信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SubTaskInfo
    : public ModelBase
{
public:
    SubTaskInfo();
    virtual ~SubTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskInfo members

    /// <summary>
    /// **参数解释**：  子任务名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSubTaskName() const;
    bool subTaskNameIsSet() const;
    void unsetsubTaskName();
    void setSubTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**：  子任务进度百分比。  **取值范围**：  0-100。
    /// </summary>

    std::string getPercent() const;
    bool percentIsSet() const;
    void unsetpercent();
    void setPercent(const std::string& value);

    /// <summary>
    /// **参数解释**：  剩余时间，单位为秒。  **取值范围**：  不涉及。
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);


protected:
    std::string subTaskName_;
    bool subTaskNameIsSet_;
    std::string percent_;
    bool percentIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SubTaskInfo_H_
