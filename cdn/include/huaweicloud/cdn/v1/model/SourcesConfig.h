
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_SourcesConfig_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_SourcesConfig_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 源站配置。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  SourcesConfig
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
    /// 源站IP或者域名。
    /// </summary>

    std::string getOriginAddr() const;
    bool originAddrIsSet() const;
    void unsetoriginAddr();
    void setOriginAddr(const std::string& value);

    /// <summary>
    /// 源站类型， ipaddr：源站IP，domain：源站域名，obs_bucket：OBS桶域名。
    /// </summary>

    std::string getOriginType() const;
    bool originTypeIsSet() const;
    void unsetoriginType();
    void setOriginType(const std::string& value);

    /// <summary>
    /// 源站优先级（70：主，30：备）。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 是否开启Obs静态网站托管，源站类型为obs_bucket时传递(off：关闭，on：开启)。
    /// </summary>

    std::string getObsWebHostingStatus() const;
    bool obsWebHostingStatusIsSet() const;
    void unsetobsWebHostingStatus();
    void setObsWebHostingStatus(const std::string& value);

    /// <summary>
    /// HTTP端口，默认80。
    /// </summary>

    int32_t getHttpPort() const;
    bool httpPortIsSet() const;
    void unsethttpPort();
    void setHttpPort(int32_t value);

    /// <summary>
    /// HTTPS端口，默认443。
    /// </summary>

    int32_t getHttpsPort() const;
    bool httpsPortIsSet() const;
    void unsethttpsPort();
    void setHttpsPort(int32_t value);

    /// <summary>
    /// 回源HOST，默认加速域名。
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);


protected:
    std::string originAddr_;
    bool originAddrIsSet_;
    std::string originType_;
    bool originTypeIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::string obsWebHostingStatus_;
    bool obsWebHostingStatusIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_SourcesConfig_H_
