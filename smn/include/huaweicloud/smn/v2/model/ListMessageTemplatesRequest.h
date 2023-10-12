
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListMessageTemplatesRequest
    : public ModelBase
{
public:
    ListMessageTemplatesRequest();
    virtual ~ListMessageTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMessageTemplatesRequest members

    /// <summary>
    /// 偏移量，偏移量为一个大于0小于资源总个数的整数，表示查询该偏移量后面的所有的资源，默认值为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 取值范围：1~100，取值一般为10，20，50。功能说明：每页返回的资源个数。默认值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 模板的名称。  只能包含大写字母、小写字母、数字、-和_，且必须由大写字母、小写字母或数字开头，长度在1到64个字符之间。
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


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string messageTemplateName_;
    bool messageTemplateNameIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMessageTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListMessageTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesRequest_H_
