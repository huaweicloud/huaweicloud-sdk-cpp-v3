
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotCluster.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateAutopilotClusterRequest
    : public ModelBase
{
public:
    CreateAutopilotClusterRequest();
    virtual ~CreateAutopilotClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAutopilotClusterRequest members

    /// <summary>
    /// 
    /// </summary>

    AutopilotCluster getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AutopilotCluster& value);


protected:
    AutopilotCluster body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAutopilotClusterRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAutopilotClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterRequest_H_
