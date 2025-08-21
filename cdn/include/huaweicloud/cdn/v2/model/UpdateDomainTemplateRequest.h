
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainTemplateRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainTemplateRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/CreateTemplateRequestBody.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateDomainTemplateRequest
    : public ModelBase
{
public:
    UpdateDomainTemplateRequest();
    virtual ~UpdateDomainTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainTemplateRequest members

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

    CreateTemplateRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTemplateRequestBody& value);


protected:
    std::string tmlId_;
    bool tmlIdIsSet_;
    CreateTemplateRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainTemplateRequest_H_
