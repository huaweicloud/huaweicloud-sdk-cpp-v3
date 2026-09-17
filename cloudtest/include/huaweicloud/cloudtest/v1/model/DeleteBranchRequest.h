
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBranchRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBranchRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteBranchRequest
    : public ModelBase
{
public:
    DeleteBranchRequest();
    virtual ~DeleteBranchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBranchRequest members

    /// <summary>
    /// 分支URI
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 是否异步执行
    /// </summary>

    bool isIsAsync() const;
    bool isAsyncIsSet() const;
    void unsetisAsync();
    void setIsAsync(bool value);


protected:
    std::string branchUri_;
    bool branchUriIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    bool isAsync_;
    bool isAsyncIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteBranchRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteBranchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteBranchRequest_H_
