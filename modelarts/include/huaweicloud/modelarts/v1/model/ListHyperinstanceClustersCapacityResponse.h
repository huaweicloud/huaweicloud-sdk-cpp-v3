
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceClustersCapacityResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceClustersCapacityResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerHpsClusterCapacity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListHyperinstanceClustersCapacityResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHyperinstanceClustersCapacityResponse();
    virtual ~ListHyperinstanceClustersCapacityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperinstanceClustersCapacityResponse members

    /// <summary>
    /// 容量信息列表
    /// </summary>

    std::vector<ServerHpsClusterCapacity>& getCapacities();
    bool capacitiesIsSet() const;
    void unsetcapacities();
    void setCapacities(const std::vector<ServerHpsClusterCapacity>& value);


protected:
    std::vector<ServerHpsClusterCapacity> capacities_;
    bool capacitiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceClustersCapacityResponse_H_
