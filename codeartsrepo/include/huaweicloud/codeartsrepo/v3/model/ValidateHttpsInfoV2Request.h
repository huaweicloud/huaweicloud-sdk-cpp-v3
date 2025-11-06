
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ValidateHttpsInfoV2Request_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ValidateHttpsInfoV2Request_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v3/model/PasswordRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ValidateHttpsInfoV2Request
    : public ModelBase
{
public:
    ValidateHttpsInfoV2Request();
    virtual ~ValidateHttpsInfoV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateHttpsInfoV2Request members

    /// <summary>
    /// 用户iam_user_uuid
    /// </summary>

    std::string getIamUserUuid() const;
    bool iamUserUuidIsSet() const;
    void unsetiamUserUuid();
    void setIamUserUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PasswordRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PasswordRequest& value);


protected:
    std::string iamUserUuid_;
    bool iamUserUuidIsSet_;
    PasswordRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ValidateHttpsInfoV2Request& dereference_from_shared_ptr(std::shared_ptr<ValidateHttpsInfoV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ValidateHttpsInfoV2Request_H_
