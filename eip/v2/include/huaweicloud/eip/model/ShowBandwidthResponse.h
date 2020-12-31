
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthResponse_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/BandwidthResp.h"

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
class HUAWEICLOUD_EIP_EXPORT  ShowBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBandwidthResponse();
    virtual ~ShowBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowBandwidthResponse members

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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowBandwidthResponse_H_
