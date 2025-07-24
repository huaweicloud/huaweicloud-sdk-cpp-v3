
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowConcurrencyPackageUsingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowConcurrencyPackageUsingRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowConcurrencyPackageUsingRequest
    : public ModelBase
{
public:
    ShowConcurrencyPackageUsingRequest();
    virtual ~ShowConcurrencyPackageUsingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConcurrencyPackageUsingRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// test_type
    /// </summary>

    std::string getTestType() const;
    bool testTypeIsSet() const;
    void unsettestType();
    void setTestType(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string testType_;
    bool testTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowConcurrencyPackageUsingRequest& dereference_from_shared_ptr(std::shared_ptr<ShowConcurrencyPackageUsingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowConcurrencyPackageUsingRequest_H_
