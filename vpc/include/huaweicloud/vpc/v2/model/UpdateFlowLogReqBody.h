
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateFlowLogReqBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateFlowLogReqBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateFlowLogReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateFlowLogReqBody
    : public ModelBase
{
public:
    UpdateFlowLogReqBody();
    virtual ~UpdateFlowLogReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFlowLogReqBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateFlowLogReq getFlowLog() const;
    bool flowLogIsSet() const;
    void unsetflowLog();
    void setFlowLog(const UpdateFlowLogReq& value);


protected:
    UpdateFlowLogReq flowLog_;
    bool flowLogIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateFlowLogReqBody_H_
