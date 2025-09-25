
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateProtectedBranchesBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateProtectedBranchesBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ProtectedBranchProtectedActionBodyDto.h>
#include <string>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BatchUpdateProtectedBranchesBodyDto
    : public ModelBase
{
public:
    BatchUpdateProtectedBranchesBodyDto();
    virtual ~BatchUpdateProtectedBranchesBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateProtectedBranchesBodyDto members

    /// <summary>
    /// **参数解释：** 保护分支名列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getNames();
    bool namesIsSet() const;
    void unsetnames();
    void setNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 保护事件列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<ProtectedBranchProtectedActionBodyDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ProtectedBranchProtectedActionBodyDto>& value);


protected:
    std::vector<std::string> names_;
    bool namesIsSet_;
    std::vector<ProtectedBranchProtectedActionBodyDto> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchUpdateProtectedBranchesBodyDto_H_
