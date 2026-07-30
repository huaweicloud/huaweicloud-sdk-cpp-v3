
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperClusterResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperClusterResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/HyperCluster.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListHyperClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHyperClusterResponse();
    virtual ~ListHyperClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperClusterResponse members

    /// <summary>
    /// **参数解释**：Hyper Cluster列表。
    /// </summary>

    std::vector<HyperCluster>& getHyperClusters();
    bool hyperClustersIsSet() const;
    void unsethyperClusters();
    void setHyperClusters(const std::vector<HyperCluster>& value);


protected:
    std::vector<HyperCluster> hyperClusters_;
    bool hyperClustersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperClusterResponse_H_
