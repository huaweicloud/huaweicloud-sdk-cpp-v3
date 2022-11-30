
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerOsWithCloudInitRequestBody
    : public ModelBase
{
public:
    ChangeServerOsWithCloudInitRequestBody();
    virtual ~ChangeServerOsWithCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithCloudInitRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ChangeServerOsWithCloudInitOption getOsChange() const;
    bool osChangeIsSet() const;
    void unsetosChange();
    void setOsChange(const ChangeServerOsWithCloudInitOption& value);


protected:
    ChangeServerOsWithCloudInitOption osChange_;
    bool osChangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_
