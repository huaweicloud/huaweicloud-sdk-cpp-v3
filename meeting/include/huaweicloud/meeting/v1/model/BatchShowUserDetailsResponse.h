
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/UserDTO.h>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  BatchShowUserDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowUserDetailsResponse();
    virtual ~BatchShowUserDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowUserDetailsResponse members

    /// <summary>
    /// 用户信息列表
    /// </summary>

    std::vector<UserDTO>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UserDTO>& value);


protected:
    std::vector<UserDTO> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchShowUserDetailsResponse_H_
