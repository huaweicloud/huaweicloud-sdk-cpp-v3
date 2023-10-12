
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlModiflyEpsQuotasRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlModiflyEpsQuotasRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlRequestEpsQuota.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSqlModiflyEpsQuotasRequestBody
    : public ModelBase
{
public:
    NoSqlModiflyEpsQuotasRequestBody();
    virtual ~NoSqlModiflyEpsQuotasRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NoSqlModiflyEpsQuotasRequestBody members

    /// <summary>
    /// 需要修改的企业项目配额信息列表。
    /// </summary>

    std::vector<NoSqlRequestEpsQuota>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<NoSqlRequestEpsQuota>& value);


protected:
    std::vector<NoSqlRequestEpsQuota> quotas_;
    bool quotasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlModiflyEpsQuotasRequestBody_H_
