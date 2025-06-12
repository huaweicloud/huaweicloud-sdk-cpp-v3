
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRoomsRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRoomsRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListSmartLiveRoomsRequest
    : public ModelBase
{
public:
    ListSmartLiveRoomsRequest();
    virtual ~ListSmartLiveRoomsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmartLiveRoomsRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 按直播间名称模糊查询。
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// 按数字人形象ID查询。
    /// </summary>

    std::string getDhId() const;
    bool dhIdIsSet() const;
    void unsetdhId();
    void setDhId(const std::string& value);

    /// <summary>
    /// 按形象名称模糊查询。
    /// </summary>

    std::string getModelName() const;
    bool modelNameIsSet() const;
    void unsetmodelName();
    void setModelName(const std::string& value);

    /// <summary>
    /// 当前直播间直播状态。 WAITING，PROCESSING，SUCCESS，FAILED，CANCELED对应直播任务状态 NULL 对应没有直播任务 可多个状态查询，使用英文逗号分隔。
    /// </summary>

    std::string getLiveState() const;
    bool liveStateIsSet() const;
    void unsetliveState();
    void setLiveState(const std::string& value);

    /// <summary>
    /// 最近直播任务起始时间。格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。格式遵循：RFC 3339 如\&quot;2021-01-10T10:43:17Z\&quot;。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 按直播间类型查询。直播间类型。 * NORMAL：普通直播间，直播间一直存在，可以反复开播 * TEMP：临时直播间，直播任务结束后自动清理直播间。 * TEMPLATE：直播间模板。
    /// </summary>

    std::string getRoomType() const;
    bool roomTypeIsSet() const;
    void unsetroomType();
    void setRoomType(const std::string& value);

    /// <summary>
    /// 按照自己拥有的和别人分享以及公共的模板进行查询 * OWNED 自己拥有且暂未共享的 * SHARED_TO_OHTERS 分享给别人的 * SHARED_FROM_OHTERS 别人分享给我的 * PUBLIC 公共模板
    /// </summary>

    std::string getTemplateOwnType() const;
    bool templateOwnTypeIsSet() const;
    void unsettemplateOwnType();
    void setTemplateOwnType(const std::string& value);

    /// <summary>
    /// 直播间确认状态。此状态仅用于特定用户需要人工确认场景。 - unconfirm: 未确认 - confirmed：已确认 - reject： 拒绝
    /// </summary>

    std::string getConfirmState() const;
    bool confirmStateIsSet() const;
    void unsetconfirmState();
    void setConfirmState(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string roomName_;
    bool roomNameIsSet_;
    std::string dhId_;
    bool dhIdIsSet_;
    std::string modelName_;
    bool modelNameIsSet_;
    std::string liveState_;
    bool liveStateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string roomType_;
    bool roomTypeIsSet_;
    std::string templateOwnType_;
    bool templateOwnTypeIsSet_;
    std::string confirmState_;
    bool confirmStateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSmartLiveRoomsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSmartLiveRoomsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRoomsRequest_H_
