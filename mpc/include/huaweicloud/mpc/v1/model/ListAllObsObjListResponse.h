
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/mpc/v1/model/ObsObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListAllObsObjListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllObsObjListResponse();
    virtual ~ListAllObsObjListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAllObsObjListResponse members

    /// <summary>
    /// 返回OBS对象组
    /// </summary>

    std::vector<ObsObject>& getObjects();
    bool objectsIsSet() const;
    void unsetobjects();
    void setObjects(const std::vector<ObsObject>& value);


protected:
    std::vector<ObsObject> objects_;
    bool objectsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_
