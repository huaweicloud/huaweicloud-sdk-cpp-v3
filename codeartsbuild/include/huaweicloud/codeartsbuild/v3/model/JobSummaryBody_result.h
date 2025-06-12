
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummaryBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummaryBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobSummary.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobSummaryBody_result
    : public ModelBase
{
public:
    JobSummaryBody_result();
    virtual ~JobSummaryBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobSummaryBody_result members

    /// <summary>
    /// 
    /// </summary>

    JobSummary getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const JobSummary& value);


protected:
    JobSummary summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummaryBody_result_H_
