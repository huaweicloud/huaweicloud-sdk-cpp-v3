
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  RemovePublicipsFromSharedBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    RemovePublicipsFromSharedBandwidthResponse();
    virtual ~RemovePublicipsFromSharedBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemovePublicipsFromSharedBandwidthResponse members


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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthResponse_H_
