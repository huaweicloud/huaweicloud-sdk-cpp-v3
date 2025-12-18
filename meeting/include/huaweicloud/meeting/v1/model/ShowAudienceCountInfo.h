
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowAudienceCountInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowAudienceCountInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowAudienceCountInfo
    : public ModelBase
{
public:
    ShowAudienceCountInfo();
    virtual ~ShowAudienceCountInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAudienceCountInfo members

    /// <summary>
    /// 观众显示策略。 * 0：不显示 * 1：倍增显示与会人数。基于实时与会人数或累计与会人次（假设为N），可以再进行倍增设置。支持设置倍增倍数X和基础人数Y，设置后，显示的人数为：N*X+Y 
    /// </summary>

    int32_t getShowAudienceMode() const;
    bool showAudienceModeIsSet() const;
    void unsetshowAudienceMode();
    void setShowAudienceMode(int32_t value);

    /// <summary>
    /// 基础人数。范围是0~10000。
    /// </summary>

    int32_t getBaseAudienceCount() const;
    bool baseAudienceCountIsSet() const;
    void unsetbaseAudienceCount();
    void setBaseAudienceCount(int32_t value);

    /// <summary>
    /// 倍增倍数。范围是1~10, 支持设置到小数点后1位。
    /// </summary>

    double getMultiple() const;
    bool multipleIsSet() const;
    void unsetmultiple();
    void setMultiple(double value);


protected:
    int32_t showAudienceMode_;
    bool showAudienceModeIsSet_;
    int32_t baseAudienceCount_;
    bool baseAudienceCountIsSet_;
    double multiple_;
    bool multipleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowAudienceCountInfo_H_
