
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequestBody.h>
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
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateProtectionGroupNameRequest
    : public ModelBase
{
public:
    UpdateProtectionGroupNameRequest();
    virtual ~UpdateProtectionGroupNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateProtectionGroupNameRequest members

    /// <summary>
    /// 保护组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateProtectionGroupNameRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateProtectionGroupNameRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    UpdateProtectionGroupNameRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateProtectionGroupNameRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateProtectionGroupNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequest_H_
