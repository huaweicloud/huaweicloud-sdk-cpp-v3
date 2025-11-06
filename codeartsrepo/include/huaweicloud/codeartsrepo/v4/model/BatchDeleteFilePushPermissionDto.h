
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteFilePushPermissionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteFilePushPermissionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BatchDeleteFilePushPermissionDto
    : public ModelBase
{
public:
    BatchDeleteFilePushPermissionDto();
    virtual ~BatchDeleteFilePushPermissionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteFilePushPermissionDto members

    /// <summary>
    /// **参数解释：** 推送权限ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(std::vector<int32_t> value);


protected:
    std::vector<int32_t> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteFilePushPermissionDto_H_
