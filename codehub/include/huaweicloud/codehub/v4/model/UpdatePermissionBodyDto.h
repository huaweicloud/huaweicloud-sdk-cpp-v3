
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdatePermissionBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdatePermissionBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UpdatePermissionDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdatePermissionBodyDto
    : public ModelBase
{
public:
    UpdatePermissionBodyDto();
    virtual ~UpdatePermissionBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePermissionBodyDto members

    /// <summary>
    /// **参数解释：** 更新资源权限详情 **取值范围：** 不涉及。  
    /// </summary>

    std::vector<UpdatePermissionDto>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<UpdatePermissionDto>& value);


protected:
    std::vector<UpdatePermissionDto> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdatePermissionBodyDto_H_
