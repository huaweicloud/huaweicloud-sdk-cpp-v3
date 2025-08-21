
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateItem_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateItem_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/TemplateConfigs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 查询模板配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TemplateItem
    : public ModelBase
{
public:
    TemplateItem();
    virtual ~TemplateItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateItem members

    /// <summary>
    /// **参数解释：** 账户ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

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
    /// **参数解释：** 域名模板类型 **约束限制：** 不涉及 **取值范围：** - 1: 系统预置模板 - 2: 租户自定义模板 **默认取值：** 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释：** 修改时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    TemplateConfigs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const TemplateConfigs& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string tmlName_;
    bool tmlNameIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string tmlId_;
    bool tmlIdIsSet_;
    int32_t type_;
    bool typeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;
    TemplateConfigs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateItem_H_
