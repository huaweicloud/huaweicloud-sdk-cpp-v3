
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationInstancesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationInstancesResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <vector>
#include <huaweicloud/identitycenter/v1/model/ApplicationInstanceDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListApplicationInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationInstancesResponse();
    virtual ~ListApplicationInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationInstancesResponse members

    /// <summary>
    /// 应用程序实例列表
    /// </summary>

    std::vector<ApplicationInstanceDto>& getApplicationInstances();
    bool applicationInstancesIsSet() const;
    void unsetapplicationInstances();
    void setApplicationInstances(const std::vector<ApplicationInstanceDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ApplicationInstanceDto> applicationInstances_;
    bool applicationInstancesIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationInstancesResponse_H_
