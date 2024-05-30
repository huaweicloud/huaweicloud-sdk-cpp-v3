
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListQuotasResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListQuotasResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/QuotasResourcesDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQuotasResponse();
    virtual ~ListQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotasResourcesDto getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QuotasResourcesDto& value);


protected:
    QuotasResourcesDto quotas_;
    bool quotasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListQuotasResponse_H_
