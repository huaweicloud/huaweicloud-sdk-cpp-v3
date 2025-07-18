
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowRecycleBinResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowRecycleBinResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/RecycleBin.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowRecycleBinResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecycleBinResponse();
    virtual ~ShowRecycleBinResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecycleBinResponse members

    /// <summary>
    /// 
    /// </summary>

    RecycleBin getRecycleBin() const;
    bool recycleBinIsSet() const;
    void unsetrecycleBin();
    void setRecycleBin(const RecycleBin& value);


protected:
    RecycleBin recycleBin_;
    bool recycleBinIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowRecycleBinResponse_H_
