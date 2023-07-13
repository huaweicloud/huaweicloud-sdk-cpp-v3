
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainOriginResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainOriginResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/ResourceBody.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateDomainOriginResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDomainOriginResponse();
    virtual ~UpdateDomainOriginResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDomainOriginResponse members

    /// <summary>
    /// 
    /// </summary>

    ResourceBody getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const ResourceBody& value);


protected:
    ResourceBody origin_;
    bool originIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainOriginResponse_H_
