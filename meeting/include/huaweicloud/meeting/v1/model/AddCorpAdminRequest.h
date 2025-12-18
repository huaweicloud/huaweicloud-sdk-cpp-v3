
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpAdminRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpAdminRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/CorpAdminDTO.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  AddCorpAdminRequest
    : public ModelBase
{
public:
    AddCorpAdminRequest();
    virtual ~AddCorpAdminRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddCorpAdminRequest members

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
    /// 帐号类型。默认0。 * 0：会议帐号 * 1：表示第三方帐号。 
    /// </summary>

    int32_t getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CorpAdminDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CorpAdminDTO& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    int32_t accountType_;
    bool accountTypeIsSet_;
    CorpAdminDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddCorpAdminRequest& dereference_from_shared_ptr(std::shared_ptr<AddCorpAdminRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpAdminRequest_H_
