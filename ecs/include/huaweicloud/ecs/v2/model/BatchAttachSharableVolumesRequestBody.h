
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ecs/v2/model/BatchAttachSharableVolumesOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAttachSharableVolumesRequestBody
    : public ModelBase
{
public:
    BatchAttachSharableVolumesRequestBody();
    virtual ~BatchAttachSharableVolumesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAttachSharableVolumesRequestBody members

    /// <summary>
    /// 共享磁盘需要挂载的弹性云服务器列表。
    /// </summary>

    std::vector<BatchAttachSharableVolumesOption>& getServerinfo();
    bool serverinfoIsSet() const;
    void unsetserverinfo();
    void setServerinfo(const std::vector<BatchAttachSharableVolumesOption>& value);


protected:
    std::vector<BatchAttachSharableVolumesOption> serverinfo_;
    bool serverinfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_
