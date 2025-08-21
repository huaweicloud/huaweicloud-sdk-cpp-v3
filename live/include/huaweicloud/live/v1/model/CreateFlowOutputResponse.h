
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowOutputResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowOutputResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/FlowsOutput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateFlowOutputResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFlowOutputResponse();
    virtual ~CreateFlowOutputResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowOutputResponse members

    /// <summary>
    /// 流ID
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 所有输出信息
    /// </summary>

    std::vector<FlowsOutput>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<FlowsOutput>& value);


protected:
    std::string flowId_;
    bool flowIdIsSet_;
    std::vector<FlowsOutput> outputs_;
    bool outputsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowOutputResponse_H_
