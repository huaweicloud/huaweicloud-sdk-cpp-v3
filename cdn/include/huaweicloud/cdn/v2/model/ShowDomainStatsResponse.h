
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainStatsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainStatsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainStatsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainStatsResponse();
    virtual ~ShowDomainStatsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainStatsResponse members

    /// <summary>
    /// **参数解释：** 数据分组方式 **取值范围：** domain：按域名分组 **默认取值：** 不分组
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询起始时间戳 **取值范围：** 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释：** 查询结束时间戳 **取值范围：** 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释：** 统计指标类型 **取值范围：** - flux：流量 - req_num：请求总数
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询数据类型 **取值范围：** - summary：汇总数据 - detail：明细数据
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询时间粒度 **取值范围：** - 300：采样时间间隔为5分钟，单位：秒 - 3600：采样时间间隔为1小时，单位：秒 - 86400：采样时间间隔为1天，单位：秒 **默认取值：** 默认取对应时间跨度的最小间隔 &gt; 时间跨度小于等于7天，最小时间间隔为300；时间跨度大于7天，最小时间间隔为3600
    /// </summary>

    int64_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int64_t value);

    /// <summary>
    /// **参数解释：** 按指定的分组方式组织的数据 **取值范围：** 不涉及
    /// </summary>

    std::map<std::string, Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, Object>& value);


protected:
    std::string groupBy_;
    bool groupByIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::string action_;
    bool actionIsSet_;
    int64_t interval_;
    bool intervalIsSet_;
    std::map<std::string, Object> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainStatsResponse_H_
