
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskMetadata_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CheckTaskMetadata
    : public ModelBase
{
public:
    CheckTaskMetadata();
    virtual ~CheckTaskMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTaskMetadata members

    /// <summary>
    /// **参数解释：** 插件检查类型 **取值范围：** - addonStatic: 运行中插件巡检 - addonUpgrade: 插件升级前检查  
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查任务ID，用于任务检查结果查询 **取值范围：** 不涉及 
    /// </summary>

    std::string getTaskID() const;
    bool taskIDIsSet() const;
    void unsettaskID();
    void setTaskID(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件模板名称 **取值范围：** cce服务提供的插件模板，可以通过[查询AddonTemplates列表](cce_02_0321.xml)中的items[].metadata.name字段获取 
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件实例名称 **取值范围：** 不涉及 
    /// </summary>

    std::string getAddonInstanceName() const;
    bool addonInstanceNameIsSet() const;
    void unsetaddonInstanceName();
    void setAddonInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件实例ID **取值范围：** 不涉及 
    /// </summary>

    std::string getAddonInstanceID() const;
    bool addonInstanceIDIsSet() const;
    void unsetaddonInstanceID();
    void setAddonInstanceID(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查任务创建时间 **取值范围：** 不涉及 
    /// </summary>

    std::string getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查任务超时时间，仅终态（Failed/Success）任务存在此字段 **取值范围：** 不涉及 
    /// </summary>

    std::string getExpireTimeStamp() const;
    bool expireTimeStampIsSet() const;
    void unsetexpireTimeStamp();
    void setExpireTimeStamp(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string taskID_;
    bool taskIDIsSet_;
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string addonInstanceName_;
    bool addonInstanceNameIsSet_;
    std::string addonInstanceID_;
    bool addonInstanceIDIsSet_;
    std::string createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string expireTimeStamp_;
    bool expireTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskMetadata_H_
