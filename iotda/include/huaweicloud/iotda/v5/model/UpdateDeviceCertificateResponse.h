
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificateResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificateResponse_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDeviceCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDeviceCertificateResponse();
    virtual ~UpdateDeviceCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceCertificateResponse members

    /// <summary>
    /// **参数说明**：设备证书ID。用来唯一标识一个设备证书
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备证书通用名称。
    /// </summary>

    std::string getCommonName() const;
    bool commonNameIsSet() const;
    void unsetcommonName();
    void setCommonName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备证书过期时间。
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// **参数说明**：设备证书SHA256指纹。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数说明**：设备证书状态，默认状态为激活 - ACTIVE：激活状态。 - INACTIVE：停用状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数说明**：设备证书PEM格式内容。
    /// </summary>

    std::string getCertificatePem() const;
    bool certificatePemIsSet() const;
    void unsetcertificatePem();
    void setCertificatePem(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;
    std::string commonName_;
    bool commonNameIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string certificatePem_;
    bool certificatePemIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceCertificateResponse_H_
