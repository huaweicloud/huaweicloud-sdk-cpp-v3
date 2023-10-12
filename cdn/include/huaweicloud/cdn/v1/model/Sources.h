
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Sources_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Sources_H_


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
/// 源站信息。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Sources
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
    /// 源站类型取值：ipaddr：源站IP、 domain：源站域名、obs_bucket：OBS桶域名。源站为ipaddr时，仅支持IPv4，如需传入多个源站IP，以多个源站对象传入，除IP其他参数请保持一致，主源站最多支持50个源站IP对象，备源站最多支持50个源站IP对象；源站为domain时，仅支持1个源站对象。不支持IP源站和域名源站混用。
    /// </summary>

    std::string getOriginType() const;
    bool originTypeIsSet() const;
    void unsetoriginType();
    void setOriginType(const std::string& value);

    /// <summary>
    /// 源站IP（非内网IP）或者域名。
    /// </summary>

    std::string getIpOrDomain() const;
    bool ipOrDomainIsSet() const;
    void unsetipOrDomain();
    void setIpOrDomain(const std::string& value);

    /// <summary>
    /// 主备状态，1代表主源站，0代表备源站。
    /// </summary>

    int32_t getActiveStandby() const;
    bool activeStandbyIsSet() const;
    void unsetactiveStandby();
    void setActiveStandby(int32_t value);

    /// <summary>
    /// 是否开启Obs静态网站托管(0表示关闭,1表示则为开启)，源站类型为obs_bucket时传递。
    /// </summary>

    int32_t getEnableObsWebHosting() const;
    bool enableObsWebHostingIsSet() const;
    void unsetenableObsWebHosting();
    void setEnableObsWebHosting(int32_t value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string originType_;
    bool originTypeIsSet_;
    std::string ipOrDomain_;
    bool ipOrDomainIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Sources_H_
