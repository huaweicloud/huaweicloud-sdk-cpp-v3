
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsOption_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateSerialConsoleOptionsOption
    : public ModelBase
{
public:
    UpdateSerialConsoleOptionsOption();
    virtual ~UpdateSerialConsoleOptionsOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSerialConsoleOptionsOption members

    /// <summary>
    /// 弹性云服务器云主机是否支持串口登录
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsOption_H_
