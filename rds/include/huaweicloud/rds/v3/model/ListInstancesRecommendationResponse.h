
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RecommendedProduct.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesRecommendationResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesRecommendationResponse();
    virtual ~ListInstancesRecommendationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListInstancesRecommendationResponse members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// 推荐商品信息
    /// </summary>

    std::vector<RecommendedProduct>& getRecommendedProducts();
    bool recommendedProductsIsSet() const;
    void unsetrecommendedProducts();
    void setRecommendedProducts(const std::vector<RecommendedProduct>& value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::vector<RecommendedProduct> recommendedProducts_;
    bool recommendedProductsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationResponse_H_
