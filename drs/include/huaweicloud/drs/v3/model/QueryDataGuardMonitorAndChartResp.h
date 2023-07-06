
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorAndChartResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorAndChartResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryDataGuardMonitorResponse.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾任务监控数据响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryDataGuardMonitorAndChartResp
    : public ModelBase
{
public:
    QueryDataGuardMonitorAndChartResp();
    virtual ~QueryDataGuardMonitorAndChartResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryDataGuardMonitorAndChartResp members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryDataGuardMonitorResponse getDataGuardMinitor() const;
    bool dataGuardMinitorIsSet() const;
    void unsetdataGuardMinitor();
    void setDataGuardMinitor(const QueryDataGuardMonitorResponse& value);


protected:
    std::string id_;
    bool idIsSet_;
    QueryDataGuardMonitorResponse dataGuardMinitor_;
    bool dataGuardMinitorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorAndChartResp_H_
