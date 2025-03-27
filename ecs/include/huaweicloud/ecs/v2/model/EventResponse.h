
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/EventResponse_source.h>
#include <string>
#include <huaweicloud/ecs/v2/model/EventResponse_execute_options.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  EventResponse
    : public ModelBase
{
public:
    EventResponse();
    virtual ~EventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventResponse members

    /// <summary>
    /// 事件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 事件类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 事件状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 事件发布时间
    /// </summary>

    std::string getPublishTime() const;
    bool publishTimeIsSet() const;
    void unsetpublishTime();
    void setPublishTime(const std::string& value);

    /// <summary>
    /// 事件开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 事件完成时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 事件计划执行开始时间
    /// </summary>

    std::string getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const std::string& value);

    /// <summary>
    /// 事件计划执行完成时间
    /// </summary>

    std::string getNotAfter() const;
    bool notAfterIsSet() const;
    void unsetnotAfter();
    void setNotAfter(const std::string& value);

    /// <summary>
    /// 事件计划执行开始时间deadline
    /// </summary>

    std::string getNotBeforeDeadline() const;
    bool notBeforeDeadlineIsSet() const;
    void unsetnotBeforeDeadline();
    void setNotBeforeDeadline(const std::string& value);

    /// <summary>
    /// 事件描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EventResponse_execute_options getExecuteOptions() const;
    bool executeOptionsIsSet() const;
    void unsetexecuteOptions();
    void setExecuteOptions(const EventResponse_execute_options& value);

    /// <summary>
    /// 
    /// </summary>

    EventResponse_source getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const EventResponse_source& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string publishTime_;
    bool publishTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string notBefore_;
    bool notBeforeIsSet_;
    std::string notAfter_;
    bool notAfterIsSet_;
    std::string notBeforeDeadline_;
    bool notBeforeDeadlineIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    EventResponse_execute_options executeOptions_;
    bool executeOptionsIsSet_;
    EventResponse_source source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_H_
