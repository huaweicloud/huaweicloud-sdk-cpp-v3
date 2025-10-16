
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatusClusterItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatusClusterResponse();
    virtual ~ShowStatusClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusClusterResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 集群列表
    /// </summary>

    std::vector<ShowStatusClusterItem>& getClusterList();
    bool clusterListIsSet() const;
    void unsetclusterList();
    void setClusterList(const std::vector<ShowStatusClusterItem>& value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowStatusClusterItem> clusterList_;
    bool clusterListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusClusterResponse_H_
