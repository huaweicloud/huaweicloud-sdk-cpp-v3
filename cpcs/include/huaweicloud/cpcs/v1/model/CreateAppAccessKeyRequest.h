
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/CreateAppAccessKeyRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateAppAccessKeyRequest
    : public ModelBase
{
public:
    CreateAppAccessKeyRequest();
    virtual ~CreateAppAccessKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAppAccessKeyRequest members

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateAppAccessKeyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateAppAccessKeyRequestBody& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    CreateAppAccessKeyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAppAccessKeyRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAppAccessKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppAccessKeyRequest_H_
