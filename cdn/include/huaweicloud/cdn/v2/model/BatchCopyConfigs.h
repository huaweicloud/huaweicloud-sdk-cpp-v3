
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyConfigs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyConfigs_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 需要复制的原域名配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyConfigs
    : public ModelBase
{
public:
    BatchCopyConfigs();
    virtual ~BatchCopyConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCopyConfigs members

    /// <summary>
    /// **参数解释：** 目标域名，即需要复制配置的域名，支持配置多个域名 **约束限制：** - 多个域名以“,”分隔 - 最多配置10个域名 - 域名状态为已开启、已停用、审核未通过且未被封禁和未被锁定时，才可以使用复制配置功能  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTargetDomain() const;
    bool targetDomainIsSet() const;
    void unsettargetDomain();
    void setTargetDomain(const std::string& value);

    /// <summary>
    /// **参数解释：** 原域名，将该域名的配置复制给目标域名 **约束限制：** 域名状态为已开启、已停用、审核未通过且未被封禁时，才可以使用复制配置功能 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSourceDomain() const;
    bool sourceDomainIsSet() const;
    void unsetsourceDomain();
    void setSourceDomain(const std::string& value);

    /// <summary>
    /// **参数解释：** 需要复制的域名配置项 **约束限制：** 多个配置项以“,”分隔 **取值范围：** - origin_request_header: 回源请求头 - http_response_header: HTTP header配置 - url_auth: URL鉴权配置 - user_agent_black_and_white_list: User-Agent黑白名单 - ipv6_accelerate: IPv6开关 - range_status: Range回源 - cache_rules: 缓存规则 - follow_302_status: 回源跟随 - sources: 源站配置 - compress: 智能压缩 - referer: 防盗链 - ip_black_and_white_list: IP黑白名单 - browser_cacheRules: 浏览器缓存过期时间 - cache_valid_error_code: 状态码缓存时间 - access_area_filter: 区域访问控制 - http2_status: HTTP/2 - ocsp_stapling_status: OCSP Stapling - force_redirect: 强制跳转 - https_tls_version: TLS版本与加密套件配置 - rules: 规则引擎 - error_code_redirect_rules: 自定义错误页面配置  **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getConfigList();
    bool configListIsSet() const;
    void unsetconfigList();
    void setConfigList(const std::vector<std::string>& value);


protected:
    std::string targetDomain_;
    bool targetDomainIsSet_;
    std::string sourceDomain_;
    bool sourceDomainIsSet_;
    std::vector<std::string> configList_;
    bool configListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyConfigs_H_
