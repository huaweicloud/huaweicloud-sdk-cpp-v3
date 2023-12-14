
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowPullSourcesConfigResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowPullSourcesConfigResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowPullSourcesConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPullSourcesConfigResponse();
    virtual ~ShowPullSourcesConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPullSourcesConfigResponse members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 回源方式。 - domain: 回源客户源站，源站地址是域名格式。回源域名，可配置多个，如果回源失败，将按照配置顺序进行轮循。 - ipaddr: 回源客户源站，源站地址是IP格式。回源IP，可配置多个，如果回源失败，将按照配置顺序进行轮循。同时，最多可以配置一个回源域名，如果配置，回源时httpflv HOST头填该域名，RTMP tcurl字段填该域名，否则按当前IP作为HOST。 - huawei: 回源华为源站，域名创建后的默认值。
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 回源域名列表，最多可配置10个。 - 当回源方式是“domain”时，此参数必选，域名配置多个时，如果回源失败，将按照配置顺序进行轮循。 - 当回源方式是“ipaddr”时，最多可以配置一个回源域名，如果配置，回源时httpflv HOST头填该域名，RTMP tcurl 字段填该域名，否则按当前IP作为HOST。
    /// </summary>

    std::vector<std::string>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<std::string>& value);

    /// <summary>
    /// 回源IP地址列表，最多可配置10个。当回源方式是“ipaddr”时，此参数必选，IP配置多个时，如果回源失败，将按照配置顺序进行轮循。
    /// </summary>

    std::vector<std::string>& getSourcesIp();
    bool sourcesIpIsSet() const;
    void unsetsourcesIp();
    void setSourcesIp(const std::vector<std::string>& value);

    /// <summary>
    /// 回源协议，回源方式非“huawei”时必选。
    /// </summary>

    std::string getScheme() const;
    bool schemeIsSet() const;
    void unsetscheme();
    void setScheme(const std::string& value);

    /// <summary>
    /// 回源客户源站时在URL携带的参数。
    /// </summary>

    std::map<std::string, std::string>& getAdditionalArgs();
    bool additionalArgsIsSet() const;
    void unsetadditionalArgs();
    void setAdditionalArgs(const std::map<std::string, std::string>& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::vector<std::string> sources_;
    bool sourcesIsSet_;
    std::vector<std::string> sourcesIp_;
    bool sourcesIpIsSet_;
    std::string scheme_;
    bool schemeIsSet_;
    std::map<std::string, std::string> additionalArgs_;
    bool additionalArgsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowPullSourcesConfigResponse_H_
