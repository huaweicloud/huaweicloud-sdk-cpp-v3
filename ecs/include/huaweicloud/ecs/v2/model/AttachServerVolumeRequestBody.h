
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/AttachServerVolumeOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  AttachServerVolumeRequestBody
    : public ModelBase
{
public:
    AttachServerVolumeRequestBody();
    virtual ~AttachServerVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachServerVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AttachServerVolumeOption getVolumeAttachment() const;
    bool volumeAttachmentIsSet() const;
    void unsetvolumeAttachment();
    void setVolumeAttachment(const AttachServerVolumeOption& value);

    /// <summary>
    /// 是否只预检此次请求。  - true：发送检查请求，不会挂载磁盘。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回响应结果。 - false：发送正常请求，通过检查后并且进行挂载磁盘请求。 默认值：false
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


protected:
    AttachServerVolumeOption volumeAttachment_;
    bool volumeAttachmentIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeRequestBody_H_
