
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskSettingsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskSettingsRequestBody_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskAdvancedSettingsItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 高级配置参数的相关信息，数组不能为空。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateTaskSettingsRequestBody
    : public ModelBase
{
public:
    UpdateTaskSettingsRequestBody();
    virtual ~UpdateTaskSettingsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTaskSettingsRequestBody members

    /// <summary>
    /// **参数解释：** 高级配置参数的相关信息，数组不能为空。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<TaskAdvancedSettingsItem>& getTaskAdvancedSettings();
    bool taskAdvancedSettingsIsSet() const;
    void unsettaskAdvancedSettings();
    void setTaskAdvancedSettings(const std::vector<TaskAdvancedSettingsItem>& value);


protected:
    std::vector<TaskAdvancedSettingsItem> taskAdvancedSettings_;
    bool taskAdvancedSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskSettingsRequestBody_H_
