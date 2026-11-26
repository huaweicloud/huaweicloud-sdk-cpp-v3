
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// **参数解释：** 请求限速配置 **约束限制：** 不涉及
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
    /// **参数解释：** 是否开启请求限速 - 此为旧接口中的参数，后续将下线  **约束限制：** - request_limit_rules字段置空时代表关闭请求限速功能 - 只支持on，off无效  **取值范围：** on **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 优先级 &gt; 数值越大优先级越高  **约束限制：** 优先级不能相同 **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 匹配类型 **约束限制：** 不涉及 **取值范围：** - all：所有文件 - catalog：目录  **默认取值：** 不涉及
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配类型值 **约束限制：** - 当match_type为all时传空值，例如：\&quot;\&quot; - 当match_type为catalog时传目录地址，以“/”作为首字符,例如：\&quot;/test\&quot; - 值为catalog的时候必填  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchValue() const;
    bool matchValueIsSet() const;
    void unsetmatchValue();
    void setMatchValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 限速方式 **约束限制：** 当前仅支持按流量大小限速，取值为size **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 限速条件 &gt; 例如：type&#x3D;size，limit_rate_after&#x3D;50表示从传输50个字节后开始限速且限速值为limit_rate_value  **约束限制：** 不涉及 **取值范围：** 0-1073741824，单位：byte **默认取值：** 不涉及
    /// </summary>

    int64_t getLimitRateAfter() const;
    bool limitRateAfterIsSet() const;
    void unsetlimitRateAfter();
    void setLimitRateAfter(int64_t value);

    /// <summary>
    /// **参数解释：** 限速值，即达到限速条件后的最大访问速度 **约束限制：** 不涉及 **取值范围：** 0-104857600，单位：Bps **默认取值：** 不涉及
    /// </summary>

    int32_t getLimitRateValue() const;
    bool limitRateValueIsSet() const;
    void unsetlimitRateValue();
    void setLimitRateValue(int32_t value);

    /// <summary>
    /// **参数解释：** 指明限速的时段 **约束限制：** - 按照每天24小时设置限速时段，格式为：HHMM-HHMM（HH为时，MM为分，时区为UTC+8） - 多个时段限速时用“,”分隔，例如：0100-0200,2200-2300 - 最多可配置10个时段  **取值范围：** 不涉及 **默认取值：** 0000-2400
    /// </summary>

    std::string getLimitTime() const;
    bool limitTimeIsSet() const;
    void unsetlimitTime();
    void setLimitTime(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string matchValue_;
    bool matchValueIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t limitRateAfter_;
    bool limitRateAfterIsSet_;
    int32_t limitRateValue_;
    bool limitRateValueIsSet_;
    std::string limitTime_;
    bool limitTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRules_H_
