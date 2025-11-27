
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateAccessControlTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateAccessControlTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/UrlAccessControlTaskRequestBody.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  CreateAccessControlTaskRequest
    : public ModelBase
{
public:
    CreateAccessControlTaskRequest();
    virtual ~CreateAccessControlTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccessControlTaskRequest members

    /// <summary>
    /// **参数解释：** 操作类型， **约束限制：** 不涉及 **取值范围：** - ban：禁用 - unban：解禁  **默认取值：** 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UrlAccessControlTaskRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UrlAccessControlTaskRequestBody& value);


protected:
    std::string action_;
    bool actionIsSet_;
    UrlAccessControlTaskRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAccessControlTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAccessControlTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateAccessControlTaskRequest_H_
