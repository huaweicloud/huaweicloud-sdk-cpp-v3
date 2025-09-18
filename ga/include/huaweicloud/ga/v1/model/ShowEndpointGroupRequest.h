
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowEndpointGroupRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowEndpointGroupRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ShowEndpointGroupRequest
    : public ModelBase
{
public:
    ShowEndpointGroupRequest();
    virtual ~ShowEndpointGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEndpointGroupRequest members

    /// <summary>
    /// 终端节点组ID。
    /// </summary>

    std::string getEndpointGroupId() const;
    bool endpointGroupIdIsSet() const;
    void unsetendpointGroupId();
    void setEndpointGroupId(const std::string& value);


protected:
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEndpointGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEndpointGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowEndpointGroupRequest_H_
