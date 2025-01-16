
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListMessageTemplateDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMessageTemplateDetailsResponse();
    virtual ~ListMessageTemplateDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMessageTemplateDetailsResponse members

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getMessageTemplateId() const;
    bool messageTemplateIdIsSet() const;
    void unsetmessageTemplateId();
    void setMessageTemplateId(const std::string& value);

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getMessageTemplateName() const;
    bool messageTemplateNameIsSet() const;
    void unsetmessageTemplateName();
    void setMessageTemplateName(const std::string& value);

    /// <summary>
    /// 模板支持的协议类型。  目前支持的协议包括：  “default”：默认协议。  “email”：邮件传输协议。  “sms”：短信传输协议。  “functionstage”：FunctionGraph（函数）传输协议。  “http”、“https”：HTTP/HTTPS传输协议。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 模板tag列表。  是消息模板“{}”内的字段，在具体使用消息模板时，可根据实际情况替为该字段赋值。
    /// </summary>

    std::vector<std::string>& getTagNames();
    bool tagNamesIsSet() const;
    void unsettagNames();
    void setTagNames(const std::vector<std::string>& value);

    /// <summary>
    /// 模板创建时间。 时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 模板最后更新时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 模板内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::string messageTemplateId_;
    bool messageTemplateIdIsSet_;
    std::string messageTemplateName_;
    bool messageTemplateNameIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::vector<std::string> tagNames_;
    bool tagNamesIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplateDetailsResponse_H_
