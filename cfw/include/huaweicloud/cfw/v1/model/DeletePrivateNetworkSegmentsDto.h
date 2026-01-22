
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeletePrivateNetworkSegmentsDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeletePrivateNetworkSegmentsDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CFW_V1_EXPORT  DeletePrivateNetworkSegmentsDto
    : public ModelBase
{
public:
    DeletePrivateNetworkSegmentsDto();
    virtual ~DeletePrivateNetworkSegmentsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletePrivateNetworkSegmentsDto members

    /// <summary>
    /// **参数解释**： 删除的私网网段ID列表，可以通过调用[获取私网网段的信息]获得，通过返回值中的data.private_network_list.conf_id获得 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getConfIds();
    bool confIdsIsSet() const;
    void unsetconfIds();
    void setConfIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> confIds_;
    bool confIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeletePrivateNetworkSegmentsDto_H_
