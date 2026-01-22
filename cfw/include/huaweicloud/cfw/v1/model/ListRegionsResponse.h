
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListRegionsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListRegionsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cfw/v1/model/IpRegionResponseBodyData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListRegionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRegionsResponse();
    virtual ~ListRegionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRegionsResponse members

    /// <summary>
    /// **参数解释**： 地域列表 **取值范围**： 不涉及 
    /// </summary>

    std::vector<IpRegionResponseBodyData>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<IpRegionResponseBodyData>& value);


protected:
    std::vector<IpRegionResponseBodyData> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListRegionsResponse_H_
