
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeBatchDetachRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeBatchDetachRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  VolumeBatchDetachRequest
    : public ModelBase
{
public:
    VolumeBatchDetachRequest();
    virtual ~VolumeBatchDetachRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeBatchDetachRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getServerinfo();
    bool serverinfoIsSet() const;
    void unsetserverinfo();
    void setServerinfo(const std::vector<std::string>& value);


protected:
    std::vector<std::string> serverinfo_;
    bool serverinfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeBatchDetachRequest_H_
