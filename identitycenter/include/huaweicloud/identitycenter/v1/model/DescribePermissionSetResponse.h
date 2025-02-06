
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PermissionSetDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribePermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribePermissionSetResponse();
    virtual ~DescribePermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribePermissionSetResponse members

    /// <summary>
    /// 
    /// </summary>

    PermissionSetDto getPermissionSet() const;
    bool permissionSetIsSet() const;
    void unsetpermissionSet();
    void setPermissionSet(const PermissionSetDto& value);


protected:
    PermissionSetDto permissionSet_;
    bool permissionSetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetResponse_H_
