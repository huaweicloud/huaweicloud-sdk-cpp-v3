
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_MediaQos_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_MediaQos_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/Qos.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 某种媒体的QoS，包括视频、音频或辅流
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  MediaQos
    : public ModelBase
{
public:
    MediaQos();
    virtual ~MediaQos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MediaQos members

    /// <summary>
    /// 客户端--&gt;服务器方向QoS
    /// </summary>

    std::vector<Qos>& getUpList();
    bool upListIsSet() const;
    void unsetupList();
    void setUpList(const std::vector<Qos>& value);

    /// <summary>
    /// 服务器--&gt;客户端方向QoS
    /// </summary>

    std::vector<Qos>& getDownList();
    bool downListIsSet() const;
    void unsetdownList();
    void setDownList(const std::vector<Qos>& value);


protected:
    std::vector<Qos> upList_;
    bool upListIsSet_;
    std::vector<Qos> downList_;
    bool downListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_MediaQos_H_
