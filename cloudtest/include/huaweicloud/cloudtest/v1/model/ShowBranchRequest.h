
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowBranchRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowBranchRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowBranchRequest
    : public ModelBase
{
public:
    ShowBranchRequest();
    virtual ~ShowBranchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchRequest members

    /// <summary>
    /// 分支URI
    /// </summary>

    std::string getBranchId() const;
    bool branchIdIsSet() const;
    void unsetbranchId();
    void setBranchId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);


protected:
    std::string branchId_;
    bool branchIdIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBranchRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBranchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowBranchRequest_H_
