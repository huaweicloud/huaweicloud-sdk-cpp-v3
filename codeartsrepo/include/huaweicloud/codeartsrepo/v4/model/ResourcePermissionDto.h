
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResourcePermissionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResourcePermissionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ResourcePermissionDto
    : public ModelBase
{
public:
    ResourcePermissionDto();
    virtual ~ResourcePermissionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourcePermissionDto members

    /// <summary>
    /// **参数解释：** 记录id。
    /// </summary>

    int32_t getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(int32_t value);

    /// <summary>
    /// **参数解释：** 操作。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDisplayNameCn() const;
    bool displayNameCnIsSet() const;
    void unsetdisplayNameCn();
    void setDisplayNameCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释：** 是否编辑。
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);


protected:
    int32_t permissionId_;
    bool permissionIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string displayNameCn_;
    bool displayNameCnIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    bool editable_;
    bool editableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResourcePermissionDto_H_
