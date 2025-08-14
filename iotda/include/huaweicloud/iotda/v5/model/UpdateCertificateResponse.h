
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateCertificateResponse();
    virtual ~UpdateCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCertificateResponse members

    /// <summary>
    /// CA证书ID，在上传CA证书时由平台分配的唯一标识。
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// CA证书CN名称。
    /// </summary>

    std::string getCnName() const;
    bool cnNameIsSet() const;
    void unsetcnName();
    void setCnName(const std::string& value);

    /// <summary>
    /// CA证书所有者。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// CA证书验证状态。true代表证书已通过验证，可进行设备证书认证接入。false代表证书未通过验证。
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);

    /// <summary>
    /// CA证书验证码。
    /// </summary>

    std::string getVerifyCode() const;
    bool verifyCodeIsSet() const;
    void unsetverifyCode();
    void setVerifyCode(const std::string& value);

    /// <summary>
    /// 是否开启自注册能力，当为true时该功能必须配合自注册模板使用，true：是，false：否。
    /// </summary>

    bool isProvisionEnable() const;
    bool provisionEnableIsSet() const;
    void unsetprovisionEnable();
    void setProvisionEnable(bool value);

    /// <summary>
    /// 绑定的自注册模板ID。
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
    /// ocsp服务器端CA证书id，仅当ocsp服务器开启SSL时配置，平台使用该CA证书认证ocsp服务器。
    /// </summary>

    std::string getOcspServerCaId() const;
    bool ocspServerCaIdIsSet() const;
    void unsetocspServerCaId();
    void setOcspServerCaId(const std::string& value);

    /// <summary>
    /// ocsp服务器是否开启SSL加密，开启后必须配置OCSP服务器CA证书。
    /// </summary>

    bool isOcspSslEnable() const;
    bool ocspSslEnableIsSet() const;
    void unsetocspSslEnable();
    void setOcspSslEnable(bool value);

    /// <summary>
    /// 创建证书日期。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateDate() const;
    bool createDateIsSet() const;
    void unsetcreateDate();
    void setCreateDate(const std::string& value);

    /// <summary>
    /// CA证书生效日期。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const std::string& value);

    /// <summary>
    /// CA证书失效日期。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;
    std::string cnName_;
    bool cnNameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    bool status_;
    bool statusIsSet_;
    std::string verifyCode_;
    bool verifyCodeIsSet_;
    bool provisionEnable_;
    bool provisionEnableIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    bool ocspEnable_;
    bool ocspEnableIsSet_;
    std::string ocspServerCaId_;
    bool ocspServerCaIdIsSet_;
    bool ocspSslEnable_;
    bool ocspSslEnableIsSet_;
    std::string createDate_;
    bool createDateIsSet_;
    std::string effectiveDate_;
    bool effectiveDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateCertificateResponse_H_
