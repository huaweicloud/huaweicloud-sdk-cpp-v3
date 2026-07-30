
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EventUpdate.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AcceptScheduledEventRequest
    : public ModelBase
{
public:
    AcceptScheduledEventRequest();
    virtual ~AcceptScheduledEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AcceptScheduledEventRequest members

    /// <summary>
    /// **参数解释**：计划事件ID，取值查询计划事件列表接口的event_id字段。 **约束限制**：不涉及。 **取值范围**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，长度小于63 **默认取值**：不涉及。
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID，默认值为0，取值于查询workspaces列表的接口的id字段。 **约束限制**：系统自动生成，只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度小于63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EventUpdate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EventUpdate& value);


protected:
    std::string eventId_;
    bool eventIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    EventUpdate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AcceptScheduledEventRequest& dereference_from_shared_ptr(std::shared_ptr<AcceptScheduledEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AcceptScheduledEventRequest_H_
