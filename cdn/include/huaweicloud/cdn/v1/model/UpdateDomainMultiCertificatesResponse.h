
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesResponseBodyContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateDomainMultiCertificatesResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDomainMultiCertificatesResponse();
    virtual ~UpdateDomainMultiCertificatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateDomainMultiCertificatesResponseBodyContent getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const UpdateDomainMultiCertificatesResponseBodyContent& value);


protected:
    UpdateDomainMultiCertificatesResponseBodyContent https_;
    bool httpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesResponse_H_
