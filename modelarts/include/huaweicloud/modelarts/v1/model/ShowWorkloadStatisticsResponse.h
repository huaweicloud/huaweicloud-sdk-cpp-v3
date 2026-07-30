
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkloadStatisticsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkloadStatisticsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkloadListStatistics_statistics.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkloadStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkloadStatisticsResponse();
    virtual ~ShowWorkloadStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkloadStatisticsResponse members

    /// <summary>
    /// 
    /// </summary>

    WorkloadListStatistics_statistics getStatistics() const;
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const WorkloadListStatistics_statistics& value);


protected:
    WorkloadListStatistics_statistics statistics_;
    bool statisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkloadStatisticsResponse_H_
