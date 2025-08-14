
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateMessageResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateMessageResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/MessageResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateMessageResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateMessageResponse();
    virtual ~CreateMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMessageResponse members

    /// <summary>
    /// 消息id，由用户生成（推荐使用UUID），同一个设备下唯一， 如果用户不填写，则由物联网平台生成。
    /// </summary>

    std::string getMessageId() const;
    bool messageIdIsSet() const;
    void unsetmessageId();
    void setMessageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MessageResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const MessageResult& value);


protected:
    std::string messageId_;
    bool messageIdIsSet_;
    MessageResult result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateMessageResponse_H_
