
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplyHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplyHistoryResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/ApplyHistoryRsp.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowApplyHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowApplyHistoryResponse();
    virtual ~ShowApplyHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApplyHistoryResponse members

    /// <summary>
    /// **参数解释：** 总记录数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释：** 参数组模板应用历史列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<ApplyHistoryRsp>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<ApplyHistoryRsp>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ApplyHistoryRsp> histories_;
    bool historiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowApplyHistoryResponse_H_
