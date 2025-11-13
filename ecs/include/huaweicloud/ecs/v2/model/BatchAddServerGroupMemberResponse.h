
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/BatchOperateResultResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAddServerGroupMemberResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchAddServerGroupMemberResponse();
    virtual ~BatchAddServerGroupMemberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddServerGroupMemberResponse members

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<BatchOperateResultResponse>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<BatchOperateResultResponse>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<BatchOperateResultResponse> servers_;
    bool serversIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberResponse_H_
