
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlQuotasResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlQuotasResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SetQuota.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateGaussMySqlQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateGaussMySqlQuotasResponse();
    virtual ~UpdateGaussMySqlQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGaussMySqlQuotasResponse members

    /// <summary>
    /// 资源列表对象。
    /// </summary>

    std::vector<SetQuota>& getQuotaList();
    bool quotaListIsSet() const;
    void unsetquotaList();
    void setQuotaList(const std::vector<SetQuota>& value);


protected:
    std::vector<SetQuota> quotaList_;
    bool quotaListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateGaussMySqlQuotasResponse_H_
