
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatisticResourceResponseBody_datapoints.h>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatisticResourceResponse();
    virtual ~ShowStatisticResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticResourceResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 资源分布
    /// </summary>

    std::vector<ShowStatisticResourceResponseBody_datapoints>& getDatapoints();
    bool datapointsIsSet() const;
    void unsetdatapoints();
    void setDatapoints(const std::vector<ShowStatisticResourceResponseBody_datapoints>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowStatisticResourceResponseBody_datapoints> datapoints_;
    bool datapointsIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticResourceResponse_H_
