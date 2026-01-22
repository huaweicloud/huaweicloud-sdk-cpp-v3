
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EwPrivateNetworkSegmentsDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EwPrivateNetworkSegmentsDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/PrivateNetworkSegmentVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EwPrivateNetworkSegmentsDto
    : public ModelBase
{
public:
    EwPrivateNetworkSegmentsDto();
    virtual ~EwPrivateNetworkSegmentsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EwPrivateNetworkSegmentsDto members

    /// <summary>
    /// **参数解释**： 私网网段的信息列表，用于东西向VPC防护引流 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<PrivateNetworkSegmentVO>& getPrivateNetworkSegments();
    bool privateNetworkSegmentsIsSet() const;
    void unsetprivateNetworkSegments();
    void setPrivateNetworkSegments(const std::vector<PrivateNetworkSegmentVO>& value);


protected:
    std::vector<PrivateNetworkSegmentVO> privateNetworkSegments_;
    bool privateNetworkSegmentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EwPrivateNetworkSegmentsDto_H_
