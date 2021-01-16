
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchStopServersOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchStopServersRequestBody
    : public ModelBase
{
public:
    BatchStopServersRequestBody();
    virtual ~BatchStopServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopServersRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchStopServersOption getOsStop() const;
    bool osStopIsSet() const;
    void unsetosStop();
    void setOsStop(const BatchStopServersOption& value);


protected:
    BatchStopServersOption osStop_;
    bool osStopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_
