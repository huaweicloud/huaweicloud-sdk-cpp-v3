
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Sources_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Sources_H_


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
/// 源站信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Sources
    : public ModelBase
{
public:
    Sources();
    virtual ~Sources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Sources members

    /// <summary>
    /// 加速域名id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 源站IP（非内网IP）或者域名。
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// 源站类型取值：ipaddr：源站IP、 domain：源站域名、obs_bucket：OBS桶域名。
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
    /// 主备状态，1代表主源站，0代表备源站。
    /// </summary>

    int32_t getActiveStandby() const;
    bool activeStandbyIsSet() const;
    void unsetactiveStandby();
    void setActiveStandby(int32_t value);

    /// <summary>
    /// 是否开启OBS静态网站托管(0表示关闭,1表示则为开启)，源站类型为obs_bucket时传递。
    /// </summary>

    int32_t getEnableObsWebHosting() const;
    bool enableObsWebHostingIsSet() const;
    void unsetenableObsWebHosting();
    void setEnableObsWebHosting(int32_t value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Sources_H_
