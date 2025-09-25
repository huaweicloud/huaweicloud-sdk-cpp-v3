
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingsBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingsBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/RepositoryInheritSettingUpdateBodyDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryInheritSettingsBodyDto
    : public ModelBase
{
public:
    RepositoryInheritSettingsBodyDto();
    virtual ~RepositoryInheritSettingsBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryInheritSettingsBodyDto members

    /// <summary>
    /// **参数解释：** 继承设置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<RepositoryInheritSettingUpdateBodyDto>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<RepositoryInheritSettingUpdateBodyDto>& value);


protected:
    std::vector<RepositoryInheritSettingUpdateBodyDto> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryInheritSettingsBodyDto_H_
