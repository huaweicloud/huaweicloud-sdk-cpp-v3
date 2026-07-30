
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceEventsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceEventsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferServiceEventsRequest
    : public ModelBase
{
public:
    ListInferServiceEventsRequest();
    virtual ~ListInferServiceEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferServiceEventsRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 在线服务事件类型。 **约束限制：** 不涉及。 **取值范围：** - NORMAL：正常 - ABNORMAL：异常 - WARNING：警告 **默认取值：** 不涉及。
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件开始时间。 **约束限制：** 不涉及。 **取值范围：** 毫秒级时间戳，13位数字。 **默认取值：** 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释：** 事件结束时间。 **约束限制：** 不涉及。 **取值范围：** 毫秒级时间戳，13位数字。 **默认取值：** 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释：** 事件信息过滤关键字。 **约束限制：** 不支持&#39;\&quot;;%_*!@#$&amp;\\这些字符的查询。
    /// </summary>

    std::string getEventInfoKey() const;
    bool eventInfoKeyIsSet() const;
    void unseteventInfoKey();
    void setEventInfoKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 分页列表查询的偏移量。 **约束限制：** offset必须是limit的整数倍。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 排序字段，多个字段以\&quot;,\&quot;分隔，支持create_at, update_at，默认值update_at。 **约束限制：** 不涉及。 **取值范围：** - create_at：按创建时间排序。 - update_at：按更新时间排序。 **默认取值：** update_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式。 **约束限制：** 不涉及。 **取值范围：** - ASC: 递增排序。 - DESC: 递减排序。 **默认取值：** DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释：** 消息体的类型（格式）。 **约束限制：** 不涉及。 **取值范围：** - application/json - application/json;charset&#x3D;utf-8 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string eventInfoKey_;
    bool eventInfoKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferServiceEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferServiceEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceEventsRequest_H_
