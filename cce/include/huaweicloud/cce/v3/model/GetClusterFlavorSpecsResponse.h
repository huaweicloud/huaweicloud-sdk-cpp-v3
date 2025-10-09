
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterFlavorSpecification.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetClusterFlavorSpecsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetClusterFlavorSpecsResponse();
    virtual ~GetClusterFlavorSpecsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetClusterFlavorSpecsResponse members

    /// <summary>
    /// 
    /// </summary>

    ClusterFlavorSpecification getClusterFlavorSpecs() const;
    bool clusterFlavorSpecsIsSet() const;
    void unsetclusterFlavorSpecs();
    void setClusterFlavorSpecs(const ClusterFlavorSpecification& value);


protected:
    ClusterFlavorSpecification clusterFlavorSpecs_;
    bool clusterFlavorSpecsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsResponse_H_
