
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_GlobalConnectionBandwidthInfo_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_GlobalConnectionBandwidthInfo_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  GlobalConnectionBandwidthInfo
    : public ModelBase
{
public:
    GlobalConnectionBandwidthInfo();
    virtual ~GlobalConnectionBandwidthInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlobalConnectionBandwidthInfo members

    /// <summary>
    /// 骨干带宽的ID
    /// </summary>

    std::string getGcbId() const;
    bool gcbIdIsSet() const;
    void unsetgcbId();
    void setGcbId(const std::string& value);

    /// <summary>
    /// 骨干带宽的大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 骨干带宽类型（城域、区域和大区）
    /// </summary>

    std::string getGcbType() const;
    bool gcbTypeIsSet() const;
    void unsetgcbType();
    void setGcbType(const std::string& value);

    /// <summary>
    /// - 功能说明：骨干带宽状态 - 取值范围：NORMAL 正常、FREEZED 冻结
    /// </summary>

    std::string getAdminState() const;
    bool adminStateIsSet() const;
    void unsetadminState();
    void setAdminState(const std::string& value);

    /// <summary>
    /// - 功能说明：网络服务等级 - 取值范围：Pt - 铂金，Au - 金牌，Ag - 银牌，Cu - 铜牌
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
    std::string gcbId_;
    bool gcbIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string gcbType_;
    bool gcbTypeIsSet_;
    std::string adminState_;
    bool adminStateIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_GlobalConnectionBandwidthInfo_H_
