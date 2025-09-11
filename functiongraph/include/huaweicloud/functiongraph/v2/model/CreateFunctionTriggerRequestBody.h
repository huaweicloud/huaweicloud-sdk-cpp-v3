
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/TriggerEventDataRequestBody.h>
#include <string>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateFunctionTriggerRequestBody
    : public ModelBase
{
public:
    CreateFunctionTriggerRequestBody();
    virtual ~CreateFunctionTriggerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFunctionTriggerRequestBody members

    /// <summary>
    /// 触发器类型。  - TIMER: 定时触发器。 - APIG: APIGW触发器。 - CTS: 云审计触发器，需要先开通云审计服务。 - DDS: 文档数据库触发器，需要开启函数vpc。 - DMS: 分布式消息服务触发器，需要配置dms委托。 - DIS: 数据接入服务触发器，需要配置dis委托。 - LTS: 云审计日志服务触发器，需要配置lts委托。 - OBS: 对象存储服务触发器。 - KAFKA: 专享版本kafka触发器。
    /// </summary>

    std::string getTriggerTypeCode() const;
    bool triggerTypeCodeIsSet() const;
    void unsettriggerTypeCode();
    void setTriggerTypeCode(const std::string& value);

    /// <summary>
    /// 触发器状态，取值为ACTIVE,DISABLED。
    /// </summary>

    std::string getTriggerStatus() const;
    bool triggerStatusIsSet() const;
    void unsettriggerStatus();
    void setTriggerStatus(const std::string& value);

    /// <summary>
    /// 消息代码。
    /// </summary>

    std::string getEventTypeCode() const;
    bool eventTypeCodeIsSet() const;
    void unseteventTypeCode();
    void setEventTypeCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TriggerEventDataRequestBody getEventData() const;
    bool eventDataIsSet() const;
    void unseteventData();
    void setEventData(const TriggerEventDataRequestBody& value);


protected:
    std::string triggerTypeCode_;
    bool triggerTypeCodeIsSet_;
    std::string triggerStatus_;
    bool triggerStatusIsSet_;
    std::string eventTypeCode_;
    bool eventTypeCodeIsSet_;
    TriggerEventDataRequestBody eventData_;
    bool eventDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerRequestBody_H_
