
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Quotas_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Quotas_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Quotas
    : public ModelBase
{
public:
    Quotas();
    virtual ~Quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Quotas members

    /// <summary>
    /// 配额上限。
    /// </summary>

    int32_t getQuotaLimit() const;
    bool quotaLimitIsSet() const;
    void unsetquotaLimit();
    void setQuotaLimit(int32_t value);

    /// <summary>
    /// 配额类型。取值意义： - file_refresh：文件级别刷新配额 - dir_refresh：目录级别刷新配额 - preheat：预热配额 - domain：加速域名配额 - ip_filter：IP黑白名单配额 - browser_cache_rule：浏览器缓存规则配额 - http_response_header：HTTP响应头配额 - referer：REFERER防盗链配额 - flexible_origin：高级回源配额 - flexible_origin_match_value：高级回源匹配内容配额 - cache_rule：缓存规则配额 - custom_cache_key：自定义CACHE KEY配额 - custom_cache_key_match_value：自定义CACHE KEY匹配内容配额 - rule：规则引擎配额 - edge_function：函数阶段配额 - origin_request_url_rewrite：回源URL改写配额 - origin_request_header：回源请求头配额 - request_url_rewrite：请求URL改写配额 - access_area_filter：区域访问控制配额 - request_limit_rules：请求限速配置配额 - user_agent：UA配额
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已使用配额数。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 域名所属用户的domain_id。
    /// </summary>

    std::string getUserDomainId() const;
    bool userDomainIdIsSet() const;
    void unsetuserDomainId();
    void setUserDomainId(const std::string& value);


protected:
    int32_t quotaLimit_;
    bool quotaLimitIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string userDomainId_;
    bool userDomainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Quotas_H_
