
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateOrganizationalUnit 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdateOrganizationalUnitReqBody
    : public ModelBase
{
public:
    UpdateOrganizationalUnitReqBody();
    virtual ~UpdateOrganizationalUnitReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateOrganizationalUnitReqBody members

    /// <summary>
    /// 要分配给新组织单元的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateOrganizationalUnitReqBody_H_
