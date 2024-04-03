
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BackboneBandwidthResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BackboneBandwidthResp_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 骨干带宽对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BackboneBandwidthResp
    : public ModelBase
{
public:
    BackboneBandwidthResp();
    virtual ~BackboneBandwidthResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackboneBandwidthResp members

    /// <summary>
    /// 骨干带宽的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 骨干带宽的状态
    /// </summary>

    std::string getAdminStatus() const;
    bool adminStatusIsSet() const;
    void unsetadminStatus();
    void setAdminStatus(const std::string& value);

    /// <summary>
    /// 骨干带宽的大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 骨干带宽的short_id
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 描述网络等级，从高到低分为铂金、金、银、铜
    /// </summary>

    std::string getSlaLevel() const;
    bool slaLevelIsSet() const;
    void unsetslaLevel();
    void setSlaLevel(const std::string& value);

    /// <summary>
    /// 线路质量金银铜对应的DSCP值
    /// </summary>

    int32_t getDscp() const;
    bool dscpIsSet() const;
    void unsetdscp();
    void setDscp(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string adminStatus_;
    bool adminStatusIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string slaLevel_;
    bool slaLevelIsSet_;
    int32_t dscp_;
    bool dscpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BackboneBandwidthResp_H_
