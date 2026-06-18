
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookBranchCfgDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookBranchCfgDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  WebHookBranchCfgDto
    : public ModelBase
{
public:
    WebHookBranchCfgDto();
    virtual ~WebHookBranchCfgDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebHookBranchCfgDto members

    /// <summary>
    /// **参数解释：** 分支类型。 **取值范围：** - 0，文本。 - 1，通配符。 - 2，正则。
    /// </summary>

    int32_t getBranchType() const;
    bool branchTypeIsSet() const;
    void unsetbranchType();
    void setBranchType(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名配置。 **取值范围：** 最小1个字节，最大255字节
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库名类型。 **取值范围：** - 0，文本。 - 1，通配符。 - 2，正则。
    /// </summary>

    int32_t getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库名配置。 **取值范围：** 最小1个字节，最大255字节
    /// </summary>

    std::string getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const std::string& value);


protected:
    int32_t branchType_;
    bool branchTypeIsSet_;
    std::string branch_;
    bool branchIsSet_;
    int32_t projectType_;
    bool projectTypeIsSet_;
    std::string project_;
    bool projectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookBranchCfgDto_H_
