
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateSharedBandwidthsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateSharedBandwidthsResponse_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/eip/model/BatchBandwidthResp.h"

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
class HUAWEICLOUD_EIP_EXPORT  BatchCreateSharedBandwidthsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateSharedBandwidthsResponse();
    virtual ~BatchCreateSharedBandwidthsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateSharedBandwidthsResponse members

    /// <summary>
    /// 批创的带宽对象的列表
    /// </summary>

    std::vector<BatchBandwidthResp>& getBandwidths();
    bool bandwidthsIsSet() const;
    void unsetbandwidths();
    void setBandwidths(const std::vector<BatchBandwidthResp>& value);


protected:
    std::vector<BatchBandwidthResp> bandwidths_;
    bool bandwidthsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateSharedBandwidthsResponse_H_
