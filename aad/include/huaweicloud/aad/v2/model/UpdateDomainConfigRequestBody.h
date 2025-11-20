
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  UpdateDomainConfigRequestBody
    : public ModelBase
{
public:
    UpdateDomainConfigRequestBody();
    virtual ~UpdateDomainConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainConfigRequestBody members

    /// <summary>
    /// 源站类型。 0 - 源站IP， 1 - 源站域名。
    /// </summary>

    int32_t getRealServerType() const;
    bool realServerTypeIsSet() const;
    void unsetrealServerType();
    void setRealServerType(int32_t value);

    /// <summary>
    /// 源站ip/源站域名
    /// </summary>

    std::string getRealServer() const;
    bool realServerIsSet() const;
    void unsetrealServer();
    void setRealServer(const std::string& value);

    /// <summary>
    /// HTTP端口，与port_https不能同时为空。DDoS高防支持的HTTP端口可用ListDomainPort接口查询。
    /// </summary>

    std::vector<int32_t>& getPortHttp();
    bool portHttpIsSet() const;
    void unsetportHttp();
    void setPortHttp(std::vector<int32_t> value);

    /// <summary>
    /// HTTPS端口，与port_http不能同时为空。DDoS高防支持的HTTPS端口可用ListDomainPort接口查询。
    /// </summary>

    std::vector<int32_t>& getPortHttps();
    bool portHttpsIsSet() const;
    void unsetportHttps();
    void setPortHttps(std::vector<int32_t> value);

    /// <summary>
    /// 防护区域：0-中国大陆、1-中国大陆外
    /// </summary>

    std::string getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(const std::string& value);

    /// <summary>
    /// 证书名称
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);


protected:
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::string realServer_;
    bool realServerIsSet_;
    std::vector<int32_t> portHttp_;
    bool portHttpIsSet_;
    std::vector<int32_t> portHttps_;
    bool portHttpsIsSet_;
    std::string overseasType_;
    bool overseasTypeIsSet_;
    std::string certName_;
    bool certNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequestBody_H_
