
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHbaInfoHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHbaInfoHistoryResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/HbaHistoryResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListHbaInfoHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHbaInfoHistoryResponse();
    virtual ~ListHbaInfoHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHbaInfoHistoryResponse members

    /// <summary>
    /// **参数解释**: hba修改历史信息。
    /// </summary>

    std::vector<HbaHistoryResult>& getHbaHistories();
    bool hbaHistoriesIsSet() const;
    void unsethbaHistories();
    void setHbaHistories(const std::vector<HbaHistoryResult>& value);

    /// <summary>
    /// **参数解释**: hba配置总数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::vector<HbaHistoryResult> hbaHistories_;
    bool hbaHistoriesIsSet_;
    int64_t totalCount_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHbaInfoHistoryResponse_H_
