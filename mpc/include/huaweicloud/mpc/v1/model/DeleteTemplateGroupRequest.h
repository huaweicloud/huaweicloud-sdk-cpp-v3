
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateGroupRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateGroupRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteTemplateGroupRequest
    : public ModelBase
{
public:
    DeleteTemplateGroupRequest();
    virtual ~DeleteTemplateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTemplateGroupRequest members

    /// <summary>
    /// 模板组id 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTemplateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTemplateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateGroupRequest_H_
