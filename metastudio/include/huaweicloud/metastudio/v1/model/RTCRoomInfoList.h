
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCRoomInfoList_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCRoomInfoList_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/RTCUserInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// RTC房间信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RTCRoomInfoList
    : public ModelBase
{
public:
    RTCRoomInfoList();
    virtual ~RTCRoomInfoList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RTCRoomInfoList members

    /// <summary>
    /// RTC应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// RTC房间ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 加入RTC房间用户信息。
    /// </summary>

    std::vector<RTCUserInfo>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RTCUserInfo>& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    std::vector<RTCUserInfo> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCRoomInfoList_H_
