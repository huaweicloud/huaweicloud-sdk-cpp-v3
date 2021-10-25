
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ProfileInfo_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ProfileInfo_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/BandwidthInfoResp.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 公网IP元数据, EIP服务内部使用，不对外开放
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ProfileInfo
    : public ModelBase
{
public:
    ProfileInfo();
    virtual ~ProfileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProfileInfo members

    /// <summary>
    /// 公网IP附属的5_xxx网络（如5_bgp）中的port_id
    /// </summary>

    std::string getLocalNetworkPort() const;
    bool localNetworkPortIsSet() const;
    void unsetlocalNetworkPort();
    void setLocalNetworkPort(const std::string& value);

    /// <summary>
    /// 标识公网IP是否是和虚机一起创建的。true-独立创建；false-和虚机一起创建
    /// </summary>

    bool isStandalone() const;
    bool standaloneIsSet() const;
    void unsetstandalone();
    void setStandalone(bool value);

    /// <summary>
    /// 云服务标识公网IP创建进度, EIP服务内部使用。
    /// </summary>

    std::string getNotifyStatus() const;
    bool notifyStatusIsSet() const;
    void unsetnotifyStatus();
    void setNotifyStatus(const std::string& value);

    /// <summary>
    /// 公网IP创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 该字段仅仅用于表示eip的bgp类型是否是真实的静态sbgp * 1. 如果为true，则该eip可以切换bgp类型 * 2. 如果为false，则该eip不可以切换bgp类型
    /// </summary>

    bool isFakeNetworkType() const;
    bool fakeNetworkTypeIsSet() const;
    void unsetfakeNetworkType();
    void setFakeNetworkType(bool value);

    /// <summary>
    /// 标识IP是和哪类资源一起购买的
    /// </summary>

    std::string getCreateSource() const;
    bool createSourceIsSet() const;
    void unsetcreateSource();
    void setCreateSource(const std::string& value);

    /// <summary>
    /// 标识和公网IP一起购买的ecs的id
    /// </summary>

    std::string getEcsId() const;
    bool ecsIdIsSet() const;
    void unsetecsId();
    void setEcsId(const std::string& value);

    /// <summary>
    /// 公网IP加锁状态, eg:\&quot;POLICE,LOCKED\&quot;。POLICE-公安冻结；LOCKED-普通冻结；普通冻结细分状态：ARREAR-欠费；DELABLE-可删除；
    /// </summary>

    std::string getLockStatus() const;
    bool lockStatusIsSet() const;
    void unsetlockStatus();
    void setLockStatus(const std::string& value);

    /// <summary>
    /// 公网IP冻结状态。
    /// </summary>

    std::string getFreezedStatus() const;
    bool freezedStatusIsSet() const;
    void unsetfreezedStatus();
    void setFreezedStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BandwidthInfoResp getBandwithInfo() const;
    bool bandwithInfoIsSet() const;
    void unsetbandwithInfo();
    void setBandwithInfo(const BandwidthInfoResp& value);


protected:
    std::string localNetworkPort_;
    bool localNetworkPortIsSet_;
    bool standalone_;
    bool standaloneIsSet_;
    std::string notifyStatus_;
    bool notifyStatusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    bool fakeNetworkType_;
    bool fakeNetworkTypeIsSet_;
    std::string createSource_;
    bool createSourceIsSet_;
    std::string ecsId_;
    bool ecsIdIsSet_;
    std::string lockStatus_;
    bool lockStatusIsSet_;
    std::string freezedStatus_;
    bool freezedStatusIsSet_;
    BandwidthInfoResp bandwithInfo_;
    bool bandwithInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ProfileInfo_H_
