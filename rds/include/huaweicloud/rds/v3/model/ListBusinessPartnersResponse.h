
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBusinessPartnersResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBusinessPartnersResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/BusinessPartner.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListBusinessPartnersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBusinessPartnersResponse();
    virtual ~ListBusinessPartnersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBusinessPartnersResponse members

    /// <summary>
    /// 服务商列表。
    /// </summary>

    std::vector<BusinessPartner>& getBusinessPartners();
    bool businessPartnersIsSet() const;
    void unsetbusinessPartners();
    void setBusinessPartners(const std::vector<BusinessPartner>& value);

    /// <summary>
    /// 总服务商数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<BusinessPartner> businessPartners_;
    bool businessPartnersIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBusinessPartnersResponse_H_
