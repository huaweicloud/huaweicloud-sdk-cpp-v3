
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ResourceMonitoringInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesResourceMetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesResourceMetricsResponse();
    virtual ~ListInstancesResourceMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListInstancesResourceMetricsResponse members

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 资源监控信息
    /// </summary>

    std::vector<ResourceMonitoringInfo>& getResourceMonitoringInfos();
    bool resourceMonitoringInfosIsSet() const;
    void unsetresourceMonitoringInfos();
    void setResourceMonitoringInfos(const std::vector<ResourceMonitoringInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ResourceMonitoringInfo> resourceMonitoringInfos_;
    bool resourceMonitoringInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesResourceMetricsResponse_H_
