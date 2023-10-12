
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReqBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReqBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateFlowLogReq.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateFlowLogReqBody
    : public ModelBase
{
public:
    CreateFlowLogReqBody();
    virtual ~CreateFlowLogReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowLogReqBody members

    /// <summary>
    /// 
    /// </summary>

    CreateFlowLogReq getFlowLog() const;
    bool flowLogIsSet() const;
    void unsetflowLog();
    void setFlowLog(const CreateFlowLogReq& value);


protected:
    CreateFlowLogReq flowLog_;
    bool flowLogIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReqBody_H_
