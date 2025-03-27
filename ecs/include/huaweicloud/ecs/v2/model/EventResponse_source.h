
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_source_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_source_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  EventResponse_source
    : public ModelBase
{
public:
    EventResponse_source();
    virtual ~EventResponse_source();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventResponse_source members

    /// <summary>
    /// 计划事件来源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 主机计划事件ID
    /// </summary>

    std::string getHostScheduledEventId() const;
    bool hostScheduledEventIdIsSet() const;
    void unsethostScheduledEventId();
    void setHostScheduledEventId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string hostScheduledEventId_;
    bool hostScheduledEventIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_source_H_
