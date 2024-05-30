
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListCloseAccountStatusesRequest
    : public ModelBase
{
public:
    ListCloseAccountStatusesRequest();
    virtual ~ListCloseAccountStatusesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloseAccountStatusesRequest members

    /// <summary>
    /// 要包含在响应中的一个或多个状态的列表。如果此参数不存在，则所有请求都包含在响应中。
    /// </summary>

    std::vector<std::string>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::vector<std::string>& value);


protected:
    std::vector<std::string> states_;
    bool statesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCloseAccountStatusesRequest& dereference_from_shared_ptr(std::shared_ptr<ListCloseAccountStatusesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesRequest_H_
