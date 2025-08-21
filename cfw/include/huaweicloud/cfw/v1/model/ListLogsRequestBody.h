
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/Filter.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询条件 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListLogsRequestBody
    : public ModelBase
{
public:
    ListLogsRequestBody();
    virtual ~ListLogsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogsRequestBody members

    /// <summary>
    /// **参数解释**： 过滤条件 **约束限制**： 不涉及 **取值范围**： 1-1024 **默认取值**： 不涉及
    /// </summary>

    std::vector<Filter>& getFilters();
    bool filtersIsSet() const;
    void unsetfilters();
    void setFilters(const std::vector<Filter>& value);

    /// <summary>
    /// **参数解释**： 每页显示个数 **约束限制**： 不涉及 **取值范围**： 1-1024 **默认取值**： 不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量 **约束限制**： 第一页为空，其他页不为空 **取值范围**： 相对于上一页的偏移量 **默认取值**： 不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 文档ID **约束限制**： 第一页为空，其他页不为空 **取值范围**： 上一次查询最后一条数据的log_id **默认取值**： 不涉及
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// **参数解释**： 下个日期 **约束限制**： 第一页为空，其他页不为空 **取值范围**： 查询流量日志时为上一次查询最后一条数据的end_time **默认取值**： 不涉及
    /// </summary>

    int64_t getNextDate() const;
    bool nextDateIsSet() const;
    void unsetnextDate();
    void setNextDate(int64_t value);

    /// <summary>
    /// **参数解释**： 开始时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 日志类型 **约束限制**： 不涉及 **取值范围**： internet为南北向日志、nat为nat场景日志，vpc为东西向日志，vgw为vgw场景日志 **默认取值**： 不涉及
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志类型 **约束限制**： 不涉及 **取值范围**： attack为攻击日志、acl 访问控制日志，flow 流量日志，url url日志 **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<Filter> filters_;
    bool filtersIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    int64_t nextDate_;
    bool nextDateIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsRequestBody_H_
