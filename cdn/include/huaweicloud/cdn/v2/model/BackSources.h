
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BackSources_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BackSources_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 高级回源信息源站配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BackSources
    : public ModelBase
{
public:
    BackSources();
    virtual ~BackSources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackSources members

    /// <summary>
    /// 源站类型, ipaddr：源站IP，domain：源站域名，obs_bucket：OBS桶域名。
    /// </summary>

    std::string getSourcesType() const;
    bool sourcesTypeIsSet() const;
    void unsetsourcesType();
    void setSourcesType(const std::string& value);

    /// <summary>
    /// 源站IP或者域名。
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// obs桶类型， “private”： 私有桶， “public”： 公有桶。
    /// </summary>

    std::string getObsBucketType() const;
    bool obsBucketTypeIsSet() const;
    void unsetobsBucketType();
    void setObsBucketType(const std::string& value);

    /// <summary>
    /// HTTP端口，取值范围：1-65535。
    /// </summary>

    int32_t getHttpPort() const;
    bool httpPortIsSet() const;
    void unsethttpPort();
    void setHttpPort(int32_t value);

    /// <summary>
    /// HTTPS端口，取值范围：1-65535。
    /// </summary>

    int32_t getHttpsPort() const;
    bool httpsPortIsSet() const;
    void unsethttpsPort();
    void setHttpsPort(int32_t value);


protected:
    std::string sourcesType_;
    bool sourcesTypeIsSet_;
    std::string ipOrDomain_;
    bool ipOrDomainIsSet_;
    std::string obsBucketType_;
    bool obsBucketTypeIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BackSources_H_
