
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowAvailableAzResponsebody_availability_zone.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAvailableAzResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAvailableAzResponse();
    virtual ~ShowAvailableAzResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableAzResponse members

    /// <summary>
    /// 可用区列表
    /// </summary>

    std::vector<ShowAvailableAzResponsebody_availability_zone>& getAvailabilityZone();
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::vector<ShowAvailableAzResponsebody_availability_zone>& value);


protected:
    std::vector<ShowAvailableAzResponsebody_availability_zone> availabilityZone_;
    bool availabilityZoneIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAvailableAzResponse_H_
