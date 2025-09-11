
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListActiveAsyncInvocationsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListActiveAsyncInvocationsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvocationsResult.h>
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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListActiveAsyncInvocationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListActiveAsyncInvocationsResponse();
    virtual ~ListActiveAsyncInvocationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListActiveAsyncInvocationsResponse members

    /// <summary>
    /// 异步调用记录列表。
    /// </summary>

    std::vector<ListFunctionAsyncInvocationsResult>& getInvocations();
    bool invocationsIsSet() const;
    void unsetinvocations();
    void setInvocations(const std::vector<ListFunctionAsyncInvocationsResult>& value);

    /// <summary>
    /// 查询数据总条数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 查询下一页的起始位置
    /// </summary>

    int32_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int32_t value);


protected:
    std::vector<ListFunctionAsyncInvocationsResult> invocations_;
    bool invocationsIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t nextMarker_;
    bool nextMarkerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListActiveAsyncInvocationsResponse_H_
