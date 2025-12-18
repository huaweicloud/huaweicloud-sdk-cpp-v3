
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateAuthRandomResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAuthRandomResponse();
    virtual ~CreateAuthRandomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthRandomResponse members

    /// <summary>
    /// 鉴权随机数
    /// </summary>

    std::string getRandom() const;
    bool randomIsSet() const;
    void unsetrandom();
    void setRandom(const std::string& value);

    /// <summary>
    /// 会议主题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议类型模型。 * COMMON：MCU会议 * RTC：MMR会议 
    /// </summary>

    std::string getConfMode() const;
    bool confModeIsSet() const;
    void unsetconfMode();
    void setConfMode(const std::string& value);

    /// <summary>
    /// 是否为网络研讨会
    /// </summary>

    bool isWebinar() const;
    bool webinarIsSet() const;
    void unsetwebinar();
    void setWebinar(bool value);

    /// <summary>
    /// 是否需要密码
    /// </summary>

    bool isNeedPassword() const;
    bool needPasswordIsSet() const;
    void unsetneedPassword();
    void setNeedPassword(bool value);

    /// <summary>
    /// 是否支持小程序
    /// </summary>

    bool isSupportApplets() const;
    bool supportAppletsIsSet() const;
    void unsetsupportApplets();
    void setSupportApplets(bool value);


protected:
    std::string random_;
    bool randomIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string confMode_;
    bool confModeIsSet_;
    bool webinar_;
    bool webinarIsSet_;
    bool needPassword_;
    bool needPasswordIsSet_;
    bool supportApplets_;
    bool supportAppletsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomResponse_H_
