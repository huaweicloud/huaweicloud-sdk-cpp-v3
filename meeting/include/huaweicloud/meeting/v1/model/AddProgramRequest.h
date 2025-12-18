
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddProgramRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddProgramRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/CreateProgramRequestDTO.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  AddProgramRequest
    : public ModelBase
{
public:
    AddProgramRequest();
    virtual ~AddProgramRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddProgramRequest members

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
    /// 
    /// </summary>

    CreateProgramRequestDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateProgramRequestDTO& value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    CreateProgramRequestDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddProgramRequest& dereference_from_shared_ptr(std::shared_ptr<AddProgramRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddProgramRequest_H_
