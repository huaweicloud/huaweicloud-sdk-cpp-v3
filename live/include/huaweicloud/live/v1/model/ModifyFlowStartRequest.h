
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowStartRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowStartRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyFlowStartRequest
    : public ModelBase
{
public:
    ModifyFlowStartRequest();
    virtual ~ModifyFlowStartRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyFlowStartRequest members

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);


protected:
    std::string flowId_;
    bool flowIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyFlowStartRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyFlowStartRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyFlowStartRequest_H_
