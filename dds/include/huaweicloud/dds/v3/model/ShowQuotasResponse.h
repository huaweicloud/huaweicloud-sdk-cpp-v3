
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ShowResourcesListResponseBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowQuotasResponse();
    virtual ~ShowQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowResourcesListResponseBody getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const ShowResourcesListResponseBody& value);


protected:
    ShowResourcesListResponseBody quotas_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowQuotasResponse_H_
