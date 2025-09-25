
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NamespaceBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NamespaceBasicDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  NamespaceBasicDto
    : public ModelBase
{
public:
    NamespaceBasicDto();
    virtual ~NamespaceBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NamespaceBasicDto members

    /// <summary>
    /// **参数解释：** 命名空间ID。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 命名空间名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 开发模式。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 类型。 **约束限制：** 不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** 完整路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 完整名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// **参数解释：** 父级ID。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// **参数解释：** 可见级别。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 开启文件权限控制。 **约束限制：** 不涉及。
    /// </summary>

    bool isEnableFileControl() const;
    bool enableFileControlIsSet() const;
    void unsetenableFileControl();
    void setEnableFileControl(bool value);

    /// <summary>
    /// **参数解释：** 所有人ID。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    bool enableFileControl_;
    bool enableFileControlIsSet_;
    int32_t ownerId_;
    bool ownerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NamespaceBasicDto_H_
