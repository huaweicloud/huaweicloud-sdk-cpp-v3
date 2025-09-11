
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSlowSqlDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSlowSqlDetailsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SlowSqlDetailResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSlowSqlDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSlowSqlDetailsResponse();
    virtual ~ListSlowSqlDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSlowSqlDetailsResponse members

    /// <summary>
    /// **参数解释**: 总条数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: 慢SQL详情信息列表。
    /// </summary>

    std::vector<SlowSqlDetailResult>& getSlowSqlDetails();
    bool slowSqlDetailsIsSet() const;
    void unsetslowSqlDetails();
    void setSlowSqlDetails(const std::vector<SlowSqlDetailResult>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SlowSqlDetailResult> slowSqlDetails_;
    bool slowSqlDetailsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSlowSqlDetailsResponse_H_
