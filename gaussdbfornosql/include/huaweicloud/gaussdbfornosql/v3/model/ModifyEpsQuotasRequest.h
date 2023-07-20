
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyEpsQuotasRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyEpsQuotasRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlModiflyEpsQuotasRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ModifyEpsQuotasRequest
    : public ModelBase
{
public:
    ModifyEpsQuotasRequest();
    virtual ~ModifyEpsQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyEpsQuotasRequest members

    /// <summary>
    /// 
    /// </summary>

    NoSqlModiflyEpsQuotasRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NoSqlModiflyEpsQuotasRequestBody& value);


protected:
    NoSqlModiflyEpsQuotasRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyEpsQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyEpsQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyEpsQuotasRequest_H_
