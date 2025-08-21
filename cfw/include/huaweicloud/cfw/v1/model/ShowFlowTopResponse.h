
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTopResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTopResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ItemVO.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowFlowTopResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFlowTopResponse();
    virtual ~ShowFlowTopResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowTopResponse members

    /// <summary>
    /// **参数解释**： TOP统计信息 **取值范围**： 不涉及
    /// </summary>

    std::map<std::string, std::vector<ItemVO>>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::map<std::string, std::vector<ItemVO>>& value);


protected:
    std::map<std::string, std::vector<ItemVO>> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTopResponse_H_
