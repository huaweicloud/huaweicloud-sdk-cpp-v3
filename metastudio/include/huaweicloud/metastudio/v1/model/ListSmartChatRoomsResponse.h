
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatRoomsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatRoomsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/SmartChatRoomBaseInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListSmartChatRoomsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSmartChatRoomsResponse();
    virtual ~ListSmartChatRoomsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmartChatRoomsResponse members

    /// <summary>
    /// **参数解释**： 智能交互对话总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**： 智能交互对话总并发路数。
    /// </summary>

    int32_t getCountConcurrency() const;
    bool countConcurrencyIsSet() const;
    void unsetcountConcurrency();
    void setCountConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**： 智能交互对话按接入端计费总路数。
    /// </summary>

    int32_t getCountClientNums() const;
    bool countClientNumsIsSet() const;
    void unsetcountClientNums();
    void setCountClientNums(int32_t value);

    /// <summary>
    /// **参数解释**： 智能交互对话按接入端计费（Token）总路数。
    /// </summary>

    int32_t getCountClientNumsToken() const;
    bool countClientNumsTokenIsSet() const;
    void unsetcountClientNumsToken();
    void setCountClientNumsToken(int32_t value);

    /// <summary>
    /// 智能交互对话列表。
    /// </summary>

    std::vector<SmartChatRoomBaseInfo>& getSmartChatRooms();
    bool smartChatRoomsIsSet() const;
    void unsetsmartChatRooms();
    void setSmartChatRooms(const std::vector<SmartChatRoomBaseInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    int32_t countConcurrency_;
    bool countConcurrencyIsSet_;
    int32_t countClientNums_;
    bool countClientNumsIsSet_;
    int32_t countClientNumsToken_;
    bool countClientNumsTokenIsSet_;
    std::vector<SmartChatRoomBaseInfo> smartChatRooms_;
    bool smartChatRoomsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatRoomsResponse_H_
