
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfoResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfoResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ListServerAzInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerAzInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerAzInfoResponse();
    virtual ~ListServerAzInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerAzInfoResponse members

    /// <summary>
    /// az详情信息
    /// </summary>

    std::vector<ListServerAzInfo>& getAvailabilityZones();
    bool availabilityZonesIsSet() const;
    void unsetavailabilityZones();
    void setAvailabilityZones(const std::vector<ListServerAzInfo>& value);


protected:
    std::vector<ListServerAzInfo> availabilityZones_;
    bool availabilityZonesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfoResponse_H_
