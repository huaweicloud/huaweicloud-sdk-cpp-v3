
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesConfig_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesConfig_H_


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
/// **参数解释：** 配置加速域名的源站，CDN通过加速域名将源站上需要加速的内容缓存到CDN节点，达到加速访问资源的效果 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SourcesConfig
    : public ModelBase
{
public:
    SourcesConfig();
    virtual ~SourcesConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourcesConfig members

    /// <summary>
    /// **参数解释：** 源站类型 **约束限制：** 不涉及 **取值范围：** - ipaddr: 源站IP - domain: 源站域名 - obs_bucket: OBS桶域名 - third_bucket: 第三方桶，使用该源站类型需要提交工单申请  **默认取值：** 不涉及
    /// </summary>

    std::string getOriginType() const;
    bool originTypeIsSet() const;
    void unsetoriginType();
    void setOriginType(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站IP或者域名 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getOriginAddr() const;
    bool originAddrIsSet() const;
    void unsetoriginAddr();
    void setOriginAddr(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站优先级 **约束限制：** 不涉及 **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 权重 **约束限制：** 不涉及 **取值范围：** 1-100 **默认取值：** 不涉及
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 是否开启静态网站托管功能，如果您的源站是OBS桶域名且配置了静态网站托管，开启该功能后，客户端即可访问静态网站托管页面 &gt; 开启该功能后将自动给桶源站地址加上website字段，如果地址中已有website字段，该参数不生效 **约束限制：** - 源站类型为obs_bucket时需要传该参数 - 只有当源站OBS桶已经开启静态网站托管时，才可开启，否则将导致业务异常  **取值范围：** - on: 开启 - off: 关闭  **默认取值：** 不涉及
    /// </summary>

    std::string getObsWebHostingStatus() const;
    bool obsWebHostingStatusIsSet() const;
    void unsetobsWebHostingStatus();
    void setObsWebHostingStatus(const std::string& value);

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
    /// **参数解释：** 回源HOST **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 加速域名
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// **参数解释：** OBS回源鉴权开关，适用于OBS桶源站场景，如果桶需要带鉴权访问，则需要打开OBS回源鉴权开关。如此，CDN节点回源时会携带鉴权信息，鉴权信息与OBS桶不匹配时，回源失败，避免非授权的请求盗刷流量 **约束限制：** 源站类型是“OBS桶域名”时需要传该参数 **取值范围：** - private: 开启回源鉴权开关 - public: 关闭回源鉴权开关  **默认取值：** public: 关闭回源鉴权开关
    /// </summary>

    std::string getObsBucketType() const;
    bool obsBucketTypeIsSet() const;
    void unsetobsBucketType();
    void setObsBucketType(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储访问密钥ID，即AK **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getBucketAccessKey() const;
    bool bucketAccessKeyIsSet() const;
    void unsetbucketAccessKey();
    void setBucketAccessKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 第三方对象存储私密访问密钥，即SK **约束限制：** 源站类型为第三方桶时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
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


protected:
    std::string originType_;
    bool originTypeIsSet_;
    std::string originAddr_;
    bool originAddrIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string obsWebHostingStatus_;
    bool obsWebHostingStatusIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SourcesConfig_H_
