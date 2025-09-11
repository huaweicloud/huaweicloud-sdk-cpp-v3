
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsMetricResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsMetricResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/functiongraph/v2/model/FunctionMetric.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionAsMetricResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionAsMetricResponse();
    virtual ~ListFunctionAsMetricResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionAsMetricResponse members

    /// <summary>
    /// 函数Urn及其指标数
    /// </summary>

    std::vector<FunctionMetric>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<FunctionMetric>& value);

    /// <summary>
    /// 下次读取位置
    /// </summary>

    int64_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int64_t value);

    /// <summary>
    /// 返回函数总数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<FunctionMetric> values_;
    bool valuesIsSet_;
    int64_t nextMarker_;
    bool nextMarkerIsSet_;
    int64_t count_;
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

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsMetricResponse_H_
