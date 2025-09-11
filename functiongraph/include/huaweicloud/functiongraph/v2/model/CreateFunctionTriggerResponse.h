
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/TriggerEventDataResponseBody.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateFunctionTriggerResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFunctionTriggerResponse();
    virtual ~CreateFunctionTriggerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFunctionTriggerResponse members

    /// <summary>
    /// 触发器ID。
    /// </summary>

    std::string getTriggerId() const;
    bool triggerIdIsSet() const;
    void unsettriggerId();
    void setTriggerId(const std::string& value);

    /// <summary>
    /// 触发器类型。  - TIMER: \&quot;定时触发器。\&quot; - APIG: \&quot;APIG触发器。\&quot; - CTS: \&quot;云审计服务触发器。\&quot; - DDS: \&quot;文档数据库服务触发器。\&quot; - DMS: \&quot;分布式服务触发器。\&quot; - DIS: \&quot;数据接入服务触发器。\&quot; - LTS: \&quot;云日志服务触发器。\&quot; - OBS: \&quot;对象存储触发器。\&quot; - SMN: \&quot;消息通知服务触发器。\&quot; - KAFKA: \&quot;专享版消息通知服务触发器。\&quot;
    /// </summary>

    std::string getTriggerTypeCode() const;
    bool triggerTypeCodeIsSet() const;
    void unsettriggerTypeCode();
    void setTriggerTypeCode(const std::string& value);

    /// <summary>
    /// \&quot;触发器状态\&quot;  - ACTIVE: 启用状态。 - DISABLED: 禁用状态。
    /// </summary>

    std::string getTriggerStatus() const;
    bool triggerStatusIsSet() const;
    void unsettriggerStatus();
    void setTriggerStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TriggerEventDataResponseBody getEventData() const;
    bool eventDataIsSet() const;
    void unseteventData();
    void setEventData(const TriggerEventDataResponseBody& value);

    /// <summary>
    /// 最后更新时间。
    /// </summary>

    utility::datetime getLastUpdatedTime() const;
    bool lastUpdatedTimeIsSet() const;
    void unsetlastUpdatedTime();
    void setLastUpdatedTime(const utility::datetime& value);

    /// <summary>
    /// 触发器创建时间。
    /// </summary>

    utility::datetime getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const utility::datetime& value);


protected:
    std::string triggerId_;
    bool triggerIdIsSet_;
    std::string triggerTypeCode_;
    bool triggerTypeCodeIsSet_;
    std::string triggerStatus_;
    bool triggerStatusIsSet_;
    TriggerEventDataResponseBody eventData_;
    bool eventDataIsSet_;
    utility::datetime lastUpdatedTime_;
    bool lastUpdatedTimeIsSet_;
    utility::datetime createdTime_;
    bool createdTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateFunctionTriggerResponse_H_
