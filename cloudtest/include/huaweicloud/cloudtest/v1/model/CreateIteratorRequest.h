
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateIteratorRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateIteratorRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/IteratorVersionInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateIteratorRequest
    : public ModelBase
{
public:
    CreateIteratorRequest();
    virtual ~CreateIteratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIteratorRequest members

    /// <summary>
    /// 分支URI
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IteratorVersionInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IteratorVersionInfo& value);


protected:
    std::string branchUri_;
    bool branchUriIsSet_;
    IteratorVersionInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateIteratorRequest& dereference_from_shared_ptr(std::shared_ptr<CreateIteratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateIteratorRequest_H_
