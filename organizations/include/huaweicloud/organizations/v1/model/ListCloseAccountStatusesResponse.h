
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/CloseAccountStatusDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListCloseAccountStatusesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCloseAccountStatusesResponse();
    virtual ~ListCloseAccountStatusesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloseAccountStatusesResponse members

    /// <summary>
    /// 包含有关请求的详细信息的对象列表。
    /// </summary>

    std::vector<CloseAccountStatusDto>& getCloseAccountStatuses();
    bool closeAccountStatusesIsSet() const;
    void unsetcloseAccountStatuses();
    void setCloseAccountStatuses(const std::vector<CloseAccountStatusDto>& value);


protected:
    std::vector<CloseAccountStatusDto> closeAccountStatuses_;
    bool closeAccountStatusesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCloseAccountStatusesResponse_H_
