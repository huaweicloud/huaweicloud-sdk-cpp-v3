
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowAgentDetailRequest
    : public ModelBase
{
public:
    ShowAgentDetailRequest();
    virtual ~ShowAgentDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgentDetailRequest members

    /// <summary>
    /// 可信节点ID 
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
    ShowAgentDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAgentDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailRequest_H_
