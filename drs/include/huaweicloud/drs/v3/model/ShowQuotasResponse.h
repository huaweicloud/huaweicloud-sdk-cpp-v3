
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowQuotasResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowQuotasResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryQuotaInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ShowQuotasResponse
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

    QueryQuotaInfo getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const QueryQuotaInfo& value);


protected:
    QueryQuotaInfo quotas_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowQuotasResponse_H_
