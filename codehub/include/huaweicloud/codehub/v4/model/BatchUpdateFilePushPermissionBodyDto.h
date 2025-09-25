
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateFilePushPermissionBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateFilePushPermissionBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/FilePushPermissionUpdateDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BatchUpdateFilePushPermissionBodyDto
    : public ModelBase
{
public:
    BatchUpdateFilePushPermissionBodyDto();
    virtual ~BatchUpdateFilePushPermissionBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateFilePushPermissionBodyDto members

    /// <summary>
    /// **参数解释：** 文件推送权限更新列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<FilePushPermissionUpdateDto>& getPermissions();
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(const std::vector<FilePushPermissionUpdateDto>& value);


protected:
    std::vector<FilePushPermissionUpdateDto> permissions_;
    bool permissionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateFilePushPermissionBodyDto_H_
