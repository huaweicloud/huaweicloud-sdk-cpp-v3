
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CreateMessageTemplateRequestBody
    : public ModelBase
{
public:
    CreateMessageTemplateRequestBody();
    virtual ~CreateMessageTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMessageTemplateRequestBody members

    /// <summary>
    /// 创建模板的名称。只能包含大写字母、小写字母、数字、-和_，且必须由大写字母、小写字母或数字开头，长度在1到64个字符之间。
    /// </summary>

    std::string getMessageTemplateName() const;
    bool messageTemplateNameIsSet() const;
    void unsetmessageTemplateName();
    void setMessageTemplateName(const std::string& value);

    /// <summary>
    /// 模板支持的协议类型。  目前支持的协议包括：  “default”：默认协议。  “email”：邮件传输协议。  “sms”：短信传输协议。  “functionstage”：FunctionGraph（函数）传输协议。  “dms”：DMS传输协议。  “http”、“https”：HTTP/HTTPS传输协议。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 模板内容，模板目前仅支持纯文本模式。模板内容不能空，最大支持256KB。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string messageTemplateName_;
    bool messageTemplateNameIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequestBody_H_
