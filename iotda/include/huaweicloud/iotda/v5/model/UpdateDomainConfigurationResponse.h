
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDomainConfigurationResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDomainConfigurationResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ServerCertificateConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDomainConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDomainConfigurationResponse();
    virtual ~UpdateDomainConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainConfigurationResponse members

    /// <summary>
    /// 域配置唯一标识ID
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// **参数说明**：自定义域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数说明**：应用协议场景，当前仅支持Device-MQTTS：设备接入MQTTS场景
    /// </summary>

    std::string getAccessProtocol() const;
    bool accessProtocolIsSet() const;
    void unsetaccessProtocol();
    void setAccessProtocol(const std::string& value);

    /// <summary>
    /// **参数说明**：自定义服务端证书ID
    /// </summary>

    std::string getServerCertificateId() const;
    bool serverCertificateIdIsSet() const;
    void unsetserverCertificateId();
    void setServerCertificateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerCertificateConfig getServerCertificateConfig() const;
    bool serverCertificateConfigIsSet() const;
    void unsetserverCertificateConfig();
    void setServerCertificateConfig(const ServerCertificateConfig& value);


protected:
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string accessProtocol_;
    bool accessProtocolIsSet_;
    std::string serverCertificateId_;
    bool serverCertificateIdIsSet_;
    ServerCertificateConfig serverCertificateConfig_;
    bool serverCertificateConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDomainConfigurationResponse_H_
