
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListFunctionResult.h>
#include <vector>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionsResponse();
    virtual ~ListFunctionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionsResponse members

    /// <summary>
    /// 函数列表。
    /// </summary>

    std::vector<ListFunctionResult>& getFunctions();
    bool functionsIsSet() const;
    void unsetfunctions();
    void setFunctions(const std::vector<ListFunctionResult>& value);

    /// <summary>
    /// 函数下次记录读取位置。
    /// </summary>

    int32_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int32_t value);

    /// <summary>
    /// 满足查询条件的函数总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<ListFunctionResult> functions_;
    bool functionsIsSet_;
    int32_t nextMarker_;
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

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsResponse_H_
