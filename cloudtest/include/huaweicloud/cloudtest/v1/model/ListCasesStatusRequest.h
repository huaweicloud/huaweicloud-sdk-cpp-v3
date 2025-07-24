
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListCasesStatusRequest
    : public ModelBase
{
public:
    ListCasesStatusRequest();
    virtual ~ListCasesStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCasesStatusRequest members

    /// <summary>
    /// projectUUId
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);


protected:
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    std::string body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCasesStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ListCasesStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusRequest_H_
