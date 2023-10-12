
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BandwidthResp.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  CreateSharedBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSharedBandwidthResponse();
    virtual ~CreateSharedBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSharedBandwidthResponse members

    /// <summary>
    /// 
    /// </summary>

    BandwidthResp getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BandwidthResp& value);


protected:
    BandwidthResp bandwidth_;
    bool bandwidthIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthResponse_H_
