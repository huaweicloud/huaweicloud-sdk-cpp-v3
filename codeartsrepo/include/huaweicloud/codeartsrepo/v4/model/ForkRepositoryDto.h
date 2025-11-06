
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkRepositoryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkRepositoryDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ForkRepositoryBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ForkRepositoryLeastDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ForkRepositoryBaseDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ForkRepositoryDto
    : public ModelBase
{
public:
    ForkRepositoryDto();
    virtual ~ForkRepositoryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForkRepositoryDto members

    /// <summary>
    /// **参数解释：** 仓库ID。 **约束限制：** 不涉及。
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
    /// **参数解释：** 是否归档。 **约束限制：** 不涉及。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 产品ID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数解释：** 产品名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// **参数解释：** 带命名空间的仓库路径。 **约束限制：** view&#x3D;least时返回
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 命名空间。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 开发模式。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 可见性。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释：** 安全级别。 **约束限制：**  view&#x3D;basic时返回
    /// </summary>

    std::string getSecurity() const;
    bool securityIsSet() const;
    void unsetsecurity();
    void setSecurity(const std::string& value);

    /// <summary>
    /// **参数解释：** 关注数。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    int32_t getStarCount() const;
    bool starCountIsSet() const;
    void unsetstarCount();
    void setStarCount(int32_t value);

    /// <summary>
    /// **参数解释：** Fork数。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    int32_t getForksCount() const;
    bool forksCountIsSet() const;
    void unsetforksCount();
    void setForksCount(int32_t value);

    /// <summary>
    /// **参数解释：** 开启的合并请求数。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 是否已关注。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

    /// <summary>
    /// **参数解释：** 带命名空间的仓库名称。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后活动时间。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getLastActivityAt() const;
    bool lastActivityAtIsSet() const;
    void unsetlastActivityAt();
    void setLastActivityAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **约束限制：** view&#x3D;basic时返回
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;
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
    int32_t starCount_;
    bool starCountIsSet_;
    int32_t forksCount_;
    bool forksCountIsSet_;
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;
    bool starred_;
    bool starredIsSet_;
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    std::string lastActivityAt_;
    bool lastActivityAtIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkRepositoryDto_H_
