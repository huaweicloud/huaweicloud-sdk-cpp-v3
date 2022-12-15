
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowResourcesJobDetailRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowResourcesJobDetailRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ShowResourcesJobDetailRequest
    : public ModelBase
{
public:
    ShowResourcesJobDetailRequest();
    virtual ~ShowResourcesJobDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowResourcesJobDetailRequest members

    /// <summary>
    /// 批量操作返回的JOB ID
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
public:
    ShowResourcesJobDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowResourcesJobDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowResourcesJobDetailRequest_H_
