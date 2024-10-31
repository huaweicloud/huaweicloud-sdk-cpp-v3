
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListJobRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListJobRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListJobRequest
    : public ModelBase
{
public:
    ListJobRequest();
    virtual ~ListJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobRequest members

    /// <summary>
    /// 创建按需防火墙返回的任务ID，可通过调用[创建防火墙接口](CreateFirewall.xml)返回值获得。返回值中job_id即为此处的job_id
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
    ListJobRequest& dereference_from_shared_ptr(std::shared_ptr<ListJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListJobRequest_H_
