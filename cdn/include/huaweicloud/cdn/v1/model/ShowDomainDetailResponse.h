
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainDetailResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainDetailResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DomainsWithPort.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainDetailResponse();
    virtual ~ShowDomainDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainsWithPort getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const DomainsWithPort& value);


protected:
    DomainsWithPort domain_;
    bool domainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainDetailResponse_H_
