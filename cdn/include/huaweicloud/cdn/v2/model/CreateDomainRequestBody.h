
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainRequestBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/DomainBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名对象
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateDomainRequestBody
    : public ModelBase
{
public:
    CreateDomainRequestBody();
    virtual ~CreateDomainRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainRequestBody members

    /// <summary>
    /// 
    /// </summary>

    DomainBody getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const DomainBody& value);


protected:
    DomainBody domain_;
    bool domainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainRequestBody_H_
