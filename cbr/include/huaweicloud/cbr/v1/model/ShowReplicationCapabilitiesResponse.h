
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectableReplicationCapabilitiesRespRegion.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowReplicationCapabilitiesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplicationCapabilitiesResponse();
    virtual ~ShowReplicationCapabilitiesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationCapabilitiesResponse members

    /// <summary>
    /// 支持复制的区域列表
    /// </summary>

    std::vector<ProtectableReplicationCapabilitiesRespRegion>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<ProtectableReplicationCapabilitiesRespRegion>& value);


protected:
    std::vector<ProtectableReplicationCapabilitiesRespRegion> regions_;
    bool regionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowReplicationCapabilitiesResponse_H_
