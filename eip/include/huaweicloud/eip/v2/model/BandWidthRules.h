
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BandWidthRules_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BandWidthRules_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/PublicipInfoResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 带宽规则对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BandWidthRules
    : public ModelBase
{
public:
    BandWidthRules();
    virtual ~BandWidthRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BandWidthRules members

    /// <summary>
    /// 带宽规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 带宽规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 配置状态，为False时配置不生效。
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 出网带宽最大值，单位M bps。取值范围[0,n]，其中n为所属带宽的带宽大小（size字段）。0表示设置为最大带宽。
    /// </summary>

    int32_t getEgressSize() const;
    bool egressSizeIsSet() const;
    void unsetegressSize();
    void setEgressSize(int32_t value);

    /// <summary>
    /// 出网保障带宽大小，单位M bps。取值范围[0,x]，其中x为所属带宽剩余的保障额。
    /// </summary>

    int32_t getEgressGuarentedSize() const;
    bool egressGuarentedSizeIsSet() const;
    void unsetegressGuarentedSize();
    void setEgressGuarentedSize(int32_t value);

    /// <summary>
    /// 功能说明：带宽对应的弹性公网IP信息  约束：WHOLE类型的带宽支持多个弹性公网IP，PER类型的带宽只能对应一个弹性公网IP
    /// </summary>

    std::vector<PublicipInfoResp>& getPublicipInfo();
    bool publicipInfoIsSet() const;
    void unsetpublicipInfo();
    void setPublicipInfo(const std::vector<PublicipInfoResp>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    int32_t egressSize_;
    bool egressSizeIsSet_;
    int32_t egressGuarentedSize_;
    bool egressGuarentedSizeIsSet_;
    std::vector<PublicipInfoResp> publicipInfo_;
    bool publicipInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BandWidthRules_H_
