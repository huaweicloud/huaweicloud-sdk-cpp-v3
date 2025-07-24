
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowDisclaimerRecordRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowDisclaimerRecordRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowDisclaimerRecordRequest
    : public ModelBase
{
public:
    ShowDisclaimerRecordRequest();
    virtual ~ShowDisclaimerRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDisclaimerRecordRequest members

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDisclaimerRecordRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDisclaimerRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowDisclaimerRecordRequest_H_
