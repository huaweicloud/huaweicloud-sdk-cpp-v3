
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpVcResResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpVcResResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryVmrPkgResResultDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业资源信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryCorpVcResResultDTO
    : public ModelBase
{
public:
    QueryCorpVcResResultDTO();
    virtual ~QueryCorpVcResResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCorpVcResResultDTO members

    /// <summary>
    /// 云会议室类型列表。
    /// </summary>

    std::vector<QueryVmrPkgResResultDTO>& getVmrPkgList();
    bool vmrPkgListIsSet() const;
    void unsetvmrPkgList();
    void setVmrPkgList(const std::vector<QueryVmrPkgResResultDTO>& value);

    /// <summary>
    /// 1080P硬终端接入帐号数量。
    /// </summary>

    int32_t getTe1080pHardCount() const;
    bool te1080pHardCountIsSet() const;
    void unsette1080pHardCount();
    void setTe1080pHardCount(int32_t value);

    /// <summary>
    /// 720P硬终端接入帐号数量。
    /// </summary>

    int32_t getTe720pHardCount() const;
    bool te720pHardCountIsSet() const;
    void unsette720pHardCount();
    void setTe720pHardCount(int32_t value);

    /// <summary>
    /// 软终端账户数量。
    /// </summary>

    int32_t getTeSoftCount() const;
    bool teSoftCountIsSet() const;
    void unsetteSoftCount();
    void setTeSoftCount(int32_t value);

    /// <summary>
    /// 电子白板（SmartRooms）接入帐号数量。
    /// </summary>

    int32_t getRoomCount() const;
    bool roomCountIsSet() const;
    void unsetroomCount();
    void setRoomCount(int32_t value);

    /// <summary>
    /// 录播存储空间 (单位:G)。
    /// </summary>

    int32_t getRecordCapability() const;
    bool recordCapabilityIsSet() const;
    void unsetrecordCapability();
    void setRecordCapability(int32_t value);

    /// <summary>
    /// 会议并发方数量。
    /// </summary>

    int32_t getConfCallCount() const;
    bool confCallCountIsSet() const;
    void unsetconfCallCount();
    void setConfCallCount(int32_t value);

    /// <summary>
    /// 直播端口数量。
    /// </summary>

    int32_t getLiveCount() const;
    bool liveCountIsSet() const;
    void unsetliveCount();
    void setLiveCount(int32_t value);

    /// <summary>
    /// 第三方硬终端接入帐号数量。
    /// </summary>

    int32_t getThirdPartyHardCount() const;
    bool thirdPartyHardCountIsSet() const;
    void unsetthirdPartyHardCount();
    void setThirdPartyHardCount(int32_t value);

    /// <summary>
    /// 智慧屏终端接入帐号数量。
    /// </summary>

    int32_t getHwVisionCount() const;
    bool hwVisionCountIsSet() const;
    void unsethwVisionCount();
    void setHwVisionCount(int32_t value);

    /// <summary>
    /// IdeaHub终端接入帐号数量。
    /// </summary>

    int32_t getIdeaHubCount() const;
    bool ideaHubCountIsSet() const;
    void unsetideaHubCount();
    void setIdeaHubCount(int32_t value);


protected:
    std::vector<QueryVmrPkgResResultDTO> vmrPkgList_;
    bool vmrPkgListIsSet_;
    int32_t te1080pHardCount_;
    bool te1080pHardCountIsSet_;
    int32_t te720pHardCount_;
    bool te720pHardCountIsSet_;
    int32_t teSoftCount_;
    bool teSoftCountIsSet_;
    int32_t roomCount_;
    bool roomCountIsSet_;
    int32_t recordCapability_;
    bool recordCapabilityIsSet_;
    int32_t confCallCount_;
    bool confCallCountIsSet_;
    int32_t liveCount_;
    bool liveCountIsSet_;
    int32_t thirdPartyHardCount_;
    bool thirdPartyHardCountIsSet_;
    int32_t hwVisionCount_;
    bool hwVisionCountIsSet_;
    int32_t ideaHubCount_;
    bool ideaHubCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpVcResResultDTO_H_
