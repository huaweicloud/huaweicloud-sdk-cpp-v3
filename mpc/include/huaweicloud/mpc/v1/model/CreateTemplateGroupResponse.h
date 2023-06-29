
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TemplateGroup.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateTemplateGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTemplateGroupResponse();
    virtual ~CreateTemplateGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTemplateGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    TemplateGroup getTemplateGroup() const;
    bool templateGroupIsSet() const;
    void unsettemplateGroup();
    void setTemplateGroup(const TemplateGroup& value);


protected:
    TemplateGroup templateGroup_;
    bool templateGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupResponse_H_
