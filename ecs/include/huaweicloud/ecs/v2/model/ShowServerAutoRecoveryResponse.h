
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAutoRecoveryResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAutoRecoveryResponse_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerAutoRecoveryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerAutoRecoveryResponse();
    virtual ~ShowServerAutoRecoveryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerAutoRecoveryResponse members

    /// <summary>
    /// 云服务器是否配置了自动恢复动作。  - true：表示配置了自动恢复。 - false：表示没有配置自动恢复。
    /// </summary>

    std::string getSupportAutoRecovery() const;
    bool supportAutoRecoveryIsSet() const;
    void unsetsupportAutoRecovery();
    void setSupportAutoRecovery(const std::string& value);


protected:
    std::string supportAutoRecovery_;
    bool supportAutoRecoveryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAutoRecoveryResponse_H_
