
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/UpdateMessageTemplateRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateMessageTemplateRequest
    : public ModelBase
{
public:
    UpdateMessageTemplateRequest();
    virtual ~UpdateMessageTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateMessageTemplateRequest members

    /// <summary>
    /// 模板唯一的资源标识，可通过查询[消息模板列表](ListMessageTemplates.xml)获取该标识。
    /// </summary>

    std::string getMessageTemplateId() const;
    bool messageTemplateIdIsSet() const;
    void unsetmessageTemplateId();
    void setMessageTemplateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateMessageTemplateRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateMessageTemplateRequestBody& value);


protected:
    std::string messageTemplateId_;
    bool messageTemplateIdIsSet_;
    UpdateMessageTemplateRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateMessageTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateMessageTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequest_H_
