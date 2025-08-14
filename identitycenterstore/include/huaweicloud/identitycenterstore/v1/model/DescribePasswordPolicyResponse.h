
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribePasswordPolicyResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribePasswordPolicyResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/PasswordPolicyDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DescribePasswordPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribePasswordPolicyResponse();
    virtual ~DescribePasswordPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribePasswordPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    PasswordPolicyDto getPasswordPolicy() const;
    bool passwordPolicyIsSet() const;
    void unsetpasswordPolicy();
    void setPasswordPolicy(const PasswordPolicyDto& value);


protected:
    PasswordPolicyDto passwordPolicy_;
    bool passwordPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DescribePasswordPolicyResponse_H_
