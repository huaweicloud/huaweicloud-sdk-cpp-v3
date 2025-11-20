
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowDomainNameConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainNameConfigResponse();
    virtual ~ShowDomainNameConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainNameConfigResponse members

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 源站类型，0 - 源站IP， 1 - 源站域名
    /// </summary>

    int32_t getRealServerType() const;
    bool realServerTypeIsSet() const;
    void unsetrealServerType();
    void setRealServerType(int32_t value);

    /// <summary>
    /// HTTP端口，与port_https不能同时为空。DDoS高防支持的HTTP端口可在控制台查看。
    /// </summary>

    std::vector<int32_t>& getPortHttp();
    bool portHttpIsSet() const;
    void unsetportHttp();
    void setPortHttp(std::vector<int32_t> value);

    /// <summary>
    /// HTTPS端口，与port_http不能同时为空。DDoS高防支持的HTTPS端口可在控制台查看。
    /// </summary>

    std::vector<int32_t>& getPortHttps();
    bool portHttpsIsSet() const;
    void unsetportHttps();
    void setPortHttps(std::vector<int32_t> value);

    /// <summary>
    /// 源站ip/源站域名
    /// </summary>

    std::string getRealServer() const;
    bool realServerIsSet() const;
    void unsetrealServer();
    void setRealServer(const std::string& value);

    /// <summary>
    /// pp是否开启, 1-开启，0-关闭
    /// </summary>

    int32_t getPpEnable() const;
    bool ppEnableIsSet() const;
    void unsetppEnable();
    void setPpEnable(int32_t value);

    /// <summary>
    /// 防护区域,0-大陆,1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);

    /// <summary>
    /// tls(请求参数type&#x3D;waf时)
    /// </summary>

    std::string getTls() const;
    bool tlsIsSet() const;
    void unsettls();
    void setTls(const std::string& value);

    /// <summary>
    /// 加密套件(请求参数type&#x3D;waf时)
    /// </summary>

    std::string getCipher() const;
    bool cipherIsSet() const;
    void unsetcipher();
    void setCipher(const std::string& value);

    /// <summary>
    /// 是否允许http2(请求参数type&#x3D;waf时)
    /// </summary>

    bool isHttp2Enable() const;
    bool http2EnableIsSet() const;
    void unsethttp2Enable();
    void setHttp2Enable(bool value);

    /// <summary>
    /// 字段转发(请求参数type&#x3D;waf时)
    /// </summary>

    Object getHeaderMap() const;
    bool headerMapIsSet() const;
    void unsetheaderMap();
    void setHeaderMap(const Object& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::vector<int32_t> portHttp_;
    bool portHttpIsSet_;
    std::vector<int32_t> portHttps_;
    bool portHttpsIsSet_;
    std::string realServer_;
    bool realServerIsSet_;
    int32_t ppEnable_;
    bool ppEnableIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;
    std::string tls_;
    bool tlsIsSet_;
    std::string cipher_;
    bool cipherIsSet_;
    bool http2Enable_;
    bool http2EnableIsSet_;
    Object headerMap_;
    bool headerMapIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDomainNameConfigResponse_H_
