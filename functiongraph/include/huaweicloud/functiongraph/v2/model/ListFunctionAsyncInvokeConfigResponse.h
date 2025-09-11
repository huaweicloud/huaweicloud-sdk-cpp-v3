
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvokeConfigResult.h>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/PageInfo.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionAsyncInvokeConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionAsyncInvokeConfigResponse();
    virtual ~ListFunctionAsyncInvokeConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionAsyncInvokeConfigResponse members

    /// <summary>
    /// 函数异步配置列表。
    /// </summary>

    std::vector<ListFunctionAsyncInvokeConfigResult>& getAsyncInvokeConfigs();
    bool asyncInvokeConfigsIsSet() const;
    void unsetasyncInvokeConfigs();
    void setAsyncInvokeConfigs(const std::vector<ListFunctionAsyncInvokeConfigResult>& value);

    /// <summary>
    /// 列表总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<ListFunctionAsyncInvokeConfigResult> asyncInvokeConfigs_;
    bool asyncInvokeConfigsIsSet_;
    int64_t count_;
    bool countIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionAsyncInvokeConfigResponse_H_
