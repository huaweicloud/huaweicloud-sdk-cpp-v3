
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetUserProfileImageRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetUserProfileImageRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/SetUserProfileImageRequestBody.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  SetUserProfileImageRequest
    : public ModelBase
{
public:
    SetUserProfileImageRequest();
    virtual ~SetUserProfileImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetUserProfileImageRequest members

    /// <summary>
    /// 请求requestId，用来标识一路请求，用于问题跟踪定位，建议使用UUID，若不携带，则后台自动生成。
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);

    /// <summary>
    /// 设置头像的企业用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetUserProfileImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetUserProfileImageRequestBody& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    SetUserProfileImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetUserProfileImageRequest& dereference_from_shared_ptr(std::shared_ptr<SetUserProfileImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetUserProfileImageRequest_H_
