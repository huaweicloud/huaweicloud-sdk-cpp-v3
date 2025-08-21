
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteDomainTemplateRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteDomainTemplateRequest_H_


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
class HUAWEICLOUD_CDN_V2_EXPORT  DeleteDomainTemplateRequest
    : public ModelBase
{
public:
    DeleteDomainTemplateRequest();
    virtual ~DeleteDomainTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDomainTemplateRequest members

    /// <summary>
    /// **参数解释：** 域名模板ID，可以通过查询域名模板列表接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTmlId() const;
    bool tmlIdIsSet() const;
    void unsettmlId();
    void setTmlId(const std::string& value);


protected:
    std::string tmlId_;
    bool tmlIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDomainTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDomainTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteDomainTemplateRequest_H_
