
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IpsRuleUpdateTimeVO.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  ShowIpsUpdateTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIpsUpdateTimeResponse();
    virtual ~ShowIpsUpdateTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpsUpdateTimeResponse members

    /// <summary>
    /// 查询ips规则细节时间数据
    /// </summary>

    std::vector<IpsRuleUpdateTimeVO>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<IpsRuleUpdateTimeVO>& value);


protected:
    std::vector<IpsRuleUpdateTimeVO> data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_
