
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeSrKernelVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeSrKernelVersionResponse();
    virtual ~UpgradeSrKernelVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeSrKernelVersionResponse members

    /// <summary>
    /// **参数解释**： 升级工作流ID。  **取值范围**： 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionResponse_H_
