
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SearchQueryScaleComputeFlavorsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SearchQueryScaleComputeFlavorsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Computes.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  SearchQueryScaleComputeFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchQueryScaleComputeFlavorsResponse();
    virtual ~SearchQueryScaleComputeFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchQueryScaleComputeFlavorsResponse members

    /// <summary>
    /// 计算规格列表对象。
    /// </summary>

    std::vector<Computes>& getComputeFlavorGroups();
    bool computeFlavorGroupsIsSet() const;
    void unsetcomputeFlavorGroups();
    void setComputeFlavorGroups(const std::vector<Computes>& value);


protected:
    std::vector<Computes> computeFlavorGroups_;
    bool computeFlavorGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SearchQueryScaleComputeFlavorsResponse_H_
