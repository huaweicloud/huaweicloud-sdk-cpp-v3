
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCreateAccountStatusesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCreateAccountStatusesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/CreateAccountStatusDto.h>
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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListCreateAccountStatusesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCreateAccountStatusesResponse();
    virtual ~ListCreateAccountStatusesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCreateAccountStatusesResponse members

    /// <summary>
    /// 包含有关请求的详细信息的对象列表。
    /// </summary>

    std::vector<CreateAccountStatusDto>& getCreateAccountStatuses();
    bool createAccountStatusesIsSet() const;
    void unsetcreateAccountStatuses();
    void setCreateAccountStatuses(const std::vector<CreateAccountStatusDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<CreateAccountStatusDto> createAccountStatuses_;
    bool createAccountStatusesIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListCreateAccountStatusesResponse_H_
