
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowMonitoringDataResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowMonitoringDataResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v3/model/QueryDataGuardMonitorAndChartResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ShowMonitoringDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMonitoringDataResponse();
    virtual ~ShowMonitoringDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowMonitoringDataResponse members

    /// <summary>
    /// 容灾监控数据响应体集合
    /// </summary>

    std::vector<QueryDataGuardMonitorAndChartResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<QueryDataGuardMonitorAndChartResp>& value);

    /// <summary>
    /// 查询总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<QueryDataGuardMonitorAndChartResp> results_;
    bool resultsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowMonitoringDataResponse_H_
