
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListScheduleEventsRequest
    : public ModelBase
{
public:
    ListScheduleEventsRequest();
    virtual ~ListScheduleEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduleEventsRequest members

    /// <summary>
    /// **参数解释**：  事件ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件状态  **约束限制**：  不涉及。  **取值范围**：  枚举值：WAITING 等待中；INQUIRING 待授权; SCHEDULED 待执行; EXECUTING 执行中; COMPLETED 已完成; FAILED 失败; CANCELED 已取消。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件类型  **约束限制**：  不涉及。  **取值范围**：  枚举值：RESTAT_NODE 重启实例节点。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件级别  **约束限制**：  不涉及。  **取值范围**：  CRITICAL 紧急；MAJOR 重要；MINOR 一般；INFO 提示。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：  排序字段，支持planned_execution_time、created_time、latest_execution_time。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// **参数解释**：  排序顺序  **约束限制**：  不涉及。  **取值范围**：  DESC 降序；ASC升序   **默认取值**：  DESC 降序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释**：  索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：  查询记录数。默认为10，不能为负数，最小值为1，最大值为100。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string order_;
    bool orderIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListScheduleEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ListScheduleEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListScheduleEventsRequest_H_
