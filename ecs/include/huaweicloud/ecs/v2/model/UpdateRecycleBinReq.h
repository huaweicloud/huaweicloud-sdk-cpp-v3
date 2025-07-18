
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinReq_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinReq_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateRecycleBinOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateRecycleBinReq
    : public ModelBase
{
public:
    UpdateRecycleBinReq();
    virtual ~UpdateRecycleBinReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecycleBinReq members

    /// <summary>
    /// 
    /// </summary>

    UpdateRecycleBinOption getRecycleBin() const;
    bool recycleBinIsSet() const;
    void unsetrecycleBin();
    void setRecycleBin(const UpdateRecycleBinOption& value);


protected:
    UpdateRecycleBinOption recycleBin_;
    bool recycleBinIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinReq_H_
