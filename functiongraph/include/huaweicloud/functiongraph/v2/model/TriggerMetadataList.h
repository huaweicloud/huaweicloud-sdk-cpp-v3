
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerMetadataList_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerMetadataList_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  TriggerMetadataList
    : public ModelBase
{
public:
    TriggerMetadataList();
    virtual ~TriggerMetadataList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TriggerMetadataList members

    /// <summary>
    /// 触发名称
    /// </summary>

    std::string getTriggerName() const;
    bool triggerNameIsSet() const;
    void unsettriggerName();
    void setTriggerName(const std::string& value);

    /// <summary>
    /// 触发器类型
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 事件类型
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// 事件数据
    /// </summary>

    std::string getEventData() const;
    bool eventDataIsSet() const;
    void unseteventData();
    void setEventData(const std::string& value);


protected:
    std::string triggerName_;
    bool triggerNameIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string eventData_;
    bool eventDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerMetadataList_H_
