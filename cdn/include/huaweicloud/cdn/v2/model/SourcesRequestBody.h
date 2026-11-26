
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesRequestBody_H_


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
/// 源站信息
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SourcesRequestBody
    : public ModelBase
{
public:
    SourcesRequestBody();
    virtual ~SourcesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourcesRequestBody members

    /// <summary>
    /// **参数解释：** 加速域名ID，系统自动生成，创建域名时无需传入此参数 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站IP或者域名 **约束限制：** 不能配置内网IP **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站类型 **约束限制：** 不涉及 **取值范围：** - ipaddr: 源站IP - domain: 源站域名 - obs_bucket: OBS桶域名  **默认取值：** 不涉及
    /// </summary>

    std::string getOriginType() const;
    bool originTypeIsSet() const;
    void unsetoriginType();
    void setOriginType(const std::string& value);

    /// <summary>
    /// **参数解释：** OBS回源鉴权开关，适用于OBS桶源站场景，如果桶需要带鉴权访问，则需要打开OBS回源鉴权开关。如此，CDN节点回源时会携带鉴权信息，鉴权信息与OBS桶不匹配时，回源失败，避免非授权的请求盗刷流量 **约束限制：** 源站类型是“OBS桶域名”时需要传该参数 **取值范围：** - private: 开启回源鉴权开关 - public: 关闭回源鉴权开关  **默认取值：** public: 关闭回源鉴权开关
    /// </summary>

    std::string getObsBucketType() const;
    bool obsBucketTypeIsSet() const;
    void unsetobsBucketType();
    void setObsBucketType(const std::string& value);

    /// <summary>
    /// **参数解释：** 设置主/备源站，主源站优先级高于备源站，CDN节点回源时优先回到主源站 &gt;- 主源站优先级默认为70，备源站优先级默认为30。  **约束限制：** 与priority二者至少传一个，同时存在时以priority为准 **取值范围：** - 1: 主源站 - 0: 备源站  **默认取值：** 不涉及
    /// </summary>

    int32_t getActiveStandby() const;
    bool activeStandbyIsSet() const;
    void unsetactiveStandby();
    void setActiveStandby(int32_t value);

    /// <summary>
    /// **参数解释：** 源站优先级，数值越大优先级越高，创建域名时可用于替代active_standby指定源站优先级 **约束限制：** - 与active_standby二者至少传一个，同时存在时以priority为准 - 不同优先级数量不超过6个  **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 权重，值越大回源到该源站的次数越多。多个优先级相同的源站，由权重决定回源到各个源站的比例 **约束限制：** 不涉及 **取值范围：** 1-100 **默认取值：** 50
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 回源HOST **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 加速域名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启静态网站托管功能，如果您的源站是OBS桶域名且配置了静态网站托管，开启该功能后，客户端即可访问静态网站托管页面 &gt; 开启该功能后将自动给桶源站地址加上website字段，如果地址中已有website字段，该参数不生效 **约束限制：** - 源站类型为obs_bucket时需要传该参数 - 只有当源站OBS桶已经开启静态网站托管时，才可开启，否则将导致业务异常  **取值范围：** - 0: 关闭 - 1: 开启  **默认取值：** 0: 关闭
    /// </summary>

    int32_t getEnableObsWebHosting() const;
    bool enableObsWebHostingIsSet() const;
    void unsetenableObsWebHosting();
    void setEnableObsWebHosting(int32_t value);

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


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string ipOrDomain_;
    bool ipOrDomainIsSet_;
    std::string originType_;
    bool originTypeIsSet_;
    std::string obsBucketType_;
    bool obsBucketTypeIsSet_;
    int32_t activeStandby_;
    bool activeStandbyIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    int32_t enableObsWebHosting_;
    bool enableObsWebHostingIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesRequestBody_H_
