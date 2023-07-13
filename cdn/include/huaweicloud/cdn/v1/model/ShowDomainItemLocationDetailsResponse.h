
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DomainItemLocationDetails.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainItemLocationDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainItemLocationDetailsResponse();
    virtual ~ShowDomainItemLocationDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainItemLocationDetailsResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainItemLocationDetails getDomainItemLocationDetails() const;
    bool domainItemLocationDetailsIsSet() const;
    void unsetdomainItemLocationDetails();
    void setDomainItemLocationDetails(const DomainItemLocationDetails& value);


protected:
    DomainItemLocationDetails domainItemLocationDetails_;
    bool domainItemLocationDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsResponse_H_
