
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupsCapacityResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupsCapacityResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerHpsGroupCapacity.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListHyperinstanceGroupsCapacityResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHyperinstanceGroupsCapacityResponse();
    virtual ~ListHyperinstanceGroupsCapacityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperinstanceGroupsCapacityResponse members

    /// <summary>
    /// **参数解释**：hyperinstance-group容量预测结果列表。 **默认取值**：不涉及。
    /// </summary>

    std::vector<ServerHpsGroupCapacity>& getCapacities();
    bool capacitiesIsSet() const;
    void unsetcapacities();
    void setCapacities(const std::vector<ServerHpsGroupCapacity>& value);


protected:
    std::vector<ServerHpsGroupCapacity> capacities_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupsCapacityResponse_H_
