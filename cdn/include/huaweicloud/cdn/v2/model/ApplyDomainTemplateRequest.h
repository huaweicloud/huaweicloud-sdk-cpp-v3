
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/TemplateApplyRequestBody.h>

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
class HUAWEICLOUD_CDN_V2_EXPORT  ApplyDomainTemplateRequest
    : public ModelBase
{
public:
    ApplyDomainTemplateRequest();
    virtual ~ApplyDomainTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyDomainTemplateRequest members

    /// <summary>
    /// **参数解释：** 域名模板ID，可以通过查询域名模板列表接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTmlId() const;
    bool tmlIdIsSet() const;
    void unsettmlId();
    void setTmlId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateApplyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TemplateApplyRequestBody& value);


protected:
    std::string tmlId_;
    bool tmlIdIsSet_;
    TemplateApplyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ApplyDomainTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ApplyDomainTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ApplyDomainTemplateRequest_H_
