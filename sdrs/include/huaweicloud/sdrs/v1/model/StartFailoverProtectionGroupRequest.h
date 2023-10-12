
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartFailoverProtectionGroupRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartFailoverProtectionGroupRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/FailoverProtectionGroupRequestBody.h>
#include <string>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  StartFailoverProtectionGroupRequest
    : public ModelBase
{
public:
    StartFailoverProtectionGroupRequest();
    virtual ~StartFailoverProtectionGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartFailoverProtectionGroupRequest members

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

    FailoverProtectionGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FailoverProtectionGroupRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    FailoverProtectionGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartFailoverProtectionGroupRequest& dereference_from_shared_ptr(std::shared_ptr<StartFailoverProtectionGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartFailoverProtectionGroupRequest_H_
