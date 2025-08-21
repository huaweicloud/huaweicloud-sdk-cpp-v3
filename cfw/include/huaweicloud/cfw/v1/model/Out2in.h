
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Out2in_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Out2in_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ItemVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  Out2in
    : public ModelBase
{
public:
    Out2in();
    virtual ~Out2in();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Out2in members

    /// <summary>
    /// **参数解释**： TOP访问目的IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getDstIp();
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： TOP开放端口 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getDstPort();
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： TOP访问源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getSrcIp();
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::vector<ItemVO>& value);


protected:
    std::vector<ItemVO> dstIp_;
    bool dstIpIsSet_;
    std::vector<ItemVO> dstPort_;
    bool dstPortIsSet_;
    std::vector<ItemVO> srcIp_;
    bool srcIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Out2in_H_
