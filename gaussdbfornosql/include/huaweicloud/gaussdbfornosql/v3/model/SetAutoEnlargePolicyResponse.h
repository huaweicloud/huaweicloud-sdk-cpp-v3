
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoEnlargePolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoEnlargePolicyResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/SetAutoPolicyErrorResults.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetAutoEnlargePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    SetAutoEnlargePolicyResponse();
    virtual ~SetAutoEnlargePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoEnlargePolicyResponse members

    /// <summary>
    /// **参数解释：** 设置磁盘自动扩容策略失败的实例信息列表。 **取值范围：** 不涉及
    /// </summary>

    std::vector<SetAutoPolicyErrorResults>& getErrorResults();
    bool errorResultsIsSet() const;
    void unseterrorResults();
    void setErrorResults(const std::vector<SetAutoPolicyErrorResults>& value);


protected:
    std::vector<SetAutoPolicyErrorResults> errorResults_;
    bool errorResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoEnlargePolicyResponse_H_
