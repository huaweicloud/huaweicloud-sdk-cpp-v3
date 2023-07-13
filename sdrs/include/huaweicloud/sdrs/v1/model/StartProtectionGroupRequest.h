
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/StartProtectionGroupRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  StartProtectionGroupRequest
    : public ModelBase
{
public:
    StartProtectionGroupRequest();
    virtual ~StartProtectionGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StartProtectionGroupRequest members

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StartProtectionGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const StartProtectionGroupRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    StartProtectionGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartProtectionGroupRequest& dereference_from_shared_ptr(std::shared_ptr<StartProtectionGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequest_H_
