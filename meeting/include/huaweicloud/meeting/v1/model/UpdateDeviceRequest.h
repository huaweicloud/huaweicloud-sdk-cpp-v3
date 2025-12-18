
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateDeviceRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateDeviceRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ModDeviceDTO.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateDeviceRequest
    : public ModelBase
{
public:
    UpdateDeviceRequest();
    virtual ~UpdateDeviceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceRequest members

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
    /// 终端SN号，仅可包含数字、字母和下划线。
    /// </summary>

    std::string getSn() const;
    bool snIsSet() const;
    void unsetsn();
    void setSn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModDeviceDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModDeviceDTO& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    std::string sn_;
    bool snIsSet_;
    ModDeviceDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDeviceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDeviceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateDeviceRequest_H_
