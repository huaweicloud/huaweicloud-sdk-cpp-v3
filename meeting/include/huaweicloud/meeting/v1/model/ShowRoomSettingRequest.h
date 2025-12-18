
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRoomSettingRequest
    : public ModelBase
{
public:
    ShowRoomSettingRequest();
    virtual ~ShowRoomSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRoomSettingRequest members

    /// <summary>
    /// 请求requestId，用来标识一路请求，用于问题跟踪定位，建议使用UUID，若不携带，则后台自动生成。
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);

    /// <summary>
    /// 语言参数，默认为中文zh-CN，英文为en-US。
    /// </summary>

    std::string getAcceptLanguage() const;
    bool acceptLanguageIsSet() const;
    void unsetacceptLanguage();
    void setAcceptLanguage(const std::string& value);

    /// <summary>
    /// 网络研讨会ID
    /// </summary>

    std::string getConferenceId() const;
    bool conferenceIdIsSet() const;
    void unsetconferenceId();
    void setConferenceId(const std::string& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    std::string conferenceId_;
    bool conferenceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRoomSettingRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRoomSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRoomSettingRequest_H_
