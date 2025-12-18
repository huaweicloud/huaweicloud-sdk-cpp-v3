
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInfo_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonInfo
    : public ModelBase
{
public:
    AddonInfo();
    virtual ~AddonInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonInfo members

    /// <summary>
    /// **参数解释：** 插件模板名称 **约束限制：** 不涉及 **取值范围：** cce服务支持的插件模板 **默认取值：** 不涉及 
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件实例ID，可以通过[获取AddonInstance列表](cce_02_0326.xml)中的items[].metadata.uid字段获取 **约束限制：** 此参数必填 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getAddonInstanceID() const;
    bool addonInstanceIDIsSet() const;
    void unsetaddonInstanceID();
    void setAddonInstanceID(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件升级的目标版本 **约束限制：** 插件升级场景下，此参数必填。 **取值范围：** cce服务提供的插件版本，可以通过[查询AddonTemplates列表](cce_02_0321.xml)中的items[].spec.versions.version字段获取 **默认取值：** 不涉及 
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查类型 **约束限制：** 此参数必填。 **取值范围：** - addonStatic: 运行中插件巡检 - addonUpgrade: 插件升级前检查  **默认取值：** 不涉及 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件模板编辑/升级参数（各插件不同），请根据具体插件模板信息填写参数 **约束限制：** 不涉及 
    /// </summary>

    std::map<std::string, Object>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, Object>& value);


protected:
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string addonInstanceID_;
    bool addonInstanceIDIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, Object> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInfo_H_
