
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewriteEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewriteEngine_H_


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
/// **参数解释：** 改写回源URL **约束限制：** 最多配置20条
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  OriginRequestUrlRewriteEngine
    : public ModelBase
{
public:
    OriginRequestUrlRewriteEngine();
    virtual ~OriginRequestUrlRewriteEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OriginRequestUrlRewriteEngine members

    /// <summary>
    /// **参数解释：** 改写方式 **约束限制：** 不涉及 **取值范围：** - simple: 精确改写 - wildcard: 捕获改写 - regex: 正则改写（白名单功能，请提交工单开放该配置） **默认取值：** 不涉及
    /// </summary>

    std::string getRewriteType() const;
    bool rewriteTypeIsSet() const;
    void unsetrewriteType();
    void setRewriteType(const std::string& value);

    /// <summary>
    /// **参数解释：** 需要替换的URI **约束限制：** 当rewrite_type为wildcard或regex时，该参数必填 当rewrite_type为regex时，该参数必填必须以“^/”开始，如：^/test **取值范围：** - 1-512个字符 - 支持通配符\\*匹配，如：/test/\\*_/\\*.mp4 - 以正斜线（/）开头的URI，不含http(s)://头及域名 **默认取值：** 不涉及
    /// </summary>

    std::string getSourceUrl() const;
    bool sourceUrlIsSet() const;
    void unsetsourceUrl();
    void setSourceUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 替换后的URI **约束限制：** **取值范围：** - 1-256个字符 - 以正斜线（/）开头的URI，不含http(s)://头及域名  &gt; 通配符 * 可通过$n捕获（n&#x3D;1,2,3...，例如：/newtest/$1/$2.jpg）  **默认取值：** 不涉及
    /// </summary>

    std::string getTargetUrl() const;
    bool targetUrlIsSet() const;
    void unsettargetUrl();
    void setTargetUrl(const std::string& value);


protected:
    std::string rewriteType_;
    bool rewriteTypeIsSet_;
    std::string sourceUrl_;
    bool sourceUrlIsSet_;
    std::string targetUrl_;
    bool targetUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewriteEngine_H_
