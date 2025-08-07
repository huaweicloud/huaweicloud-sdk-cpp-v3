
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MarketplaceEngineProduct.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListMarketplaceEngineProductsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMarketplaceEngineProductsResponse();
    virtual ~ListMarketplaceEngineProductsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMarketplaceEngineProductsResponse members

    /// <summary>
    /// 云市场引擎商品列表。
    /// </summary>

    std::vector<MarketplaceEngineProduct>& getMarketplaceEngineProducts();
    bool marketplaceEngineProductsIsSet() const;
    void unsetmarketplaceEngineProducts();
    void setMarketplaceEngineProducts(const std::vector<MarketplaceEngineProduct>& value);

    /// <summary>
    /// 云市场引擎商品总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<MarketplaceEngineProduct> marketplaceEngineProducts_;
    bool marketplaceEngineProductsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMarketplaceEngineProductsResponse_H_
