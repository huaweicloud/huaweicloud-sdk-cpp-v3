
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPCertificatesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPCertificatesResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/identitycenterstore/v1/model/IdpCertificate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ListExternalIdPCertificatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListExternalIdPCertificatesResponse();
    virtual ~ListExternalIdPCertificatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExternalIdPCertificatesResponse members

    /// <summary>
    /// 外部身份提供商证书列表
    /// </summary>

    std::vector<IdpCertificate>& getIdpCertificates();
    bool idpCertificatesIsSet() const;
    void unsetidpCertificates();
    void setIdpCertificates(const std::vector<IdpCertificate>& value);


protected:
    std::vector<IdpCertificate> idpCertificates_;
    bool idpCertificatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPCertificatesResponse_H_
