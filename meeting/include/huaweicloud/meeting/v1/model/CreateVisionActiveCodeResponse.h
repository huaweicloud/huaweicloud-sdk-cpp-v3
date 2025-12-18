
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateVisionActiveCodeResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateVisionActiveCodeResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateVisionActiveCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVisionActiveCodeResponse();
    virtual ~CreateVisionActiveCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVisionActiveCodeResponse members

    /// <summary>
    /// 激活码。
    /// </summary>

    std::string getActiveCode() const;
    bool activeCodeIsSet() const;
    void unsetactiveCode();
    void setActiveCode(const std::string& value);


protected:
    std::string activeCode_;
    bool activeCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateVisionActiveCodeResponse_H_
