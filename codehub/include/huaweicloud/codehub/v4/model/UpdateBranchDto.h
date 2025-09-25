
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateBranchDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateBranchDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateBranchDto
    : public ModelBase
{
public:
    UpdateBranchDto();
    virtual ~UpdateBranchDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBranchDto members

    /// <summary>
    /// **参数解释：** 新分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNewBranch() const;
    bool newBranchIsSet() const;
    void unsetnewBranch();
    void setNewBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 基于分支名称。  **约束限制：** 不支持以 - . refs/heads/ refs/remotes/ 开头，不支持空格 [ \\ &lt; ~ ^ : ? * ! ( ) &#39; \&quot; | 等特殊字符，不支持以. / .lock结尾。  **取值范围：** 字符串长度不少于1，不超过200。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOldBranch() const;
    bool oldBranchIsSet() const;
    void unsetoldBranch();
    void setOldBranch(const std::string& value);


protected:
    std::string newBranch_;
    bool newBranchIsSet_;
    std::string oldBranch_;
    bool oldBranchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateBranchDto_H_
