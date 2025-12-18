
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAgencyInfosResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAgencyInfosResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/AgencyRoleResult.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListAgencyInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAgencyInfosResponse();
    virtual ~ListAgencyInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAgencyInfosResponse members

    /// <summary>
    /// **参数解释**: 委托名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 委托是否存在。 **取值范围**: true、false
    /// </summary>

    bool isIsExisted() const;
    bool isExistedIsSet() const;
    void unsetisExisted();
    void setIsExisted(bool value);

    /// <summary>
    /// **参数解释**: 委托绑定的权限策略信息。
    /// </summary>

    std::vector<AgencyRoleResult>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<AgencyRoleResult>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool isExisted_;
    bool isExistedIsSet_;
    std::vector<AgencyRoleResult> roles_;
    bool rolesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAgencyInfosResponse_H_
