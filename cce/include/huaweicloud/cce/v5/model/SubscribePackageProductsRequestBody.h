
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsRequestBody_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/PackageProductRequestDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订购套餐包-response结构体。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  SubscribePackageProductsRequestBody
    : public ModelBase
{
public:
    SubscribePackageProductsRequestBody();
    virtual ~SubscribePackageProductsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscribePackageProductsRequestBody members

    /// <summary>
    /// 套餐包列表。
    /// </summary>

    std::vector<PackageProductRequestDetail>& getPackageProducts();
    bool packageProductsIsSet() const;
    void unsetpackageProducts();
    void setPackageProducts(const std::vector<PackageProductRequestDetail>& value);


protected:
    std::vector<PackageProductRequestDetail> packageProducts_;
    bool packageProductsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_SubscribePackageProductsRequestBody_H_
