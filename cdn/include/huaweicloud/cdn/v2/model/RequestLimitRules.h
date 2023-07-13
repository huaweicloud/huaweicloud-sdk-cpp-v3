
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求限速配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RequestLimitRules
    : public ModelBase
{
public:
    RequestLimitRules();
    virtual ~RequestLimitRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RequestLimitRules members

    /// <summary>
    /// 状态, on：开启，off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 限速方式，目前只支持按传送流量限速，当单个HTTP请求流量达到设定的值，开始限制访问速度。  &gt; size:按传送流量限速。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 限速条件,type&#x3D;size,limit_rate_after&#x3D;50表示从传输传输50个字节后开始限速且限速值为limit_rate_value，  &gt; 单位byte，取值范围：0-1073741824。
    /// </summary>

    int64_t getLimitRateAfter() const;
    bool limitRateAfterIsSet() const;
    void unsetlimitRateAfter();
    void setLimitRateAfter(int64_t value);

    /// <summary>
    /// 限速值,设置开始限速后的最大访问速度。  &gt; 单位Bps，取值范围 0-104857600
    /// </summary>

    int32_t getLimitRateValue() const;
    bool limitRateValueIsSet() const;
    void unsetlimitRateValue();
    void setLimitRateValue(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t limitRateAfter_;
    bool limitRateAfterIsSet_;
    int32_t limitRateValue_;
    bool limitRateValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_
