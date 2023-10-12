
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/FlowLogResp.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateFlowLogResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFlowLogResponse();
    virtual ~CreateFlowLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowLogResponse members

    /// <summary>
    /// 
    /// </summary>

    FlowLogResp getFlowLog() const;
    bool flowLogIsSet() const;
    void unsetflowLog();
    void setFlowLog(const FlowLogResp& value);


protected:
    FlowLogResp flowLog_;
    bool flowLogIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogResponse_H_
