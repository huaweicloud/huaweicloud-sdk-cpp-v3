
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobUpdateRecordListVo_result_job_update_records.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobUpdateRecordListVo_result
    : public ModelBase
{
public:
    JobUpdateRecordListVo_result();
    virtual ~JobUpdateRecordListVo_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobUpdateRecordListVo_result members

    /// <summary>
    /// job_update_records
    /// </summary>

    std::vector<JobUpdateRecordListVo_result_job_update_records>& getJobUpdateRecords();
    bool jobUpdateRecordsIsSet() const;
    void unsetjobUpdateRecords();
    void setJobUpdateRecords(const std::vector<JobUpdateRecordListVo_result_job_update_records>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<JobUpdateRecordListVo_result_job_update_records> jobUpdateRecords_;
    bool jobUpdateRecordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobUpdateRecordListVo_result_H_
