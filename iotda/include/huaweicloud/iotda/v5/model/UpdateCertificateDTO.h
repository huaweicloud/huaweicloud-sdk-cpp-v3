
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateDTO_H_


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
/// 更新CA证书结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateCertificateDTO
    : public ModelBase
{
public:
    UpdateCertificateDTO();
    virtual ~UpdateCertificateDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCertificateDTO members

    /// <summary>
    /// 是否开启自注册能力，当为true时该功能必须配合预调配功能使用，true：是，false：否。
    /// </summary>

    bool isProvisionEnable() const;
    bool provisionEnableIsSet() const;
    void unsetprovisionEnable();
    void setProvisionEnable(bool value);

    /// <summary>
    /// 预调配模板ID，该CA证书绑定的预调配模板id，当该字段传null时表示解除绑定关系。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 是否开启该CA证书下的设备证书OCSP校验，当为true且设备证书信息中包含OCSP url时则平台会校验证书的状态，当证书状态为revoked时平台会拒绝设备连接，true：开启，false：关闭。
    /// </summary>

    bool isOcspEnable() const;
    bool ocspEnableIsSet() const;
    void unsetocspEnable();
    void setOcspEnable(bool value);

    /// <summary>
    /// 访问ocsp服务器是否开启SSL，开启后必须配置服务器CA证书校验。
    /// </summary>

    bool isOcspSslEnable() const;
    bool ocspSslEnableIsSet() const;
    void unsetocspSslEnable();
    void setOcspSslEnable(bool value);

    /// <summary>
    /// ocsp服务器端CA证书id，当ocsp服务器为https协议时需要配置，否则认证失败。
    /// </summary>

    std::string getOcspServerCaId() const;
    bool ocspServerCaIdIsSet() const;
    void unsetocspServerCaId();
    void setOcspServerCaId(const std::string& value);


protected:
    bool provisionEnable_;
    bool provisionEnableIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    bool ocspEnable_;
    bool ocspEnableIsSet_;
    bool ocspSslEnable_;
    bool ocspSslEnableIsSet_;
    std::string ocspServerCaId_;
    bool ocspServerCaIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateDTO_H_
