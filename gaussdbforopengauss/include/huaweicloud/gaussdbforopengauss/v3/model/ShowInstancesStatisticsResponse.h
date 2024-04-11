
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstancesStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstancesStatisticsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/InstancesStatisticsResponseBody_instances_statistics.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowInstancesStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstancesStatisticsResponse();
    virtual ~ShowInstancesStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstancesStatisticsResponse members

    /// <summary>
    /// 实例总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例统计信息
    /// </summary>

    std::vector<InstancesStatisticsResponseBody_instances_statistics>& getInstancesStatistics();
    bool instancesStatisticsIsSet() const;
    void unsetinstancesStatistics();
    void setInstancesStatistics(const std::vector<InstancesStatisticsResponseBody_instances_statistics>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<InstancesStatisticsResponseBody_instances_statistics> instancesStatistics_;
    bool instancesStatisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstancesStatisticsResponse_H_
