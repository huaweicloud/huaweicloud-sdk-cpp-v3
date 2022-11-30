
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/QuotaList.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListQuotasResponse();
    virtual ~CinderListQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    QuotaList getQuotaSet() const;
    bool quotaSetIsSet() const;
    void unsetquotaSet();
    void setQuotaSet(const QuotaList& value);


protected:
    QuotaList quotaSet_;
    bool quotaSetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_
