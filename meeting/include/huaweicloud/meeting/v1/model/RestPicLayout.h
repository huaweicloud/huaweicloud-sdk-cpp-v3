
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayout_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayout_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/PicInfoNotify.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 多画面布局。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestPicLayout
    : public ModelBase
{
public:
    RestPicLayout();
    virtual ~RestPicLayout();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestPicLayout members

    /// <summary>
    /// 多画面轮询时间，单位秒。
    /// </summary>

    int32_t getSwitchTime() const;
    bool switchTimeIsSet() const;
    void unsetswitchTime();
    void setSwitchTime(int32_t value);

    /// <summary>
    /// 多画面画面数量。
    /// </summary>

    int32_t getPicNum() const;
    bool picNumIsSet() const;
    void unsetpicNum();
    void setPicNum(int32_t value);

    /// <summary>
    /// 多画面布局名称。
    /// </summary>

    std::string getLayOutName() const;
    bool layOutNameIsSet() const;
    void unsetlayOutName();
    void setLayOutName(const std::string& value);

    /// <summary>
    /// 画面类型。
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 布局UUID。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 子画面列表。
    /// </summary>

    std::vector<PicInfoNotify>& getSubscriberInPics();
    bool subscriberInPicsIsSet() const;
    void unsetsubscriberInPics();
    void setSubscriberInPics(const std::vector<PicInfoNotify>& value);


protected:
    int32_t switchTime_;
    bool switchTimeIsSet_;
    int32_t picNum_;
    bool picNumIsSet_;
    std::string layOutName_;
    bool layOutNameIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::vector<PicInfoNotify> subscriberInPics_;
    bool subscriberInPicsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayout_H_
