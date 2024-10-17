
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditAgentRespoonse_agents.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditAgentResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditAgentResponse();
    virtual ~ListAuditAgentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditAgentResponse members

    /// <summary>
    /// agent列表
    /// </summary>

    std::vector<AuditAgentRespoonse_agents>& getAgents();
    bool agentsIsSet() const;
    void unsetagents();
    void setAgents(const std::vector<AuditAgentRespoonse_agents>& value);


protected:
    std::vector<AuditAgentRespoonse_agents> agents_;
    bool agentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentResponse_H_
