
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRulesEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRulesEngine_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 请求限速，将用户请求速度限制在指定范围内，一定程度上减少突发高带宽风险，节省成本 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RequestLimitRulesEngine
    : public ModelBase
{
public:
    RequestLimitRulesEngine();
    virtual ~RequestLimitRulesEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequestLimitRulesEngine members

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


protected:
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestLimitRulesEngine_H_
