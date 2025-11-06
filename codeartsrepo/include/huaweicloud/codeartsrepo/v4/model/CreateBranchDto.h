
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateBranchDto
    : public ModelBase
{
public:
    CreateBranchDto();
    virtual ~CreateBranchDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBranchDto members

    /// <summary>
    /// **参数解释：** 分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 基于分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支描述。  **约束限制：** 无。  **取值范围：** 字符串长度不少于1，不超过2000。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联工作项列表。  **约束限制：** 无。  **取值范围：** 无。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getRelatedIds();
    bool relatedIdsIsSet() const;
    void unsetrelatedIds();
    void setRelatedIds(const std::vector<std::string>& value);


protected:
    std::string branch_;
    bool branchIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> relatedIds_;
    bool relatedIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchDto_H_
