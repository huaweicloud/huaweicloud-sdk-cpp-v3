
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/OpenRoomSettingVO.h>
#include <string>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRoomSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRoomSettingResponse();
    virtual ~ShowRoomSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRoomSettingResponse members

    /// <summary>
    /// 网络研讨会介绍。
    /// </summary>

    std::string getRoomIntroduce() const;
    bool roomIntroduceIsSet() const;
    void unsetroomIntroduce();
    void setRoomIntroduce(const std::string& value);

    /// <summary>
    /// 企业Logo的文件id。
    /// </summary>

    std::string getCropLogoId() const;
    bool cropLogoIdIsSet() const;
    void unsetcropLogoId();
    void setCropLogoId(const std::string& value);

    /// <summary>
    /// 欢迎界面的文件id。
    /// </summary>

    std::string getCoverPictureId() const;
    bool coverPictureIdIsSet() const;
    void unsetcoverPictureId();
    void setCoverPictureId(const std::string& value);

    /// <summary>
    /// 显示观众人数的模式。默认值为real_time。 - none: 不显示 - real_time: 实时显示 
    /// </summary>

    std::string getShowAudienceMode() const;
    bool showAudienceModeIsSet() const;
    void unsetshowAudienceMode();
    void setShowAudienceMode(const std::string& value);

    /// <summary>
    /// 智能倍增开关。默认值为Y。 - Y 开启智能倍增 - N 关闭智能倍增 
    /// </summary>

    std::string getIsRedoubleOpen() const;
    bool isRedoubleOpenIsSet() const;
    void unsetisRedoubleOpen();
    void setIsRedoubleOpen(const std::string& value);

    /// <summary>
    /// 基础设置人数(网络研讨会没人时显示的人数)。默认值为0。取值范围为[0, 10000]。
    /// </summary>

    int32_t getBaseAudienceCount() const;
    bool baseAudienceCountIsSet() const;
    void unsetbaseAudienceCount();
    void setBaseAudienceCount(int32_t value);

    /// <summary>
    /// 设置倍数(基础人数+真实人数*倍数)。默认值为1.0。 取值范围为[0, 10]，取1位小数。
    /// </summary>

    double getMultiple() const;
    bool multipleIsSet() const;
    void unsetmultiple();
    void setMultiple(double value);


protected:
    std::string roomIntroduce_;
    bool roomIntroduceIsSet_;
    std::string cropLogoId_;
    bool cropLogoIdIsSet_;
    std::string coverPictureId_;
    bool coverPictureIdIsSet_;
    std::string showAudienceMode_;
    bool showAudienceModeIsSet_;
    std::string isRedoubleOpen_;
    bool isRedoubleOpenIsSet_;
    int32_t baseAudienceCount_;
    bool baseAudienceCountIsSet_;
    double multiple_;
    bool multipleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingResponse_H_
