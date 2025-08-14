
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyTargetBase_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyTargetBase_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略目标
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  PolicyTargetBase
    : public ModelBase
{
public:
    PolicyTargetBase();
    virtual ~PolicyTargetBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyTargetBase members

    /// <summary>
    /// **参数说明**：策略绑定的目标类型。 **取值范围**：device|product|app，device表示设备，product表示产品，app表示整个资源空间。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 策略绑定的目标ID
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyTargetBase_H_
