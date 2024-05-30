
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTachReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTachReqBody_H_


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
/// AttachPolicy 和 DetachPolicy 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  PolicyTachReqBody
    : public ModelBase
{
public:
    PolicyTachReqBody();
    virtual ~PolicyTachReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyTachReqBody members

    /// <summary>
    /// 根、组织单元或账号的唯一标识符（ID）。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);


protected:
    std::string entityId_;
    bool entityIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTachReqBody_H_
