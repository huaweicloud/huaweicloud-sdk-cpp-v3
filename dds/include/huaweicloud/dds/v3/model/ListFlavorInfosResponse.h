
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorInfosResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorInfosResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/FlavorInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListFlavorInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlavorInfosResponse();
    virtual ~ListFlavorInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlavorInfosResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例规格信息列表。
    /// </summary>

    std::vector<FlavorInfo>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<FlavorInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<FlavorInfo> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorInfosResponse_H_
