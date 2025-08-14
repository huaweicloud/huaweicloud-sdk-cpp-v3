
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeRegisteredRegionsResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeRegisteredRegionsResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/RegionDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribeRegisteredRegionsResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribeRegisteredRegionsResponse();
    virtual ~DescribeRegisteredRegionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeRegisteredRegionsResponse members

    /// <summary>
    /// 局点列表
    /// </summary>

    std::vector<RegionDto>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<RegionDto>& value);


protected:
    std::vector<RegionDto> regions_;
    bool regionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeRegisteredRegionsResponse_H_
