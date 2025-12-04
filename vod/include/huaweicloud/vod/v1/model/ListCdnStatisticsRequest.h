
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListCdnStatisticsRequest
    : public ModelBase
{
public:
    ListCdnStatisticsRequest();
    virtual ~ListCdnStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnStatisticsRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 开始时间，格式为yyyymmddhhmmss。   - interval为300时，end_time设置为整5分钟时刻点，如：20240601000000。   - interval为3600时，end_time设置为整小时时刻点，如：20240601120000。   - interval为86400时，end_time设置为东8区零点时刻点，如：20240601000000。   - 只能查询最近三个月内的数据，且时间跨度不能超过31天。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式为yyyymmddhhmmss。   - interval为300时，end_time设置为整5分钟时刻点，如：20240601000000。   - interval为3600时，end_time设置为整小时时刻点，如：20240601120000。   - interval为86400时，end_time设置为东8区零点时刻点，如：20240601000000。   - 只能查询最近三个月内的数据，且时间跨度不能超过31天。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 统计数据类型。  取值如下： - bw：CDN峰值带宽 - flux：CDN流量 - req_num：请求总数 - req_hit_rate：请求命中率 - flux_hit_rate：流量命中率 - http_code_2xx 状态码汇总2xx - http_code_3xx 状态码汇总3xx - http_code_4xx 状态码汇总4xx - http_code_5xx 状态码汇总5xx  每次只能查询一种统计数据。
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// 域名列表，多个域名以逗号（半角）分隔。  示例：example.test1.com,example.test2.com。  ALL表示查询名下全部域名。一次最多查询20个域名。
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 查询粒度间隔。  取值如下： - 300(5分钟)：最大查询跨度2天。 - 3600(1小时)：最大查询跨度7天。 - 86400(1天)：最大查询跨度31天，最少跨度为2天。  单位：秒。  若不设置，小于1天 300，大于1天小于7天3600，大于7天86400。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::string domain_;
    bool domainIsSet_;
    int32_t interval_;
    bool intervalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCdnStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCdnStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCdnStatisticsRequest_H_
