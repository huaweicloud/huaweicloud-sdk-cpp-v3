
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqSettingDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqSettingDto_H_


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
/// **参数解释：** 可集成系统CodeArts Req设置信息。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ReqSettingDto
    : public ModelBase
{
public:
    ReqSettingDto();
    virtual ~ReqSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqSettingDto members

    /// <summary>
    /// **参数解释：** 是否开启集成CodeArts Req **取值范围：** true：开启集成CodeArts Req，false：未开启集成CodeArts Req。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);

    /// <summary>
    /// **参数解释：** 应用排除状态和可关联类别限制的分支列表，该分支指代合并请求的目标分支，可支持多个分支用英文逗号拼接或者正则表达式，在项目层级和代码组层级只支持配置正则表达式。
    /// </summary>

    std::string getBranches() const;
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支的类型，文本或者正则表达式。 **取值范围：** plain代表文本，regex代表正则表达式。
    /// </summary>

    std::string getBranchesType() const;
    bool branchesTypeIsSet() const;
    void unsetbranchesType();
    void setBranchesType(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联的CodeArts Req项目类型。 **取值范围：** scrum代表scrum类型项目，ipd代表IPD类型项目, xboard为看板类型项目。
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// **参数解释：** 可关联类型列表，逗号分隔。
    /// </summary>

    std::string getCategories() const;
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 可关联类型编码列表，逗号分隔。
    /// </summary>

    std::string getCategoryCodes() const;
    bool categoryCodesIsSet() const;
    void unsetcategoryCodes();
    void setCategoryCodes(const std::string& value);

    /// <summary>
    /// **参数解释：** 排除状态列表，逗号分隔。
    /// </summary>

    std::string getExcludeStatuses() const;
    bool excludeStatusesIsSet() const;
    void unsetexcludeStatuses();
    void setExcludeStatuses(const std::string& value);

    /// <summary>
    /// **参数解释：** 排除状态编码列表，逗号分隔。
    /// </summary>

    std::string getExcludeStatusCodes() const;
    bool excludeStatusCodesIsSet() const;
    void unsetexcludeStatusCodes();
    void setExcludeStatusCodes(const std::string& value);


protected:
    bool active_;
    bool activeIsSet_;
    std::string branches_;
    bool branchesIsSet_;
    std::string branchesType_;
    bool branchesTypeIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    std::string categories_;
    bool categoriesIsSet_;
    std::string categoryCodes_;
    bool categoryCodesIsSet_;
    std::string excludeStatuses_;
    bool excludeStatusesIsSet_;
    std::string excludeStatusCodes_;
    bool excludeStatusCodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqSettingDto_H_
