
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ShowUserRequestDTO.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  BatchShowUserDetailsRequest
    : public ModelBase
{
public:
    BatchShowUserDetailsRequest();
    virtual ~BatchShowUserDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowUserDetailsRequest members

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
    /// 查询类型。默认是USER_ID。 * USER_ID：表示根据华为云会议用户ID查询用户详情 * THIRD_ACCOUNT：表示根据第三方账号查询用户详情 
    /// </summary>

    std::string getIdType() const;
    bool idTypeIsSet() const;
    void unsetidType();
    void setIdType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ShowUserRequestDTO>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ShowUserRequestDTO>& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    std::string idType_;
    bool idTypeIsSet_;
    std::vector<ShowUserRequestDTO> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchShowUserDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchShowUserDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsRequest_H_
