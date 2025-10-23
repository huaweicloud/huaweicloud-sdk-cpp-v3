
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionSwitcher_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionSwitcher_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProtectedActionSwitcher
    : public ModelBase
{
public:
    ProtectedActionSwitcher();
    virtual ~ProtectedActionSwitcher();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedActionSwitcher members

    /// <summary>
    /// **参数解释：** 开关名。 **约束限制：** 不涉及。 **取值范围：** - allowed_force_push，允许强制推送（默认不允许强推）。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启。 **约束限制：** 不涉及。 **取值范围：** - true，开启 - false，关闭 **默认取值：** 不涉及。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionSwitcher_H_
