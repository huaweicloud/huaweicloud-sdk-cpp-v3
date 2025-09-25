
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedBranchBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedBranchBodyDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryProtectedBranchBodyDto
    : public ModelBase
{
public:
    RepositoryProtectedBranchBodyDto();
    virtual ~RepositoryProtectedBranchBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryProtectedBranchBodyDto members

    /// <summary>
    /// **参数解释：** 保护分支名或通配符数组。 **约束限制：** 必传，每项需要至少能匹配到一个分支。 **取值范围：** 字符串 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getNames();
    bool namesIsSet() const;
    void unsetnames();
    void setNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 事件设置列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryProtectedBranchBodyDto_H_
