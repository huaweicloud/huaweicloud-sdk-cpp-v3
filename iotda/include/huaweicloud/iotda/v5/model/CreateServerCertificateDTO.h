
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateDTO_H_


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
/// 创建服务器证书请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateServerCertificateDTO
    : public ModelBase
{
public:
    CreateServerCertificateDTO();
    virtual ~CreateServerCertificateDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateServerCertificateDTO members

    /// <summary>
    /// **参数说明**：证书内容，PEM格式
    /// </summary>

    std::string getCertificatePem() const;
    bool certificatePemIsSet() const;
    void unsetcertificatePem();
    void setCertificatePem(const std::string& value);

    /// <summary>
    /// **参数说明**：证书私钥
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// **参数说明**：私钥密码
    /// </summary>

    std::string getPrivateKeyPassword() const;
    bool privateKeyPasswordIsSet() const;
    void unsetprivateKeyPassword();
    void setPrivateKeyPassword(const std::string& value);


protected:
    std::string certificatePem_;
    bool certificatePemIsSet_;
    std::string privateKey_;
    bool privateKeyIsSet_;
    std::string privateKeyPassword_;
    bool privateKeyPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateDTO_H_
