
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/DetachInternetBandwidth.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody
    : public ModelBase
{
public:
    BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody();
    virtual ~BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody members

    /// <summary>
    /// 请求列表
    /// </summary>

    std::vector<DetachInternetBandwidth>& getGlobalEipSegments();
    bool globalEipSegmentsIsSet() const;
    void unsetglobalEipSegments();
    void setGlobalEipSegments(const std::vector<DetachInternetBandwidth>& value);


protected:
    std::vector<DetachInternetBandwidth> globalEipSegments_;
    bool globalEipSegmentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody_H_
