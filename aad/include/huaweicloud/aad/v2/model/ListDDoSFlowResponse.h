
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSFlowResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSFlowResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/FlowPps.h>
#include <huaweicloud/aad/v2/model/FlowBps.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSFlowResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDDoSFlowResponse();
    virtual ~ListDDoSFlowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSFlowResponse members

    /// <summary>
    /// 当请求type&#x3D;bps时必返回
    /// </summary>

    std::vector<FlowBps>& getFlowBps();
    bool flowBpsIsSet() const;
    void unsetflowBps();
    void setFlowBps(const std::vector<FlowBps>& value);

    /// <summary>
    /// 当请求type&#x3D;pps时必返回
    /// </summary>

    std::vector<FlowPps>& getFlowPps();
    bool flowPpsIsSet() const;
    void unsetflowPps();
    void setFlowPps(const std::vector<FlowPps>& value);


protected:
    std::vector<FlowBps> flowBps_;
    bool flowBpsIsSet_;
    std::vector<FlowPps> flowPps_;
    bool flowPpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSFlowResponse_H_
