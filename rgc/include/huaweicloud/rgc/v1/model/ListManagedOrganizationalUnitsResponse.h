
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedOrganizationalUnitsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedOrganizationalUnitsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/PageInfoDto.h>
#include <huaweicloud/rgc/v1/model/ManagedOrganizationalUnit.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ListManagedOrganizationalUnitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListManagedOrganizationalUnitsResponse();
    virtual ~ListManagedOrganizationalUnitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManagedOrganizationalUnitsResponse members

    /// <summary>
    /// 注册OU信息。
    /// </summary>

    std::vector<ManagedOrganizationalUnit>& getManagedOrganizationalUnits();
    bool managedOrganizationalUnitsIsSet() const;
    void unsetmanagedOrganizationalUnits();
    void setManagedOrganizationalUnits(const std::vector<ManagedOrganizationalUnit>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ManagedOrganizationalUnit> managedOrganizationalUnits_;
    bool managedOrganizationalUnitsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedOrganizationalUnitsResponse_H_
