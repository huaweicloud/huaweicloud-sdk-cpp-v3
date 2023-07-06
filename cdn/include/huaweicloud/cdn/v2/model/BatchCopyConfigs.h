
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyConfigs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyConfigs_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 需要复制的原域名配置。
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
    /// 目标域名列表,多个域名以逗号（半角）分隔,域名数最大10个。
    /// </summary>

    std::string getTargetDomain() const;
    bool targetDomainIsSet() const;
    void unsettargetDomain();
    void setTargetDomain(const std::string& value);

    /// <summary>
    /// 原域名。
    /// </summary>

    std::string getSourceDomain() const;
    bool sourceDomainIsSet() const;
    void unsetsourceDomain();
    void setSourceDomain(const std::string& value);

    /// <summary>
    /// 需要复制的域名配置项,多个配置项以逗号（半角）分隔，支持复制的配置项： - originRequestHeader（回源请求头） - httpResponseHeader（HTTP header配置） - cacheUrlParamsConfig（URL参数） - urlAuth（URL鉴权配置） - userAgentBlackAndWhiteList（User-Agent黑白名单） - ipv6Accelerate（IPv6开关） - rangeStatus（Range回源） - cacheRules（缓存规则） - followOrigin（缓存遵循源站） - privateBucketRetrieval（私有桶回源） - follow302Status（回源跟随） - sources（源站配置） - compress（智能压缩） - referer（防盗链） - ipBlackAndWhiteList（IP黑白名单）
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
