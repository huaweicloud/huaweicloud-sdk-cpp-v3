
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_trusted_certs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_trusted_certs_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ClientCert_trusted_certs
    : public ModelBase
{
public:
    ClientCert_trusted_certs();
    virtual ~ClientCert_trusted_certs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClientCert_trusted_certs members

    /// <summary>
    /// **参数解释：** 客户端CA证书的内容 **约束限制：** 仅支持PEM格式 **取值范围：** 不涉及
    /// </summary>

    std::string getTrustedCert() const;
    bool trustedCertIsSet() const;
    void unsettrustedCert();
    void setTrustedCert(const std::string& value);


protected:
    std::string trustedCert_;
    bool trustedCertIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_trusted_certs_H_
