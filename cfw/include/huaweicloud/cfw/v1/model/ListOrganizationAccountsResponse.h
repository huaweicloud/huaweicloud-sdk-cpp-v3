
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListOrganizationAccountsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListOrganizationAccountsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/OrganizationAccountInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListOrganizationAccountsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOrganizationAccountsResponse();
    virtual ~ListOrganizationAccountsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOrganizationAccountsResponse members

    /// <summary>
    /// **参数解释**： 查询组织账号响应 **取值范围**： 不涉及
    /// </summary>

    std::vector<OrganizationAccountInfo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<OrganizationAccountInfo>& value);

    /// <summary>
    /// **参数解释**： 分页标记 **取值范围**： 不涉及
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数解释**： 总数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<OrganizationAccountInfo> data_;
    bool dataIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListOrganizationAccountsResponse_H_
