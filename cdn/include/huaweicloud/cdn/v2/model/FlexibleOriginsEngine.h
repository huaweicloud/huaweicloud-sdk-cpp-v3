
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOriginsEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOriginsEngine_H_


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
/// **参数解释：** 高级回源，实现根据不同的资源类型或路径回源到不同源站 **约束限制：** 最多配置20条
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  FlexibleOriginsEngine
    : public ModelBase
{
public:
    FlexibleOriginsEngine();
    virtual ~FlexibleOriginsEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlexibleOriginsEngine members

    /// <summary>
    /// **参数解释：** 源站类型 **约束限制：** 不涉及 **取值范围：** - ipaddr: 源站IP - domain: 源站域名 - obs_bucket: OBS桶域名 - third_bucket: 第三方桶域名 **默认取值：** 不涉及
    /// </summary>

    std::string getSourcesType() const;
    bool sourcesTypeIsSet() const;
    void unsetsourcesType();
    void setSourcesType(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站IP或者域名 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// **参数解释：** OBS桶类型 **约束限制：** 源站类型是“OBS桶域名”时需要传该参数 **取值范围：** - private: 私有桶 - public: 公有桶 **默认取值：** public: 公有桶
    /// </summary>

    std::string getObsBucketType() const;
    bool obsBucketTypeIsSet() const;
    void unsetobsBucketType();
    void setObsBucketType(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储访问密钥 **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getBucketAccessKey() const;
    bool bucketAccessKeyIsSet() const;
    void unsetbucketAccessKey();
    void setBucketAccessKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储密钥 **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getBucketSecretKey() const;
    bool bucketSecretKeyIsSet() const;
    void unsetbucketSecretKey();
    void setBucketSecretKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储区域 **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getBucketRegion() const;
    bool bucketRegionIsSet() const;
    void unsetbucketRegion();
    void setBucketRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储名称 **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// **参数解释：** 回源HOST **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 加速域名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定CDN回源时的请求协议 **约束限制：** 不涉及 **取值范围：** - follow: 协议跟随 - http: http协议 - https: https协议 **默认取值：** http: http协议
    /// </summary>

    std::string getOriginProtocol() const;
    bool originProtocolIsSet() const;
    void unsetoriginProtocol();
    void setOriginProtocol(const std::string& value);

    /// <summary>
    /// **参数解释：** HTTP端口 **约束限制：** 不涉及 **取值范围：** 1-65535 **默认取值：** 80
    /// </summary>

    int32_t getHttpPort() const;
    bool httpPortIsSet() const;
    void unsethttpPort();
    void setHttpPort(int32_t value);

    /// <summary>
    /// **参数解释：** HTTPS端口 **约束限制：** 不涉及 **取值范围：** 1-65535 **默认取值：** 443
    /// </summary>

    int32_t getHttpsPort() const;
    bool httpsPortIsSet() const;
    void unsethttpsPort();
    void setHttpsPort(int32_t value);

    /// <summary>
    /// **参数解释：** 优先级，值越大优先级越高 **约束限制：** 不涉及 **取值范围：** 1-100 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 权重，值越大回源到该源站的次数越多。多个优先级相同的源站，由权重决定回源到各个源站的比例 **约束限制：** 不涉及 **取值范围：** 1-100 **默认取值：** 不涉及
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    std::string sourcesType_;
    bool sourcesTypeIsSet_;
    std::string ipOrDomain_;
    bool ipOrDomainIsSet_;
    std::string obsBucketType_;
    bool obsBucketTypeIsSet_;
    std::string bucketAccessKey_;
    bool bucketAccessKeyIsSet_;
    std::string bucketSecretKey_;
    bool bucketSecretKeyIsSet_;
    std::string bucketRegion_;
    bool bucketRegionIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string originProtocol_;
    bool originProtocolIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOriginsEngine_H_
