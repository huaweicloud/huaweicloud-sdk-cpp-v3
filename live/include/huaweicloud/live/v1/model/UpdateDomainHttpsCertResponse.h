
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateDomainHttpsCertResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDomainHttpsCertResponse();
    virtual ~UpdateDomainHttpsCertResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDomainHttpsCertResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateDomainHttpsCertResponse_H_
