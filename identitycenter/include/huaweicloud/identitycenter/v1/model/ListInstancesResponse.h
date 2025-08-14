
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListInstancesResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListInstancesResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/InstanceMetadataEntryDto.h>
#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <vector>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesResponse();
    virtual ~ListInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesResponse members

    /// <summary>
    /// IAM身份中心实例信息列表。
    /// </summary>

    std::vector<InstanceMetadataEntryDto>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<InstanceMetadataEntryDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<InstanceMetadataEntryDto> instances_;
    bool instancesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListInstancesResponse_H_
