
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteGrantRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteGrantRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  DeleteGrantRequest
    : public ModelBase
{
public:
    DeleteGrantRequest();
    virtual ~DeleteGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteGrantRequest members

    /// <summary>
    /// 被授权用户ID
    /// </summary>

    std::string getGranteeUser() const;
    bool granteeUserIsSet() const;
    void unsetgranteeUser();
    void setGranteeUser(const std::string& value);

    /// <summary>
    /// 被授权资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string granteeUser_;
    bool granteeUserIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteGrantRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteGrantRequest_H_
