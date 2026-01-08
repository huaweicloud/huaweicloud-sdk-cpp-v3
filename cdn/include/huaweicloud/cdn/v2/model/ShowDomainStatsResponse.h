
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
    /// 查询起始时间戳。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 参数类型支持：flux(流量)，req_num(请求总数)。
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则行为 **约束限制：** 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 查询时间间隔，单位：秒
    /// </summary>

    int64_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int64_t value);

    /// <summary>
    /// 按指定的分组方式组织的数据
    /// </summary>

    std::map<std::string, Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, Object>& value);


protected:
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
