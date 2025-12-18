
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsResponse_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/PackageProductDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ListPackageProductsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPackageProductsResponse();
    virtual ~ListPackageProductsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPackageProductsResponse members

    /// <summary>
    /// 套餐包列表。
    /// </summary>

    std::vector<PackageProductDetail>& getPackageProducts();
    bool packageProductsIsSet() const;
    void unsetpackageProducts();
    void setPackageProducts(const std::vector<PackageProductDetail>& value);


protected:
    std::vector<PackageProductDetail> packageProducts_;
    bool packageProductsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ListPackageProductsResponse_H_
