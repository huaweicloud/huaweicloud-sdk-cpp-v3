
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/PreviewTemplateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListNotificationTemplateRequest
    : public ModelBase
{
public:
    ListNotificationTemplateRequest();
    virtual ~ListNotificationTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNotificationTemplateRequest members

    /// <summary>
    /// 账号id，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PreviewTemplateBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PreviewTemplateBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    PreviewTemplateBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListNotificationTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListNotificationTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTemplateRequest_H_
