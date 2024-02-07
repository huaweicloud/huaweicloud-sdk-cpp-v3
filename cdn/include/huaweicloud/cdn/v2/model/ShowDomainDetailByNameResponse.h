
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainDetailByNameResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainDetailByNameResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/DomainsDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainDetailByNameResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainDetailByNameResponse();
    virtual ~ShowDomainDetailByNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainDetailByNameResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainsDetail getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const DomainsDetail& value);


protected:
    DomainsDetail domain_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainDetailByNameResponse_H_
