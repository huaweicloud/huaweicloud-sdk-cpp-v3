
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSummaryResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSummaryResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业数据源。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobSummaryResp
    : public ModelBase
{
public:
    JobSummaryResp();
    virtual ~JobSummaryResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobSummaryResp members

    /// <summary>
    /// **参数解释**：训练作业id。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobSummaryResp_H_
