
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UnregisterAgentRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UnregisterAgentRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UnregisterAgentRequest
    : public ModelBase
{
public:
    UnregisterAgentRequest();
    virtual ~UnregisterAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnregisterAgentRequest members

    /// <summary>
    /// 客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UnregisterAgentRequest& dereference_from_shared_ptr(std::shared_ptr<UnregisterAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UnregisterAgentRequest_H_
