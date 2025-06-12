
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteAgencyWithRoleTypeRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteAgencyWithRoleTypeRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DeleteAgencyWithRoleTypeRequest
    : public ModelBase
{
public:
    DeleteAgencyWithRoleTypeRequest();
    virtual ~DeleteAgencyWithRoleTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAgencyWithRoleTypeRequest members

    /// <summary>
    /// 委托授权类型 * CBS:对话机器人服务(CBS)访客 * SIS:语音交互服务(SIS)调用
    /// </summary>

    std::string getRoleType() const;
    bool roleTypeIsSet() const;
    void unsetroleType();
    void setRoleType(const std::string& value);


protected:
    std::string roleType_;
    bool roleTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAgencyWithRoleTypeRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAgencyWithRoleTypeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteAgencyWithRoleTypeRequest_H_
