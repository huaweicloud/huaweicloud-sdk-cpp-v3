
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListPrivateNetworkSegmentsVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListPrivateNetworkSegmentsVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// **参数解释**： 私网网段信息列表 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListPrivateNetworkSegmentsVO
    : public ModelBase
{
public:
    ListPrivateNetworkSegmentsVO();
    virtual ~ListPrivateNetworkSegmentsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPrivateNetworkSegmentsVO members

    /// <summary>
    /// **参数解释**： 私网网段列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<PrivateNetworkSegmentVO>& getPrivateNetworkList();
    bool privateNetworkListIsSet() const;
    void unsetprivateNetworkList();
    void setPrivateNetworkList(const std::vector<PrivateNetworkSegmentVO>& value);

    /// <summary>
    /// **参数解释**： 总条数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 私网网段配额 **取值范围**： 不涉及
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// **参数解释**： 支持的可用区列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<std::string>& getSupportAzList();
    bool supportAzListIsSet() const;
    void unsetsupportAzList();
    void setSupportAzList(const std::vector<std::string>& value);


protected:
    std::vector<PrivateNetworkSegmentVO> privateNetworkList_;
    bool privateNetworkListIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    std::vector<std::string> supportAzList_;
    bool supportAzListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListPrivateNetworkSegmentsVO_H_
