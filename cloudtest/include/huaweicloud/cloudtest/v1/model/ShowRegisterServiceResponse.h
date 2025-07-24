
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ServicesInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowRegisterServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRegisterServiceResponse();
    virtual ~ShowRegisterServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRegisterServiceResponse members

    /// <summary>
    /// 注册服务信息
    /// </summary>

    std::vector<ServicesInfo>& getServices();
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const std::vector<ServicesInfo>& value);


protected:
    std::vector<ServicesInfo> services_;
    bool servicesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceResponse_H_
