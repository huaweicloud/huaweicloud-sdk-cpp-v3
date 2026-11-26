
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SourceWithPort_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SourceWithPort_H_


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
/// 域名信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SourceWithPort
    : public ModelBase
{
public:
    SourceWithPort();
    virtual ~SourceWithPort();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourceWithPort members

    /// <summary>
    /// **参数解释：** 加速域名id。 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站IP（非内网IP）或者域名。 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// 源站类型，ipaddr：源站IP、 domain：源站域名、obs_bucket：OBS桶域名。
    /// </summary>

    std::string getOriginType() const;
    bool originTypeIsSet() const;
    void unsetoriginType();
    void setOriginType(const std::string& value);

    /// <summary>
    /// OBS桶类型。   - private: 私有桶（除桶ACL授权外的其他用户无桶的访问权限）。   - public: 公有桶（任何用户都可以对桶内对象进行读操作）。
    /// </summary>

    std::string getObsBucketType() const;
    bool obsBucketTypeIsSet() const;
    void unsetobsBucketType();
    void setObsBucketType(const std::string& value);

    /// <summary>
    /// 主备状态（1代表主源站；0代表备源站）。
    /// </summary>

    int32_t getActiveStandby() const;
    bool activeStandbyIsSet() const;
    void unsetactiveStandby();
    void setActiveStandby(int32_t value);

    /// <summary>
    /// **参数解释：** 是否开启静态网站托管功能，如果您的源站是OBS桶域名且配置了静态网站托管，开启该功能后，客户端即可访问静态网站托管页面 &gt; 开启该功能后将自动给桶源站地址加上website字段，如果地址中已有website字段，该参数不生效 **约束限制：** - 源站类型为obs_bucket时需要传该参数 - 只有当源站OBS桶已经开启静态网站托管时，才可开启，否则将导致业务异常  **取值范围：** - 0: 关闭 - 1: 开启  **默认取值：** 0: 关闭
    /// </summary>

    int32_t getEnableObsWebHosting() const;
    bool enableObsWebHostingIsSet() const;
    void unsetenableObsWebHosting();
    void setEnableObsWebHosting(int32_t value);

    /// <summary>
    /// **参数解释：** HTTP端口，默认80 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    int32_t getHttpPort() const;
    bool httpPortIsSet() const;
    void unsethttpPort();
    void setHttpPort(int32_t value);

    /// <summary>
    /// **参数解释：** HTTPS端口，默认443 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    int32_t getHttpsPort() const;
    bool httpsPortIsSet() const;
    void unsethttpsPort();
    void setHttpsPort(int32_t value);

    /// <summary>
    /// **参数解释：** 权重，值越大回源到该源站的次数越多。多个优先级相同的源站，由权重决定回源到各个源站的比例 **约束限制：** 不涉及 **取值范围：** 1-100 **默认取值：** 50
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


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
    int32_t enableObsWebHosting_;
    bool enableObsWebHostingIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SourceWithPort_H_
