
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobsRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// job_ids列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobsRequestBody
    : public ModelBase
{
public:
    JobsRequestBody();
    virtual ~JobsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobsRequestBody members

    /// <summary>
    /// job_ids列表
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobsRequestBody_H_
