
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteLaunchTemplatesRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteLaunchTemplatesRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  DeleteLaunchTemplatesRequest
    : public ModelBase
{
public:
    DeleteLaunchTemplatesRequest();
    virtual ~DeleteLaunchTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLaunchTemplatesRequest members

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getLaunchTemplateId() const;
    bool launchTemplateIdIsSet() const;
    void unsetlaunchTemplateId();
    void setLaunchTemplateId(const std::string& value);


protected:
    std::string launchTemplateId_;
    bool launchTemplateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteLaunchTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteLaunchTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteLaunchTemplatesRequest_H_
