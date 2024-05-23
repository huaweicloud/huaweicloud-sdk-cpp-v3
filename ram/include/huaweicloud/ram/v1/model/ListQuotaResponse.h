
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListQuotaResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListQuotaResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/QuotaResourcesDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ListQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQuotaResponse();
    virtual ~ListQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotaResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotaResourcesDto getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QuotaResourcesDto& value);


protected:
    QuotaResourcesDto quotas_;
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

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListQuotaResponse_H_
