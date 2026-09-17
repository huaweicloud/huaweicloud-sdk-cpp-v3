
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReleaseReqBodyParams_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReleaseReqBodyParams_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 模板实例参数 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReleaseReqBodyParams
    : public ModelBase
{
public:
    ReleaseReqBodyParams();
    virtual ~ReleaseReqBodyParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReleaseReqBodyParams members

    /// <summary>
    /// **参数解释：** 开启后，仅验证模板参数，不进行安装 **约束限制：** 不涉及 **取值范围：** - true：仅验证 - false：正常安装  **默认取值：** false
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);

    /// <summary>
    /// **参数解释：** 实例名称模板 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getNameTemplate() const;
    bool nameTemplateIsSet() const;
    void unsetnameTemplate();
    void setNameTemplate(const std::string& value);

    /// <summary>
    /// **参数解释：** 安装时是否禁用hooks **约束限制：** 不涉及 **取值范围：** - true：禁用hooks - false：不禁用hooks  **默认取值：** false
    /// </summary>

    bool isNoHooks() const;
    bool noHooksIsSet() const;
    void unsetnoHooks();
    void setNoHooks(bool value);

    /// <summary>
    /// **参数解释：** 模板实例更新时是否保留values，该字段仅在更新指定模板实例时生效 **约束限制：** 不涉及 **取值范围：** - true：保留values - false：不保留values  **默认取值：** false
    /// </summary>

    bool isReplace() const;
    bool replaceIsSet() const;
    void unsetreplace();
    void setReplace(bool value);

    /// <summary>
    /// **参数解释：** 模板实例更新时是否重建实例，该字段仅在更新指定模板实例时生效 **约束限制：** 不涉及 **取值范围：** - true：重建实例 - false：不重建实例  **默认取值：** false
    /// </summary>

    bool isRecreate() const;
    bool recreateIsSet() const;
    void unsetrecreate();
    void setRecreate(bool value);

    /// <summary>
    /// **参数解释：** 模板实例更新时是否重置values，该字段仅在更新指定模板实例时生效 **约束限制：** 不涉及 **取值范围：** - true：重置values - false：不重置values  **默认取值：** false
    /// </summary>

    bool isResetValues() const;
    bool resetValuesIsSet() const;
    void unsetresetValues();
    void setResetValues(bool value);

    /// <summary>
    /// **参数解释：** 回滚实例的版本 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getReleaseVersion() const;
    bool releaseVersionIsSet() const;
    void unsetreleaseVersion();
    void setReleaseVersion(int32_t value);

    /// <summary>
    /// **参数解释：** 更新或者删除时启用hooks **约束限制：** 不涉及 **取值范围：** - true：启用hooks - false：不启用hooks  **默认取值：** false
    /// </summary>

    bool isIncludeHooks() const;
    bool includeHooksIsSet() const;
    void unsetincludeHooks();
    void setIncludeHooks(bool value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    std::string nameTemplate_;
    bool nameTemplateIsSet_;
    bool noHooks_;
    bool noHooksIsSet_;
    bool replace_;
    bool replaceIsSet_;
    bool recreate_;
    bool recreateIsSet_;
    bool resetValues_;
    bool resetValuesIsSet_;
    int32_t releaseVersion_;
    bool releaseVersionIsSet_;
    bool includeHooks_;
    bool includeHooksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReleaseReqBodyParams_H_
