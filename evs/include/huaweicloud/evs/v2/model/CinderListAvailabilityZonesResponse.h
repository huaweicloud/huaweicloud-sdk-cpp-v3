
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/AzInfo.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListAvailabilityZonesResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListAvailabilityZonesResponse();
    virtual ~CinderListAvailabilityZonesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderListAvailabilityZonesResponse members

    /// <summary>
    /// 查询请求返回的可用分区列表，请参见• [availabilityZoneInfo参数说明](https://support.huaweicloud.com/api-evs/evs_04_2081.html#evs_04_2081__li19751007201910)。
    /// </summary>

    std::vector<AzInfo>& getAvailabilityZoneInfo();
    bool availabilityZoneInfoIsSet() const;
    void unsetavailabilityZoneInfo();
    void setAvailabilityZoneInfo(const std::vector<AzInfo>& value);


protected:
    std::vector<AzInfo> availabilityZoneInfo_;
    bool availabilityZoneInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_
