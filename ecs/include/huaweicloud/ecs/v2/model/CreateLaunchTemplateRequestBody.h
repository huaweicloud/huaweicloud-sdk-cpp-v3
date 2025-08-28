
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/LaunchTemplateOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreateLaunchTemplateRequestBody
    : public ModelBase
{
public:
    CreateLaunchTemplateRequestBody();
    virtual ~CreateLaunchTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLaunchTemplateRequestBody members

    /// <summary>
    /// 
    /// </summary>

    LaunchTemplateOption getLaunchTemplate() const;
    bool launchTemplateIsSet() const;
    void unsetlaunchTemplate();
    void setLaunchTemplate(const LaunchTemplateOption& value);

    /// <summary>
    /// 预检，只校验权限等初级信息。
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


protected:
    LaunchTemplateOption launchTemplate_;
    bool launchTemplateIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateRequestBody_H_
