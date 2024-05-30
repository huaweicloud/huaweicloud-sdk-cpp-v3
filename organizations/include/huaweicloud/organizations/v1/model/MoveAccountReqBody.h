
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_MoveAccountReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_MoveAccountReqBody_H_


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
/// MoveAccount 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  MoveAccountReqBody
    : public ModelBase
{
public:
    MoveAccountReqBody();
    virtual ~MoveAccountReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAccountReqBody members

    /// <summary>
    /// 要移出账号的根或组织单元的唯一标识符（ID）。
    /// </summary>

    std::string getSourceParentId() const;
    bool sourceParentIdIsSet() const;
    void unsetsourceParentId();
    void setSourceParentId(const std::string& value);

    /// <summary>
    /// 要移入账号的根或组织单元的唯一标识符（ID）。
    /// </summary>

    std::string getDestinationParentId() const;
    bool destinationParentIdIsSet() const;
    void unsetdestinationParentId();
    void setDestinationParentId(const std::string& value);


protected:
    std::string sourceParentId_;
    bool sourceParentIdIsSet_;
    std::string destinationParentId_;
    bool destinationParentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_MoveAccountReqBody_H_
