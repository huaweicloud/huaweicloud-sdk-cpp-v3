
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityOptions_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_ECS_V2_EXPORT  SecurityOptions
    : public ModelBase
{
public:
    SecurityOptions();
    virtual ~SecurityOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityOptions members

    /// <summary>
    /// 是否支持安全启动 true:支持安全启动 false:不支持安全启动 默认值：false
    /// </summary>

    bool isSecureBootEnabled() const;
    bool secureBootEnabledIsSet() const;
    void unsetsecureBootEnabled();
    void setSecureBootEnabled(bool value);

    /// <summary>
    /// 是否支持vtpm启动 true:支持vtpm启动 false:不支持vtpm启动 默认值：false
    /// </summary>

    bool isTpmEnabled() const;
    bool tpmEnabledIsSet() const;
    void unsettpmEnabled();
    void setTpmEnabled(bool value);


protected:
    bool secureBootEnabled_;
    bool secureBootEnabledIsSet_;
    bool tpmEnabled_;
    bool tpmEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_SecurityOptions_H_
