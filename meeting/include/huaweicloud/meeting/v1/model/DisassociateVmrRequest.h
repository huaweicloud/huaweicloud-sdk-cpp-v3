
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_DisassociateVmrRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_DisassociateVmrRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  DisassociateVmrRequest
    : public ModelBase
{
public:
    DisassociateVmrRequest();
    virtual ~DisassociateVmrRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateVmrRequest members

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
    /// 帐号。 * 如果是帐号/密码鉴权方式，是指华为云会议帐号 * 如果是App ID鉴权方式，是指第三方User ID 
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 帐号类型。默认0。 * 0：华为云会议帐号。用于帐号/密码鉴权方式 * 1：第三方User ID，用于App ID鉴权方式 
    /// </summary>

    int32_t getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<std::string>& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    std::string account_;
    bool accountIsSet_;
    int32_t accountType_;
    bool accountTypeIsSet_;
    std::vector<std::string> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateVmrRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateVmrRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_DisassociateVmrRequest_H_
