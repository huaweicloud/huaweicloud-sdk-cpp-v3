
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DomainItemDetail.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainItemDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainItemDetailsResponse();
    virtual ~ShowDomainItemDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainItemDetailsResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainItemDetail getDomainItemDetails() const;
    bool domainItemDetailsIsSet() const;
    void unsetdomainItemDetails();
    void setDomainItemDetails(const DomainItemDetail& value);


protected:
    DomainItemDetail domainItemDetails_;
    bool domainItemDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsResponse_H_
