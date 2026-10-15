
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayRecordResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayRecordResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ReplayExecuteRecords.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReplayRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplayRecordResponse();
    virtual ~ShowReplayRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplayRecordResponse members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 回放任务的SQL执行记录。
    /// </summary>

    std::vector<ReplayExecuteRecords>& getSqlRecords();
    bool sqlRecordsIsSet() const;
    void unsetsqlRecords();
    void setSqlRecords(const std::vector<ReplayExecuteRecords>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ReplayExecuteRecords> sqlRecords_;
    bool sqlRecordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayRecordResponse_H_
