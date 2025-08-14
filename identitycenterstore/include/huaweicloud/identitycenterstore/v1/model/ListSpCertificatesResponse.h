
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListSpCertificatesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListSpCertificatesResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/identitycenterstore/v1/model/SpCertificateDto.h>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ListSpCertificatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSpCertificatesResponse();
    virtual ~ListSpCertificatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpCertificatesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<SpCertificateDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<SpCertificateDto>& value);


protected:
    std::vector<SpCertificateDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListSpCertificatesResponse_H_
