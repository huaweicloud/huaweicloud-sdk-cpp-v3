
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlQuotasResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlQuotasResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/Quota.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlQuotasResponse();
    virtual ~ShowGaussMySqlQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlQuotasResponse members

    /// <summary>
    /// 资源列表对象。
    /// </summary>

    std::vector<Quota>& getQuotaList();
    bool quotaListIsSet() const;
    void unsetquotaList();
    void setQuotaList(const std::vector<Quota>& value);

    /// <summary>
    /// 配额记录的条数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<Quota> quotaList_;
    bool quotaListIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlQuotasResponse_H_
