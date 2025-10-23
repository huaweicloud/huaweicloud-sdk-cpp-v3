
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowFullSqlResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowFullSqlResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/FullSqlComponetResult.h>
#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowFullSqlResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFullSqlResponse();
    virtual ~ShowFullSqlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFullSqlResponse members

    /// <summary>
    /// **参数解释**: 链路详情。
    /// </summary>

    Object getTraceStatistics() const;
    bool traceStatisticsIsSet() const;
    void unsettraceStatistics();
    void setTraceStatistics(const Object& value);

    /// <summary>
    /// **参数解释**: 组件上SQL执行记录列表。
    /// </summary>

    std::vector<FullSqlComponetResult>& getComponents();
    bool componentsIsSet() const;
    void unsetcomponents();
    void setComponents(const std::vector<FullSqlComponetResult>& value);


protected:
    Object traceStatistics_;
    bool traceStatisticsIsSet_;
    std::vector<FullSqlComponetResult> components_;
    bool componentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowFullSqlResponse_H_
