
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentUpdateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentUpdateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/AgentUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AgentUpdateReq
    : public ModelBase
{
public:
    AgentUpdateReq();
    virtual ~AgentUpdateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgentUpdateReq members

    /// <summary>
    /// 
    /// </summary>

    AgentUpdate getAgent() const;
    bool agentIsSet() const;
    void unsetagent();
    void setAgent(const AgentUpdate& value);


protected:
    AgentUpdate agent_;
    bool agentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentUpdateReq_H_
