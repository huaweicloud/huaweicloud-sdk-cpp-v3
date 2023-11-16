
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_RequestLimitRules_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_RequestLimitRules_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求限速配置。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  RequestLimitRules
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
    /// status只支持on，off无效。  &gt; request_limit_rules字段置空时代表关闭请求限速功能。  &gt; 旧接口中的参数，后续将下线。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 优先级，值越大，优先级越高,取值范围：1-100。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 匹配类型，all：所有文件，catalog：目录。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// 匹配类型值。 当match_type为all时传空值，例如：\&quot;\&quot;； 当match_type为catalog时传目录地址，以“/”作为首字符,例如：\&quot;/test\&quot;。  &gt; 值为catalog的时候必填
    /// </summary>

    std::string getMatchValue() const;
    bool matchValueIsSet() const;
    void unsetmatchValue();
    void setMatchValue(const std::string& value);

    /// <summary>
    /// 限速方式，当前仅支持按流量大小限速，取值为size。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 限速条件,type&#x3D;size,limit_rate_after&#x3D;50表示从传输表示传输50个字节后开始限速且限速值为limit_rate_value， 单位byte，取值范围：0-1073741824。
    /// </summary>

    int64_t getLimitRateAfter() const;
    bool limitRateAfterIsSet() const;
    void unsetlimitRateAfter();
    void setLimitRateAfter(int64_t value);

    /// <summary>
    /// 限速值,单位Bps，取值范围 0-104857600。
    /// </summary>

    int32_t getLimitRateValue() const;
    bool limitRateValueIsSet() const;
    void unsetlimitRateValue();
    void setLimitRateValue(int32_t value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_RequestLimitRules_H_
