
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowFunctionMetricsRequest
    : public ModelBase
{
public:
    ShowFunctionMetricsRequest();
    virtual ~ShowFunctionMetricsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFunctionMetricsRequest members

    /// <summary>
    /// 函数的URN，详细解释见FunctionGraph函数模型的描述。
    /// </summary>

    std::string getFuncUrn() const;
    bool funcUrnIsSet() const;
    void unsetfuncUrn();
    void setFuncUrn(const std::string& value);

    /// <summary>
    /// 时间间隔（单位：min）
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string funcUrn_;
    bool funcUrnIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFunctionMetricsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFunctionMetricsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionMetricsRequest_H_
