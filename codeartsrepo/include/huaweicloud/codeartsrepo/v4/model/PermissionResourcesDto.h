
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PermissionResourcesDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PermissionResourcesDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  PermissionResourcesDto
    : public ModelBase
{
public:
    PermissionResourcesDto();
    virtual ~PermissionResourcesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionResourcesDto members

    /// <summary>
    /// **参数解释：** 资源id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 资源名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 禁用资源名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getResourceNameDisplay() const;
    bool resourceNameDisplayIsSet() const;
    void unsetresourceNameDisplay();
    void setResourceNameDisplay(const std::string& value);

    /// <summary>
    /// **参数解释：** 禁用资源中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getResourceNameCnDisplay() const;
    bool resourceNameCnDisplayIsSet() const;
    void unsetresourceNameCnDisplay();
    void setResourceNameCnDisplay(const std::string& value);

    /// <summary>
    /// **参数解释：** 权限路径。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string resourceNameDisplay_;
    bool resourceNameDisplayIsSet_;
    std::string resourceNameCnDisplay_;
    bool resourceNameCnDisplayIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PermissionResourcesDto_H_
