
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyRecord_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyRecord_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/Resource.h>
#include <string>
#include <huaweicloud/cdn/v2/model/TemplateConfigs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 域名模板应用记录 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ApplyRecord
    : public ModelBase
{
public:
    ApplyRecord();
    virtual ~ApplyRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyRecord members

    /// <summary>
    /// **参数解释：** 应用模板结果 **约束限制：** 不涉及 **取值范围：** - success: 应用模板成功 - fail: 应用模板失败 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getOperatorId() const;
    bool operatorIdIsSet() const;
    void unsetoperatorId();
    void setOperatorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板名称 **约束限制：** 不涉及 **取值范围：** - 1-100个字符 - 仅支持字母、数字、中文、下划线（_）、中横线（-） **默认取值：** 不涉及
    /// </summary>

    std::string getTmlName() const;
    bool tmlNameIsSet() const;
    void unsettmlName();
    void setTmlName(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板描述 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTmlId() const;
    bool tmlIdIsSet() const;
    void unsettmlId();
    void setTmlId(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板应用时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int64_t getApplyTime() const;
    bool applyTimeIsSet() const;
    void unsetapplyTime();
    void setApplyTime(int64_t value);

    /// <summary>
    /// **参数解释：** 域名模板类型 **约束限制：** 不涉及 **取值范围：** - 1: 系统预置模板 - 2: 租户自定义模板 **默认取值：** 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释：** 账户ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Resource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resource>& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateConfigs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const TemplateConfigs& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string operatorId_;
    bool operatorIdIsSet_;
    std::string tmlName_;
    bool tmlNameIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string tmlId_;
    bool tmlIdIsSet_;
    int64_t applyTime_;
    bool applyTimeIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::vector<Resource> resources_;
    bool resourcesIsSet_;
    TemplateConfigs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyRecord_H_
