
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartValuesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartValuesResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ChartValue_values.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowChartValuesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowChartValuesResponse();
    virtual ~ShowChartValuesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowChartValuesResponse members

    /// <summary>
    /// 
    /// </summary>

    ChartValue_values getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const ChartValue_values& value);


protected:
    ChartValue_values values_;
    bool valuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartValuesResponse_H_
