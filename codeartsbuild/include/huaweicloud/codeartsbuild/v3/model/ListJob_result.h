
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListJob_result_job_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListJob_result
    : public ModelBase
{
public:
    ListJob_result();
    virtual ~ListJob_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJob_result members

    /// <summary>
    /// 任务总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<ListJob_result_job_list>& getJobList();
    bool jobListIsSet() const;
    void unsetjobList();
    void setJobList(const std::vector<ListJob_result_job_list>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ListJob_result_job_list> jobList_;
    bool jobListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_H_
