
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpResourceResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpResourceResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryVmrPkgResResultDTO.h>
#include <huaweicloud/meeting/v1/model/ResDetailDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowCorpResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCorpResourceResponse();
    virtual ~ShowCorpResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCorpResourceResponse members

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getTe1080pHardCount() const;
    bool te1080pHardCountIsSet() const;
    void unsette1080pHardCount();
    void setTe1080pHardCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getTe720pHardCount() const;
    bool te720pHardCountIsSet() const;
    void unsette720pHardCount();
    void setTe720pHardCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getTeSoftCount() const;
    bool teSoftCountIsSet() const;
    void unsetteSoftCount();
    void setTeSoftCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getRoomCount() const;
    bool roomCountIsSet() const;
    void unsetroomCount();
    void setRoomCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getRecordCapability() const;
    bool recordCapabilityIsSet() const;
    void unsetrecordCapability();
    void setRecordCapability(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getConfCallCount() const;
    bool confCallCountIsSet() const;
    void unsetconfCallCount();
    void setConfCallCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getLiveCount() const;
    bool liveCountIsSet() const;
    void unsetliveCount();
    void setLiveCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getThirdPartyHardCount() const;
    bool thirdPartyHardCountIsSet() const;
    void unsetthirdPartyHardCount();
    void setThirdPartyHardCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getHwVisionCount() const;
    bool hwVisionCountIsSet() const;
    void unsethwVisionCount();
    void setHwVisionCount(const ResDetailDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ResDetailDTO getIdeaHubCount() const;
    bool ideaHubCountIsSet() const;
    void unsetideaHubCount();
    void setIdeaHubCount(const ResDetailDTO& value);

    /// <summary>
    /// 查询云会议室套餐包分配数量结果。
    /// </summary>

    std::vector<QueryVmrPkgResResultDTO>& getVmr();
    bool vmrIsSet() const;
    void unsetvmr();
    void setVmr(const std::vector<QueryVmrPkgResResultDTO>& value);

    /// <summary>
    /// 在创建企业的时候设置的pstn权限开关。
    /// </summary>

    bool isEnablePstn() const;
    bool enablePstnIsSet() const;
    void unsetenablePstn();
    void setEnablePstn(bool value);

    /// <summary>
    /// 企业是否通过短信形式发送会议通知。
    /// </summary>

    bool isEnableSMS() const;
    bool enableSMSIsSet() const;
    void unsetenableSMS();
    void setEnableSMS(bool value);

    /// <summary>
    /// 企业是否开启混合云模式。
    /// </summary>

    bool isEnableHybridCloud() const;
    bool enableHybridCloudIsSet() const;
    void unsetenableHybridCloud();
    void setEnableHybridCloud(bool value);

    /// <summary>
    /// 是否开启云盘。
    /// </summary>

    bool isEnableCloudDisk() const;
    bool enableCloudDiskIsSet() const;
    void unsetenableCloudDisk();
    void setEnableCloudDisk(bool value);

    /// <summary>
    /// 是否开启UC功能。
    /// </summary>

    bool isEnableUc() const;
    bool enableUcIsSet() const;
    void unsetenableUc();
    void setEnableUc(bool value);

    /// <summary>
    /// 是否开启Ai会议纪要。
    /// </summary>

    bool isEnableAiMinutes() const;
    bool enableAiMinutesIsSet() const;
    void unsetenableAiMinutes();
    void setEnableAiMinutes(bool value);

    /// <summary>
    /// 单会议并发呼叫数。
    /// </summary>

    int32_t getSingleConfCallCount() const;
    bool singleConfCallCountIsSet() const;
    void unsetsingleConfCallCount();
    void setSingleConfCallCount(int32_t value);

    /// <summary>
    /// 会议时长。
    /// </summary>

    int32_t getConfLength() const;
    bool confLengthIsSet() const;
    void unsetconfLength();
    void setConfLength(int32_t value);


protected:
    ResDetailDTO te1080pHardCount_;
    bool te1080pHardCountIsSet_;
    ResDetailDTO te720pHardCount_;
    bool te720pHardCountIsSet_;
    ResDetailDTO teSoftCount_;
    bool teSoftCountIsSet_;
    ResDetailDTO roomCount_;
    bool roomCountIsSet_;
    ResDetailDTO recordCapability_;
    bool recordCapabilityIsSet_;
    ResDetailDTO confCallCount_;
    bool confCallCountIsSet_;
    ResDetailDTO liveCount_;
    bool liveCountIsSet_;
    ResDetailDTO thirdPartyHardCount_;
    bool thirdPartyHardCountIsSet_;
    ResDetailDTO hwVisionCount_;
    bool hwVisionCountIsSet_;
    ResDetailDTO ideaHubCount_;
    bool ideaHubCountIsSet_;
    std::vector<QueryVmrPkgResResultDTO> vmr_;
    bool vmrIsSet_;
    bool enablePstn_;
    bool enablePstnIsSet_;
    bool enableSMS_;
    bool enableSMSIsSet_;
    bool enableHybridCloud_;
    bool enableHybridCloudIsSet_;
    bool enableCloudDisk_;
    bool enableCloudDiskIsSet_;
    bool enableUc_;
    bool enableUcIsSet_;
    bool enableAiMinutes_;
    bool enableAiMinutesIsSet_;
    int32_t singleConfCallCount_;
    bool singleConfCallCountIsSet_;
    int32_t confLength_;
    bool confLengthIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpResourceResponse_H_
