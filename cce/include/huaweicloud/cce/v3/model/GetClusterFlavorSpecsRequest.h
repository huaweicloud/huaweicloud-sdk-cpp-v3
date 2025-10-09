
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetClusterFlavorSpecsRequest
    : public ModelBase
{
public:
    GetClusterFlavorSpecsRequest();
    virtual ~GetClusterFlavorSpecsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetClusterFlavorSpecsRequest members

    /// <summary>
    /// **参数解释**： 该参数用于按集群架构查询可售卖规格 **取值范围**： - VirtualMachine: CCE集群 - ARM64: 鲲鹏集群
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);


protected:
    std::string clusterType_;
    bool clusterTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetClusterFlavorSpecsRequest& dereference_from_shared_ptr(std::shared_ptr<GetClusterFlavorSpecsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterFlavorSpecsRequest_H_
