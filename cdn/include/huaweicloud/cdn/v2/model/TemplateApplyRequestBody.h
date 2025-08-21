
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateApplyRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateApplyRequestBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 应用模板配置请求体 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TemplateApplyRequestBody
    : public ModelBase
{
public:
    TemplateApplyRequestBody();
    virtual ~TemplateApplyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateApplyRequestBody members

    /// <summary>
    /// **参数解释：** 域名列表，多个域名使用逗号分隔 **约束限制：** 不涉及 **取值范围：** 单次最多应用50个域名 **默认取值：** 不涉及
    /// </summary>

    std::string getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::string& value);


protected:
    std::string resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateApplyRequestBody_H_
