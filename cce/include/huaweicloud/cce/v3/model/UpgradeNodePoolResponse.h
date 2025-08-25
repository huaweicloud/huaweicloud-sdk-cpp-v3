
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeNodePoolResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeNodePoolResponse();
    virtual ~UpgradeNodePoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeNodePoolResponse members

    /// <summary>
    /// Job ID returned after the job is delivered. The job ID can be used to query the job execution status.
    /// </summary>

    std::string getJobid() const;
    bool jobidIsSet() const;
    void unsetjobid();
    void setJobid(const std::string& value);


protected:
    std::string jobid_;
    bool jobidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolResponse_H_
