
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowRecycleBinResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowRecycleBinResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/RecycleBinPolicys.h>

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
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 回收站配置开关
    /// </summary>

    std::string getSwitch() const;
    bool switchIsSet() const;
    void unsetswitch();
    void setSwitch(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecycleBinPolicys getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const RecycleBinPolicys& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string switch_;
    bool switchIsSet_;
    RecycleBinPolicys policy_;
    bool policyIsSet_;

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
