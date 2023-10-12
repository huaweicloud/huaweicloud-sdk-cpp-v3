
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchStartServersOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchStartServersRequestBody
    : public ModelBase
{
public:
    BatchStartServersRequestBody();
    virtual ~BatchStartServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchStartServersRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchStartServersOption getOsStart() const;
    bool osStartIsSet() const;
    void unsetosStart();
    void setOsStart(const BatchStartServersOption& value);


protected:
    BatchStartServersOption osStart_;
    bool osStartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_
