
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListDisasterRecoveryDrillsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDisasterRecoveryDrillsResponse();
    virtual ~ListDisasterRecoveryDrillsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDisasterRecoveryDrillsResponse members

    /// <summary>
    /// 容灾演练列表。
    /// </summary>

    std::vector<ShowDisasterRecoveryDrillParams>& getDisasterRecoveryDrills();
    bool disasterRecoveryDrillsIsSet() const;
    void unsetdisasterRecoveryDrills();
    void setDisasterRecoveryDrills(const std::vector<ShowDisasterRecoveryDrillParams>& value);

    /// <summary>
    /// 列表中包含的容灾演练个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ShowDisasterRecoveryDrillParams> disasterRecoveryDrills_;
    bool disasterRecoveryDrillsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsResponse_H_
