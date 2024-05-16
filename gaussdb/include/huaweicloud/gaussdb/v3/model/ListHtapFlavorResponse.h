
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapFlavorInfo_flavors.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapFlavorResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHtapFlavorResponse();
    virtual ~ListHtapFlavorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapFlavorResponse members

    /// <summary>
    /// 规格信息。
    /// </summary>

    std::vector<HtapFlavorInfo_flavors>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<HtapFlavorInfo_flavors>& value);


protected:
    std::vector<HtapFlavorInfo_flavors> flavors_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapFlavorResponse_H_
