
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ExtractAudioTaskReq.h>
#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateExtractAudioTaskRequest
    : public ModelBase
{
public:
    CreateExtractAudioTaskRequest();
    virtual ~CreateExtractAudioTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExtractAudioTaskRequest members

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

    ExtractAudioTaskReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExtractAudioTaskReq& value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    ExtractAudioTaskReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateExtractAudioTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateExtractAudioTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskRequest_H_
