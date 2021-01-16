
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ResizePostPaidServerOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ResizePostPaidServerRequestBody
    : public ModelBase
{
public:
    ResizePostPaidServerRequestBody();
    virtual ~ResizePostPaidServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizePostPaidServerRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResizePostPaidServerOption getResize() const;
    bool resizeIsSet() const;
    void unsetresize();
    void setResize(const ResizePostPaidServerOption& value);


protected:
    ResizePostPaidServerOption resize_;
    bool resizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_
