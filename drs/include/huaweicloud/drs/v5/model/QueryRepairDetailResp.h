
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/QueryRepairDetailResp_repair_details.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修复详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryRepairDetailResp
    : public ModelBase
{
public:
    QueryRepairDetailResp();
    virtual ~QueryRepairDetailResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRepairDetailResp members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 修复详情。
    /// </summary>

    std::vector<QueryRepairDetailResp_repair_details>& getRepairDetails();
    bool repairDetailsIsSet() const;
    void unsetrepairDetails();
    void setRepairDetails(const std::vector<QueryRepairDetailResp_repair_details>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<QueryRepairDetailResp_repair_details> repairDetails_;
    bool repairDetailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_H_
