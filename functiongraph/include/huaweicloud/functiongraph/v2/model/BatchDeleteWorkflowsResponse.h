
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/OperateErrorInfo.h>
#include <string>
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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  BatchDeleteWorkflowsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteWorkflowsResponse();
    virtual ~BatchDeleteWorkflowsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteWorkflowsResponse members

    /// <summary>
    /// 成功流程URN列表
    /// </summary>

    std::vector<std::string>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<std::string>& value);

    /// <summary>
    /// 错误流程详情
    /// </summary>

    std::vector<OperateErrorInfo>& getFail();
    bool failIsSet() const;
    void unsetfail();
    void setFail(const std::vector<OperateErrorInfo>& value);


protected:
    std::vector<std::string> success_;
    bool successIsSet_;
    std::vector<OperateErrorInfo> fail_;
    bool failIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_BatchDeleteWorkflowsResponse_H_
