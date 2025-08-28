
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreateLaunchTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateLaunchTemplateResponse();
    virtual ~CreateLaunchTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLaunchTemplateResponse members

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getLaunchTemplateId() const;
    bool launchTemplateIdIsSet() const;
    void unsetlaunchTemplateId();
    void setLaunchTemplateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string launchTemplateId_;
    bool launchTemplateIdIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateLaunchTemplateResponse_H_
