
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FlavorCategoryDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FlavorCategoryDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ComputeFlavorGroupDetail.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DecServiceFlavorItemDetail.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/VolumeFlavorItemDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FlavorCategoryDetail
    : public ModelBase
{
public:
    FlavorCategoryDetail();
    virtual ~FlavorCategoryDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorCategoryDetail members

    /// <summary>
    /// **参数解释**: 计算规格组列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<ComputeFlavorGroupDetail>& getComputeFlavorGroups();
    bool computeFlavorGroupsIsSet() const;
    void unsetcomputeFlavorGroups();
    void setComputeFlavorGroups(const std::vector<ComputeFlavorGroupDetail>& value);

    /// <summary>
    /// **参数解释**: 存储规格列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<VolumeFlavorItemDetail>& getVolumeFlavors();
    bool volumeFlavorsIsSet() const;
    void unsetvolumeFlavors();
    void setVolumeFlavors(const std::vector<VolumeFlavorItemDetail>& value);

    /// <summary>
    /// **参数解释**: DeC专属规格列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<DecServiceFlavorItemDetail>& getDecServiceFlavors();
    bool decServiceFlavorsIsSet() const;
    void unsetdecServiceFlavors();
    void setDecServiceFlavors(const std::vector<DecServiceFlavorItemDetail>& value);


protected:
    std::vector<ComputeFlavorGroupDetail> computeFlavorGroups_;
    bool computeFlavorGroupsIsSet_;
    std::vector<VolumeFlavorItemDetail> volumeFlavors_;
    bool volumeFlavorsIsSet_;
    std::vector<DecServiceFlavorItemDetail> decServiceFlavors_;
    bool decServiceFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FlavorCategoryDetail_H_
