
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MetricDataResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MetricDataResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/DatapointResult.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  MetricDataResult
    : public ModelBase
{
public:
    MetricDataResult();
    virtual ~MetricDataResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricDataResult members

    /// <summary>
    /// **参数解释**: 指标ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(const std::string& value);

    /// <summary>
    /// **参数解释** 指标类型 **取值范围** - INSTANCE：实例类型。 - NODE：节点类型。 - COMPONENT：组件类型。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 指标单位。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// **参数解释**: 指标维度及指标值。
    /// </summary>

    std::vector<DatapointResult>& getDatapoints();
    bool datapointsIsSet() const;
    void unsetdatapoints();
    void setDatapoints(const std::vector<DatapointResult>& value);

    /// <summary>
    /// **参数解释**: 时间戳，例如1699495140000。
    /// </summary>

    std::vector<std::string>& getTimestamps();
    bool timestampsIsSet() const;
    void unsettimestamps();
    void setTimestamps(const std::vector<std::string>& value);


protected:
    std::string metric_;
    bool metricIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::vector<DatapointResult> datapoints_;
    bool datapointsIsSet_;
    std::vector<std::string> timestamps_;
    bool timestampsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MetricDataResult_H_
