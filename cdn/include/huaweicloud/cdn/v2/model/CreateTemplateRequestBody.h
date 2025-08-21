
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateTemplateRequestBody_H_


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
/// **参数解释：** 创建域名模板配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateTemplateRequestBody
    : public ModelBase
{
public:
    CreateTemplateRequestBody();
    virtual ~CreateTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplateRequestBody members

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
    /// 
    /// </summary>

    TemplateConfigs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const TemplateConfigs& value);


protected:
    std::string tmlName_;
    bool tmlNameIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    TemplateConfigs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateTemplateRequestBody_H_
