
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowCreateAccountStatusRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowCreateAccountStatusRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowCreateAccountStatusRequest
    : public ModelBase
{
public:
    ShowCreateAccountStatusRequest();
    virtual ~ShowCreateAccountStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCreateAccountStatusRequest members

    /// <summary>
    /// 指定唯一标识CreateAccount请求的ID值。
    /// </summary>

    std::string getCreateAccountStatusId() const;
    bool createAccountStatusIdIsSet() const;
    void unsetcreateAccountStatusId();
    void setCreateAccountStatusId(const std::string& value);


protected:
    std::string createAccountStatusId_;
    bool createAccountStatusIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCreateAccountStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCreateAccountStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowCreateAccountStatusRequest_H_
