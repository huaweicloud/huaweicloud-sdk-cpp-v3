
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTriggerRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTriggerRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/UpdateriggerEventData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateTriggerRequestBody
    : public ModelBase
{
public:
    UpdateTriggerRequestBody();
    virtual ~UpdateTriggerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTriggerRequestBody members

    /// <summary>
    /// 触发器状态
    /// </summary>

    std::string getTriggerStatus() const;
    bool triggerStatusIsSet() const;
    void unsettriggerStatus();
    void setTriggerStatus(const std::string& value);

    /// <summary>
    /// 触发器更新事件
    /// </summary>

    std::vector<UpdateriggerEventData>& getEventData();
    bool eventDataIsSet() const;
    void unseteventData();
    void setEventData(const std::vector<UpdateriggerEventData>& value);


protected:
    std::string triggerStatus_;
    bool triggerStatusIsSet_;
    std::vector<UpdateriggerEventData> eventData_;
    bool eventDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateTriggerRequestBody_H_
