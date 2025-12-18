
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/SetProfileImageRequestBody.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  SetProfileImageRequest
    : public ModelBase
{
public:
    SetProfileImageRequest();
    virtual ~SetProfileImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetProfileImageRequest members

    /// <summary>
    /// 请求requestId，用来标识一路请求，用于问题跟踪定位，建议使用UUID，若不携带，则后台自动生成。
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetProfileImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetProfileImageRequestBody& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    SetProfileImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetProfileImageRequest& dereference_from_shared_ptr(std::shared_ptr<SetProfileImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequest_H_
