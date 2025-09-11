
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecuteBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecuteBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数流执行请求body体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FlowExecuteBody
    : public ModelBase
{
public:
    FlowExecuteBody();
    virtual ~FlowExecuteBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowExecuteBody members

    /// <summary>
    /// 函数执行时需要的Header
    /// </summary>

    Object getHeaders() const;
    bool headersIsSet() const;
    void unsetheaders();
    void setHeaders(const Object& value);

    /// <summary>
    /// 定义函数执行时的入参，支持使用JSONPATH进行映射，以及指定默认值
    /// </summary>

    Object getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const Object& value);


protected:
    Object headers_;
    bool headersIsSet_;
    Object input_;
    bool inputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FlowExecuteBody_H_
