
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_PopPolicy_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_PopPolicy_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v1/model/Bw.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略阈值详情
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  PopPolicy
    : public ModelBase
{
public:
    PopPolicy();
    virtual ~PopPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PopPolicy members

    /// <summary>
    /// 位置封禁列表
    /// </summary>

    std::vector<std::string>& getBlockLocation();
    bool blockLocationIsSet() const;
    void unsetblockLocation();
    void setBlockLocation(const std::vector<std::string>& value);

    /// <summary>
    /// 协议封禁列表
    /// </summary>

    std::vector<std::string>& getBlockProtocol();
    bool blockProtocolIsSet() const;
    void unsetblockProtocol();
    void setBlockProtocol(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Bw getBwList() const;
    bool bwListIsSet() const;
    void unsetbwList();
    void setBwList(const Bw& value);

    /// <summary>
    /// 是否开启连接防护
    /// </summary>

    bool isConnectionProtection() const;
    bool connectionProtectionIsSet() const;
    void unsetconnectionProtection();
    void setConnectionProtection(bool value);

    /// <summary>
    /// 连接防护列表
    /// </summary>

    std::vector<std::string>& getConnectionProtectionList();
    bool connectionProtectionListIsSet() const;
    void unsetconnectionProtectionList();
    void setConnectionProtectionList(const std::vector<std::string>& value);

    /// <summary>
    /// 指纹数
    /// </summary>

    int32_t getFingerprintCount() const;
    bool fingerprintCountIsSet() const;
    void unsetfingerprintCount();
    void setFingerprintCount(int32_t value);

    /// <summary>
    /// 端口封禁数
    /// </summary>

    int32_t getPortBlockCount() const;
    bool portBlockCountIsSet() const;
    void unsetportBlockCount();
    void setPortBlockCount(int32_t value);

    /// <summary>
    /// 水印数
    /// </summary>

    int32_t getWatermarkCount() const;
    bool watermarkCountIsSet() const;
    void unsetwatermarkCount();
    void setWatermarkCount(int32_t value);

    /// <summary>
    /// 是否存在流量
    /// </summary>

    bool isIfExistTraffic() const;
    bool ifExistTrafficIsSet() const;
    void unsetifExistTraffic();
    void setIfExistTraffic(bool value);

    /// <summary>
    /// 固定值ALL
    /// </summary>

    std::string getPop() const;
    bool popIsSet() const;
    void unsetpop();
    void setPop(const std::string& value);


protected:
    std::vector<std::string> blockLocation_;
    bool blockLocationIsSet_;
    std::vector<std::string> blockProtocol_;
    bool blockProtocolIsSet_;
    Bw bwList_;
    bool bwListIsSet_;
    bool connectionProtection_;
    bool connectionProtectionIsSet_;
    std::vector<std::string> connectionProtectionList_;
    bool connectionProtectionListIsSet_;
    int32_t fingerprintCount_;
    bool fingerprintCountIsSet_;
    int32_t portBlockCount_;
    bool portBlockCountIsSet_;
    int32_t watermarkCount_;
    bool watermarkCountIsSet_;
    bool ifExistTraffic_;
    bool ifExistTrafficIsSet_;
    std::string pop_;
    bool popIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_PopPolicy_H_
