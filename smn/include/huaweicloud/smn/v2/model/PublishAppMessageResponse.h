
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  PublishAppMessageResponse
    : public ModelBase, public HttpResponse
{
public:
    PublishAppMessageResponse();
    virtual ~PublishAppMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishAppMessageResponse members

    /// <summary>
    /// 唯一的消息ID。
    /// </summary>

    std::string getMessageId() const;
    bool messageIdIsSet() const;
    void unsetmessageId();
    void setMessageId(const std::string& value);

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::string messageId_;
    bool messageIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageResponse_H_
