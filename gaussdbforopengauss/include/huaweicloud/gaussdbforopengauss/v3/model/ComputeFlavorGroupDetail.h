
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorGroupDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorGroupDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/ComputeFlavorItemDetail.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ComputeFlavorGroupDetail
    : public ModelBase
{
public:
    ComputeFlavorGroupDetail();
    virtual ~ComputeFlavorGroupDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ComputeFlavorGroupDetail members

    /// <summary>
    /// **参数解释**: 性能规格。 **取值范围**: - normal：独享型（1:8）。 - normal2：独享型（1:4）。 - armFlavors：鲲鹏独享型（1:8）。 - exclusive：独享型（1:4），仅基础版集中式实例支持。 - armExclusive：鲲鹏独享型（1:4），仅基础版集中式实例支持。 - economical：惠选型（1:4）。 - economical2：惠选型（1:8）。 - armFlavors2：鲲鹏独享型（1:4）。 - general：通用型（1:4）。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数解释**: 计算规格列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<ComputeFlavorItemDetail>& getComputeFlavors();
    bool computeFlavorsIsSet() const;
    void unsetcomputeFlavors();
    void setComputeFlavors(const std::vector<ComputeFlavorItemDetail>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<ComputeFlavorItemDetail> computeFlavors_;
    bool computeFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorGroupDetail_H_
