
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAutoTerminateTimeRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAutoTerminateTimeRequestBody_H_


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
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerAutoTerminateTimeRequestBody
    : public ModelBase
{
public:
    UpdateServerAutoTerminateTimeRequestBody();
    virtual ~UpdateServerAutoTerminateTimeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerAutoTerminateTimeRequestBody members

    /// <summary>
    /// 定时删除时间
    /// </summary>

    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);


protected:
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAutoTerminateTimeRequestBody_H_
