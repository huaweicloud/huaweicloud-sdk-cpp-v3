
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/CreateDomainResponseBodyContent.h>

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
class HUAWEICLOUD_CDN_V2_EXPORT  CreateDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDomainResponse();
    virtual ~CreateDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateDomainResponseBodyContent getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const CreateDomainResponseBodyContent& value);


protected:
    CreateDomainResponseBodyContent domain_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainResponse_H_
