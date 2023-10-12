
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/MessageTemplate.h>
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
class HUAWEICLOUD_SMN_V2_EXPORT  ListMessageTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMessageTemplatesResponse();
    virtual ~ListMessageTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMessageTemplatesResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 返回的模板个数。
    /// </summary>

    int32_t getMessageTemplateCount() const;
    bool messageTemplateCountIsSet() const;
    void unsetmessageTemplateCount();
    void setMessageTemplateCount(int32_t value);

    /// <summary>
    /// Message_template结构体数组。
    /// </summary>

    std::vector<MessageTemplate>& getMessageTemplates();
    bool messageTemplatesIsSet() const;
    void unsetmessageTemplates();
    void setMessageTemplates(const std::vector<MessageTemplate>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t messageTemplateCount_;
    bool messageTemplateCountIsSet_;
    std::vector<MessageTemplate> messageTemplates_;
    bool messageTemplatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListMessageTemplatesResponse_H_
