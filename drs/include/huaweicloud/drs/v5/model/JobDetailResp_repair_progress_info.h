
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobDetailResp_repair_progress_info_repair_progress_details.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修复进度明细。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobDetailResp_repair_progress_info
    : public ModelBase
{
public:
    JobDetailResp_repair_progress_info();
    virtual ~JobDetailResp_repair_progress_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobDetailResp_repair_progress_info members

    /// <summary>
    /// 修复状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 修复进度，百分比。
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    JobDetailResp_repair_progress_info_repair_progress_details getRepairProgressDetails() const;
    bool repairProgressDetailsIsSet() const;
    void unsetrepairProgressDetails();
    void setRepairProgressDetails(const JobDetailResp_repair_progress_info_repair_progress_details& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    int32_t count_;
    bool countIsSet_;
    JobDetailResp_repair_progress_info_repair_progress_details repairProgressDetails_;
    bool repairProgressDetailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobDetailResp_repair_progress_info_H_
