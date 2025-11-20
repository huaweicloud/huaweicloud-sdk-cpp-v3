
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServerCertificateConfig_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServerCertificateConfig_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务端证书配置结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServerCertificateConfig
    : public ModelBase
{
public:
    ServerCertificateConfig();
    virtual ~ServerCertificateConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerCertificateConfig members

    /// <summary>
    /// 是否开启服务端OCSP装订
    /// </summary>

    bool isOcspStaplingEnable() const;
    bool ocspStaplingEnableIsSet() const;
    void unsetocspStaplingEnable();
    void setOcspStaplingEnable(bool value);

    /// <summary>
    /// ocsp服务器端CA证书id，仅当ocsp服务器为https协议时支持配置。
    /// </summary>

    std::string getOcspServerCaId() const;
    bool ocspServerCaIdIsSet() const;
    void unsetocspServerCaId();
    void setOcspServerCaId(const std::string& value);

    /// <summary>
    /// 访问ocsp服务器是否开启SSL
    /// </summary>

    bool isOcspSslEnable() const;
    bool ocspSslEnableIsSet() const;
    void unsetocspSslEnable();
    void setOcspSslEnable(bool value);


protected:
    bool ocspStaplingEnable_;
    bool ocspStaplingEnableIsSet_;
    std::string ocspServerCaId_;
    bool ocspServerCaIdIsSet_;
    bool ocspSslEnable_;
    bool ocspSslEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServerCertificateConfig_H_
