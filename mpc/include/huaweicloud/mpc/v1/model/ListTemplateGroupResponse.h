
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TemplateGroup.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ListTemplateGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplateGroupResponse();
    virtual ~ListTemplateGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTemplateGroupResponse members

    /// <summary>
    /// 模板组信息列表。 
    /// </summary>

    std::vector<TemplateGroup>& getTemplateGroupList();
    bool templateGroupListIsSet() const;
    void unsettemplateGroupList();
    void setTemplateGroupList(const std::vector<TemplateGroup>& value);

    /// <summary>
    /// 转码模板组总数 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TemplateGroup> templateGroupList_;
    bool templateGroupListIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupResponse_H_
