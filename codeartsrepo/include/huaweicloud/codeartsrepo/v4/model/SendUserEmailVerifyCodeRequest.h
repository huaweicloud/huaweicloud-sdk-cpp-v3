
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SendUserEmailVerifyCodeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SendUserEmailVerifyCodeRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ModifyEmailAddressDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SendUserEmailVerifyCodeRequest
    : public ModelBase
{
public:
    SendUserEmailVerifyCodeRequest();
    virtual ~SendUserEmailVerifyCodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SendUserEmailVerifyCodeRequest members

    /// <summary>
    /// 
    /// </summary>

    ModifyEmailAddressDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyEmailAddressDto& value);


protected:
    ModifyEmailAddressDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SendUserEmailVerifyCodeRequest& dereference_from_shared_ptr(std::shared_ptr<SendUserEmailVerifyCodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SendUserEmailVerifyCodeRequest_H_
