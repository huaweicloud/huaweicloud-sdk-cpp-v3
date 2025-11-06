
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SettingsInheritCfgBodyApiDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SettingsInheritCfgBodyApiDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ProjectSettingsInheritCfgDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SettingsInheritCfgBodyApiDto
    : public ModelBase
{
public:
    SettingsInheritCfgBodyApiDto();
    virtual ~SettingsInheritCfgBodyApiDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SettingsInheritCfgBodyApiDto members

    /// <summary>
    /// **参数解释：** 继承设置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<ProjectSettingsInheritCfgDto>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ProjectSettingsInheritCfgDto>& value);


protected:
    std::vector<ProjectSettingsInheritCfgDto> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SettingsInheritCfgBodyApiDto_H_
