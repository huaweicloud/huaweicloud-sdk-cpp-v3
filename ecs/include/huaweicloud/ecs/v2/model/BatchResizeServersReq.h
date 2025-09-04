
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersReq_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersReq_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchResizeServersOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchResizeServersReq
    : public ModelBase
{
public:
    BatchResizeServersReq();
    virtual ~BatchResizeServersReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeServersReq members

    /// <summary>
    /// 
    /// </summary>

    BatchResizeServersOption getResize() const;
    bool resizeIsSet() const;
    void unsetresize();
    void setResize(const BatchResizeServersOption& value);


protected:
    BatchResizeServersOption resize_;
    bool resizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersReq_H_
