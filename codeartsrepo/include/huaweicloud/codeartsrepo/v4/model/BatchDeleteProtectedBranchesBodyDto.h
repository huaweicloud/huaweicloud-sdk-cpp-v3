
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteProtectedBranchesBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteProtectedBranchesBodyDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BatchDeleteProtectedBranchesBodyDto
    : public ModelBase
{
public:
    BatchDeleteProtectedBranchesBodyDto();
    virtual ~BatchDeleteProtectedBranchesBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteProtectedBranchesBodyDto members

    /// <summary>
    /// **参数解释：** 保护分支名或通配符列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getNames();
    bool namesIsSet() const;
    void unsetnames();
    void setNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> names_;
    bool namesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteProtectedBranchesBodyDto_H_
