
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/VolumeTransferSummary.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListVolumeTransfersResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListVolumeTransfersResponse();
    virtual ~CinderListVolumeTransfersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListVolumeTransfersResponse members

    /// <summary>
    /// 云硬盘过户记录列表概要，请参见•[transfers参数说明](https://support.huaweicloud.com/api-evs/evs_04_2110.html#evs_04_2110__li6113282511345)。
    /// </summary>

    std::vector<VolumeTransferSummary>& getTransfers();
    bool transfersIsSet() const;
    void unsettransfers();
    void setTransfers(const std::vector<VolumeTransferSummary>& value);


protected:
    std::vector<VolumeTransferSummary> transfers_;
    bool transfersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_
