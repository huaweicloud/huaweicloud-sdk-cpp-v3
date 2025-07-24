
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestcasePlanQueryParam.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestcasePlansRequest
    : public ModelBase
{
public:
    ListTestcasePlansRequest();
    virtual ~ListTestcasePlansRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestcasePlansRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TestcasePlanQueryParam getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TestcasePlanQueryParam& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    TestcasePlanQueryParam body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTestcasePlansRequest& dereference_from_shared_ptr(std::shared_ptr<ListTestcasePlansRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansRequest_H_
