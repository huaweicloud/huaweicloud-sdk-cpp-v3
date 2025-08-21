
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainTemplateRequest
    : public ModelBase
{
public:
    ShowDomainTemplateRequest();
    virtual ~ShowDomainTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainTemplateRequest members

    /// <summary>
    /// **参数解释：** 域名模板名称 **约束限制：** 不涉及 **取值范围：** - 1-100个字符 - 仅支持字母、数字、中文、下划线（_）、中横线（-） **默认取值：** 不涉及
    /// </summary>

    std::string getTmlName() const;
    bool tmlNameIsSet() const;
    void unsettmlName();
    void setTmlName(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板ID，可以通过本接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTmlId() const;
    bool tmlIdIsSet() const;
    void unsettmlId();
    void setTmlId(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板类型 **约束限制：** 不涉及 **取值范围：** - 1: 系统预置模板 - 2: 租户自定义模板 **默认取值：** 不涉及
    /// </summary>

    int32_t getTmlType() const;
    bool tmlTypeIsSet() const;
    void unsettmlType();
    void setTmlType(int32_t value);

    /// <summary>
    /// **参数解释：** 分页大小 **约束限制：** 不涉及 **取值范围：** 1-10000 **默认取值：** 30
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询的页码 **约束限制：** 不涉及 **取值范围：** 0-65535 **默认取值：** 0
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);


protected:
    std::string tmlName_;
    bool tmlNameIsSet_;
    std::string tmlId_;
    bool tmlIdIsSet_;
    int32_t tmlType_;
    bool tmlTypeIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainTemplateRequest_H_
