
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryInheritSettingDto
    : public ModelBase
{
public:
    RepositoryInheritSettingDto();
    virtual ~RepositoryInheritSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryInheritSettingDto members

    /// <summary>
    /// **参数解释：** 设置源类型。 **取值范围：** - protected_branches，保护分支设置。 - protected_tags，保护Tag设置。 - repository_settings，仓库设置。 - push_rules，提交规则设置。 - merge_requests，合并请求设置。 - e2e_settings，E2E设置。 - watermark，水印设置。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 继承设置。 **取值范围：** - inherit，继承上级配置。 - custom，使用当前仓库配置。 - force_inherit，强制继承上级配置。
    /// </summary>

    std::string getInheritMod() const;
    bool inheritModIsSet() const;
    void unsetinheritMod();
    void setInheritMod(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string inheritMod_;
    bool inheritModIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingDto_H_
