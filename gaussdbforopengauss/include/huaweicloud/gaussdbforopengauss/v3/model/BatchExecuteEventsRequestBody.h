
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchExecuteEventsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchExecuteEventsRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/EventScheduleWindowOption.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/EventInstanceOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BatchExecuteEventsRequestBody
    : public ModelBase
{
public:
    BatchExecuteEventsRequestBody();
    virtual ~BatchExecuteEventsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchExecuteEventsRequestBody members

    /// <summary>
    /// **参数解释**: 事件列表。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<EventInstanceOption>& getEventInstances();
    bool eventInstancesIsSet() const;
    void unseteventInstances();
    void setEventInstances(const std::vector<EventInstanceOption>& value);

    /// <summary>
    /// **参数解释**: 事件操作类型。 **约束限制**: 不涉及。 **取值范围**: - cancel：取消事件 - execute：立即执行 - reservation：预约执行时间窗口 **默认取值**: 不涉及。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EventScheduleWindowOption getEventScheduleWindow() const;
    bool eventScheduleWindowIsSet() const;
    void unseteventScheduleWindow();
    void setEventScheduleWindow(const EventScheduleWindowOption& value);


protected:
    std::vector<EventInstanceOption> eventInstances_;
    bool eventInstancesIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    EventScheduleWindowOption eventScheduleWindow_;
    bool eventScheduleWindowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchExecuteEventsRequestBody_H_
