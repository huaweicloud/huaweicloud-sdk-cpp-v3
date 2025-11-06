
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FilePushPermissionUpdateDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FilePushPermissionUpdateDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/FilePushPermissionActionBodyDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  FilePushPermissionUpdateDto
    : public ModelBase
{
public:
    FilePushPermissionUpdateDto();
    virtual ~FilePushPermissionUpdateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FilePushPermissionUpdateDto members

    /// <summary>
    /// **参数解释：** 仓库文件推送权限ID **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 目录路径或通配符 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件设置列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<FilePushPermissionActionBodyDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<FilePushPermissionActionBodyDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::vector<FilePushPermissionActionBodyDto> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FilePushPermissionUpdateDto_H_
