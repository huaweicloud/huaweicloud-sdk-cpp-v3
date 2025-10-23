
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionBasicApiDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionBasicApiDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ForceActionEnableDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProtectedActionBasicApiDto
    : public ModelBase
{
public:
    ProtectedActionBasicApiDto();
    virtual ~ProtectedActionBasicApiDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedActionBasicApiDto members

    /// <summary>
    /// **参数解释：** 事件名称。 **取值范围：push 提交,merge 合并** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 用户ID列表。 **约束限制：** 不涉及。 **取值范围：** Integer **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 成员组ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getUserTeamIds();
    bool userTeamIdsIsSet() const;
    void unsetuserTeamIds();
    void setUserTeamIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 关联角色ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getRelatedRoleIds();
    bool relatedRoleIdsIsSet() const;
    void unsetrelatedRoleIds();
    void setRelatedRoleIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 操作选择列表。
    /// </summary>

    std::vector<ForceActionEnableDto>& getAdditionSwitchers();
    bool additionSwitchersIsSet() const;
    void unsetadditionSwitchers();
    void setAdditionSwitchers(const std::vector<ForceActionEnableDto>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<int32_t> userIds_;
    bool userIdsIsSet_;
    std::vector<int32_t> userTeamIds_;
    bool userTeamIdsIsSet_;
    std::vector<std::string> relatedRoleIds_;
    bool relatedRoleIdsIsSet_;
    std::vector<ForceActionEnableDto> additionSwitchers_;
    bool additionSwitchersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProtectedActionBasicApiDto_H_
