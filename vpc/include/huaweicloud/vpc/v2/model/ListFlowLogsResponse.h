
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/FlowLogResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListFlowLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlowLogsResponse();
    virtual ~ListFlowLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlowLogsResponse members

    /// <summary>
    /// flow_log对象列表
    /// </summary>

    std::vector<FlowLogResp>& getFlowLogs();
    bool flowLogsIsSet() const;
    void unsetflowLogs();
    void setFlowLogs(const std::vector<FlowLogResp>& value);


protected:
    std::vector<FlowLogResp> flowLogs_;
    bool flowLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsResponse_H_
