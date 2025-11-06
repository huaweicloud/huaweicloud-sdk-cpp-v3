
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRepositoryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRepositoryDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BasicRepositoryDto
    : public ModelBase
{
public:
    BasicRepositoryDto();
    virtual ~BasicRepositoryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicRepositoryDto members

    /// <summary>
    /// **参数解释：** 仓库ID **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 命名空间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 开发模式。 枚举值：normal：合并请求模式；CR：变更请求模式。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库可见性。 枚举值：private：私有；internal：内部公开；public：公开。 **约束限制：** 不涉及。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释：** 安全级别。 枚举值：product_internal：项目内公开；tenant_internal：租户内公开。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSecurity() const;
    bool securityIsSet() const;
    void unsetsecurity();
    void setSecurity(const std::string& value);

    /// <summary>
    /// **参数解释：** 包含命名空间的仓库名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否归档。true：已归档；false：未归档。 **约束限制：** 不涉及。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 仓库状态。 **约束限制：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string security_;
    bool securityIsSet_;
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BasicRepositoryDto_H_
