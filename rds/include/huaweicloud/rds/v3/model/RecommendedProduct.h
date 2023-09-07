
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendedProduct_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendedProduct_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RecommendFlavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 推荐商品信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RecommendedProduct
    : public ModelBase
{
public:
    RecommendedProduct();
    virtual ~RecommendedProduct();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecommendedProduct members

    /// <summary>
    /// 推荐级别
    /// </summary>

    std::string getRecommendedLevel() const;
    bool recommendedLevelIsSet() const;
    void unsetrecommendedLevel();
    void setRecommendedLevel(const std::string& value);

    /// <summary>
    /// 应用场景
    /// </summary>

    std::string getApplicationScenarios() const;
    bool applicationScenariosIsSet() const;
    void unsetapplicationScenarios();
    void setApplicationScenarios(const std::string& value);

    /// <summary>
    /// 规格信息
    /// </summary>

    std::vector<RecommendFlavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<RecommendFlavor>& value);


protected:
    std::string recommendedLevel_;
    bool recommendedLevelIsSet_;
    std::string applicationScenarios_;
    bool applicationScenariosIsSet_;
    std::vector<RecommendFlavor> flavors_;
    bool flavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RecommendedProduct_H_
