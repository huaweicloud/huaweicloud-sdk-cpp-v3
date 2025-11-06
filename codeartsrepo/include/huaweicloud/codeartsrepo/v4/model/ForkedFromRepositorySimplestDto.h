
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkedFromRepositorySimplestDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkedFromRepositorySimplestDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ForkedFromRepositorySimplestDto
    : public ModelBase
{
public:
    ForkedFromRepositorySimplestDto();
    virtual ~ForkedFromRepositorySimplestDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForkedFromRepositorySimplestDto members

    /// <summary>
    /// **参数解释：** 带命名空间的仓库名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 带命名空间的仓库路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);

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
    /// **参数解释：** 仓库ID **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 产品ID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 产品名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ForkedFromRepositorySimplestDto_H_
