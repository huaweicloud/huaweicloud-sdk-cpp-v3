
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateEventReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateEventReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/EventInstance.h>
#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/EventScheduleWindow.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  OperateEventReq
    : public ModelBase
{
public:
    OperateEventReq();
    virtual ~OperateEventReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateEventReq members

    /// <summary>
    /// **参数解释**：  事件列表  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<EventInstance>& getEventInstances();
    bool eventInstancesIsSet() const;
    void unseteventInstances();
    void setEventInstances(const std::vector<EventInstance>& value);

    /// <summary>
    /// **参数解释**：  事件操作类型：cancel|execute|reservation  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EventScheduleWindow getEventScheduleWindow() const;
    bool eventScheduleWindowIsSet() const;
    void unseteventScheduleWindow();
    void setEventScheduleWindow(const EventScheduleWindow& value);


protected:
    std::vector<EventInstance> eventInstances_;
    bool eventInstancesIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    EventScheduleWindow eventScheduleWindow_;
    bool eventScheduleWindowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateEventReq_H_
