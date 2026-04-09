
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchLoggerReplicaAvailabilityZonesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchLoggerReplicaAvailabilityZonesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/AzInformationResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SwitchLoggerReplicaAvailabilityZonesResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchLoggerReplicaAvailabilityZonesResponse();
    virtual ~SwitchLoggerReplicaAvailabilityZonesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchLoggerReplicaAvailabilityZonesResponse members

    /// <summary>
    /// **参数解释**: 选择日志节点AZ列表。
    /// </summary>

    std::vector<AzInformationResult>& getAvailabilityZoneInfos();
    bool availabilityZoneInfosIsSet() const;
    void unsetavailabilityZoneInfos();
    void setAvailabilityZoneInfos(const std::vector<AzInformationResult>& value);


protected:
    std::vector<AzInformationResult> availabilityZoneInfos_;
    bool availabilityZoneInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SwitchLoggerReplicaAvailabilityZonesResponse_H_
