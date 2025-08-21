
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordRequest_H_


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
class HUAWEICLOUD_CDN_V2_EXPORT  ShowAppliedTemplateRecordRequest
    : public ModelBase
{
public:
    ShowAppliedTemplateRecordRequest();
    virtual ~ShowAppliedTemplateRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppliedTemplateRecordRequest members

    /// <summary>
    /// **参数解释：** 域名模板ID，可以通过查询域名模板列表接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTmlId() const;
    bool tmlIdIsSet() const;
    void unsettmlId();
    void setTmlId(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板名称 **约束限制：** 不涉及 **取值范围：** - 1-100个字符 - 仅支持字母、数字、中文、下划线（_）、中横线（-） **默认取值：** 不涉及
    /// </summary>

    std::string getTmlName() const;
    bool tmlNameIsSet() const;
    void unsettmlName();
    void setTmlName(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名模板操作ID，可以通过本接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getOperatorId() const;
    bool operatorIdIsSet() const;
    void unsetoperatorId();
    void setOperatorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询的页码 **约束限制：** 不涉及 **取值范围：** 0-65535 **默认取值：** 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 每页应用记录的数量 **约束限制：** 不涉及 **取值范围：** 1-10000 **默认取值：** 30
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string tmlId_;
    bool tmlIdIsSet_;
    std::string tmlName_;
    bool tmlNameIsSet_;
    std::string operatorId_;
    bool operatorIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAppliedTemplateRecordRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAppliedTemplateRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowAppliedTemplateRecordRequest_H_
