
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_EndpointSslConfig_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_EndpointSslConfig_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库SSL证书信息体。如果数据库启用了SSL安全连接，请确保相关配置正确，并输入SSL证书相关参数，否则无需填写此参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  EndpointSslConfig
    : public ModelBase
{
public:
    EndpointSslConfig();
    virtual ~EndpointSslConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointSslConfig members

    /// <summary>
    /// 是否SSL安全连接。如果数据库启用了SSL安全连接，参数值为true。
    /// </summary>

    bool isSslLink() const;
    bool sslLinkIsSet() const;
    void unsetsslLink();
    void setSslLink(bool value);

    /// <summary>
    /// SSL证书名字。
    /// </summary>

    std::string getSslCertName() const;
    bool sslCertNameIsSet() const;
    void unsetsslCertName();
    void setSslCertName(const std::string& value);

    /// <summary>
    /// SSL证书内容，用base64加密。
    /// </summary>

    std::string getSslCertKey() const;
    bool sslCertKeyIsSet() const;
    void unsetsslCertKey();
    void setSslCertKey(const std::string& value);

    /// <summary>
    /// SSL证书内容checksum值，后端校验，源库安全连接必选。
    /// </summary>

    std::string getSslCertCheckSum() const;
    bool sslCertCheckSumIsSet() const;
    void unsetsslCertCheckSum();
    void setSslCertCheckSum(const std::string& value);

    /// <summary>
    /// SSL证书密码，证书文件后缀为.p12时必填。
    /// </summary>

    std::string getSslCertPassword() const;
    bool sslCertPasswordIsSet() const;
    void unsetsslCertPassword();
    void setSslCertPassword(const std::string& value);


protected:
    bool sslLink_;
    bool sslLinkIsSet_;
    std::string sslCertName_;
    bool sslCertNameIsSet_;
    std::string sslCertKey_;
    bool sslCertKeyIsSet_;
    std::string sslCertCheckSum_;
    bool sslCertCheckSumIsSet_;
    std::string sslCertPassword_;
    bool sslCertPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_EndpointSslConfig_H_
