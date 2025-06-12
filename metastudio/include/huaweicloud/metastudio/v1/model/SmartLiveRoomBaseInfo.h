
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLiveRoomBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLiveRoomBaseInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ModelInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/SharedConfig.h>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartLiveRoomBaseInfo
    : public ModelBase
{
public:
    SmartLiveRoomBaseInfo();
    virtual ~SmartLiveRoomBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartLiveRoomBaseInfo members

    /// <summary>
    /// 直播间ID
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 直播间名称
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// 直播间类型。 * NORMAL：普通直播间，直播间一直存在，可以反复开播 * TEMP：临时直播间，直播任务结束后自动清理直播间。 * TEMPLATE：直播间模板。
    /// </summary>

    std::string getRoomType() const;
    bool roomTypeIsSet() const;
    void unsetroomType();
    void setRoomType(const std::string& value);

    /// <summary>
    /// 直播间配置状态。 - ENABLE: 直播间正常可用。 - DISABLE： 直播间不可用。不可用原因在error_info中说明。 - BLOCKED：直播间被冻结。冻结原因在error_info中说明。
    /// </summary>

    std::string getRoomState() const;
    bool roomStateIsSet() const;
    void unsetroomState();
    void setRoomState(const std::string& value);

    /// <summary>
    /// 横竖屏类型。默认值为：VERTICAL。 * LANDSCAPE：横屏。 * VERTICAL： 竖屏。
    /// </summary>

    std::string getViewMode() const;
    bool viewModeIsSet() const;
    void unsetviewMode();
    void setViewMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    SharedConfig getSharedConfig() const;
    bool sharedConfigIsSet() const;
    void unsetsharedConfig();
    void setSharedConfig(const SharedConfig& value);

    /// <summary>
    /// 直播间描述。
    /// </summary>

    std::string getRoomDescription() const;
    bool roomDescriptionIsSet() const;
    void unsetroomDescription();
    void setRoomDescription(const std::string& value);

    /// <summary>
    /// 直播间封面图URL
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 直播间封面图URL
    /// </summary>

    std::string getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const std::string& value);

    /// <summary>
    /// 数字人模型信息
    /// </summary>

    std::vector<ModelInfo>& getModelInfos();
    bool modelInfosIsSet() const;
    void unsetmodelInfos();
    void setModelInfos(const std::vector<ModelInfo>& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 开始直播时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getLastJobStartTime() const;
    bool lastJobStartTimeIsSet() const;
    void unsetlastJobStartTime();
    void setLastJobStartTime(const std::string& value);

    /// <summary>
    /// 结束直播时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getLastJobEndTime() const;
    bool lastJobEndTimeIsSet() const;
    void unsetlastJobEndTime();
    void setLastJobEndTime(const std::string& value);

    /// <summary>
    /// 当前直播状态 - WAITING：任务等待执行 - PROCESSING：任务执行中 - SUCCEED：任务处理成功 - FAILED：任务处理时变 - CANCELED：任务取消 - BLOCKED：任务被冻结
    /// </summary>

    std::string getLastJobStatus() const;
    bool lastJobStatusIsSet() const;
    void unsetlastJobStatus();
    void setLastJobStatus(const std::string& value);

    /// <summary>
    /// 私有数据，用户填写，原样带回。
    /// </summary>

    std::string getPrivData() const;
    bool privDataIsSet() const;
    void unsetprivData();
    void setPrivData(const std::string& value);

    /// <summary>
    /// 直播间确认状态。此状态仅用于特定用户需要人工确认场景。 - UNCONFIRM: 未确认 - CONFIRMED：已确认 - REJECT： 拒绝
    /// </summary>

    std::string getConfirmState() const;
    bool confirmStateIsSet() const;
    void unsetconfirmState();
    void setConfirmState(const std::string& value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string roomName_;
    bool roomNameIsSet_;
    std::string roomType_;
    bool roomTypeIsSet_;
    std::string roomState_;
    bool roomStateIsSet_;
    std::string viewMode_;
    bool viewModeIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    SharedConfig sharedConfig_;
    bool sharedConfigIsSet_;
    std::string roomDescription_;
    bool roomDescriptionIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string thumbnail_;
    bool thumbnailIsSet_;
    std::vector<ModelInfo> modelInfos_;
    bool modelInfosIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string lastJobStartTime_;
    bool lastJobStartTimeIsSet_;
    std::string lastJobEndTime_;
    bool lastJobEndTimeIsSet_;
    std::string lastJobStatus_;
    bool lastJobStatusIsSet_;
    std::string privData_;
    bool privDataIsSet_;
    std::string confirmState_;
    bool confirmStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLiveRoomBaseInfo_H_
