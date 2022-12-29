
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_SubJobsInfo_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_SubJobsInfo_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  SubJobsInfo
    : public ModelBase
{
public:
    SubJobsInfo();
    virtual ~SubJobsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubJobsInfo members

    /// <summary>
    /// 子job信息，类型与主job一致
    /// </summary>

    std::vector<Object>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<Object>& value);


protected:
    std::vector<Object> subJobs_;
    bool subJobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_SubJobsInfo_H_
