
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListScheduledEventsRequest
    : public ModelBase
{
public:
    ListScheduledEventsRequest();
    virtual ~ListScheduledEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduledEventsRequest members

    /// <summary>
    /// 从marker指定的事件的下一条数据开始查询。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 事件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::vector<std::string>& getInstanceId();
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 事件类型
    /// </summary>

    std::vector<std::string>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<std::string>& value);

    /// <summary>
    /// 事件状态
    /// </summary>

    std::vector<std::string>& getState();
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::vector<std::string>& value);

    /// <summary>
    /// 事件发布开始时间
    /// </summary>

    std::string getPublishSince() const;
    bool publishSinceIsSet() const;
    void unsetpublishSince();
    void setPublishSince(const std::string& value);

    /// <summary>
    /// 事件发布截至时间
    /// </summary>

    std::string getPublishUntil() const;
    bool publishUntilIsSet() const;
    void unsetpublishUntil();
    void setPublishUntil(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> instanceId_;
    bool instanceIdIsSet_;
    std::vector<std::string> type_;
    bool typeIsSet_;
    std::vector<std::string> state_;
    bool stateIsSet_;
    std::string publishSince_;
    bool publishSinceIsSet_;
    std::string publishUntil_;
    bool publishUntilIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListScheduledEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ListScheduledEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListScheduledEventsRequest_H_
