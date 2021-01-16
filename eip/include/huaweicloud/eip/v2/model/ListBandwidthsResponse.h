
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
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
class HUAWEICLOUD_EIP_V2_EXPORT  ListBandwidthsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBandwidthsResponse();
    virtual ~ListBandwidthsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListBandwidthsResponse members

    /// <summary>
    /// 带宽列表对象
    /// </summary>

    std::vector<BandwidthResp>& getBandwidths();
    bool bandwidthsIsSet() const;
    void unsetbandwidths();
    void setBandwidths(const std::vector<BandwidthResp>& value);


protected:
    std::vector<BandwidthResp> bandwidths_;
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsResponse_H_
