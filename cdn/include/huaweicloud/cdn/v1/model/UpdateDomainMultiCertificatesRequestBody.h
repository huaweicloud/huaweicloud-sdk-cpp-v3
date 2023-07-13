
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesRequestBodyContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateDomainMultiCertificatesRequestBody
    : public ModelBase
{
public:
    UpdateDomainMultiCertificatesRequestBody();
    virtual ~UpdateDomainMultiCertificatesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateDomainMultiCertificatesRequestBodyContent getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const UpdateDomainMultiCertificatesRequestBodyContent& value);


protected:
    UpdateDomainMultiCertificatesRequestBodyContent https_;
    bool httpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainMultiCertificatesRequestBody_H_
