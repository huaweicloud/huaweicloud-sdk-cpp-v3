
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateOriginHostResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateOriginHostResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DomainOriginHost.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateOriginHostResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateOriginHostResponse();
    virtual ~UpdateOriginHostResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateOriginHostResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainOriginHost getOriginHost() const;
    bool originHostIsSet() const;
    void unsetoriginHost();
    void setOriginHost(const DomainOriginHost& value);


protected:
    DomainOriginHost originHost_;
    bool originHostIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateOriginHostResponse_H_
