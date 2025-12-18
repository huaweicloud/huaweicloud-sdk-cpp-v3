
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetVisionActiveCodeRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetVisionActiveCodeRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ActiveDTO.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  ResetVisionActiveCodeRequest
    : public ModelBase
{
public:
    ResetVisionActiveCodeRequest();
    virtual ~ResetVisionActiveCodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetVisionActiveCodeRequest members

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
    /// 华为云会议帐号。 可通过[[分页查询用户](https://support.huaweicloud.com/api-meeting/meeting_21_0071.html)](tag:hws)[[分页查询用户](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0071.html)](tag:hk)接口获取，对应接口返回userAccount字段。 
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ActiveDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ActiveDTO& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    std::string account_;
    bool accountIsSet_;
    ActiveDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResetVisionActiveCodeRequest& dereference_from_shared_ptr(std::shared_ptr<ResetVisionActiveCodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetVisionActiveCodeRequest_H_
