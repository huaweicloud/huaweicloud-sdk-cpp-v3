
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTranscodeTemplateRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTranscodeTemplateRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/CreateTranscodeTemplate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateTranscodeTemplateRequest
    : public ModelBase
{
public:
    CreateTranscodeTemplateRequest();
    virtual ~CreateTranscodeTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTranscodeTemplateRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。 
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTranscodeTemplate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTranscodeTemplate& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    CreateTranscodeTemplate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTranscodeTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTranscodeTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTranscodeTemplateRequest_H_
