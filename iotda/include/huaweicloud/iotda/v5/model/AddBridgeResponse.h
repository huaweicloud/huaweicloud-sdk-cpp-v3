
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridgeResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridgeResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/BridgeAuthInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddBridgeResponse
    : public ModelBase, public HttpResponse
{
public:
    AddBridgeResponse();
    virtual ~AddBridgeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddBridgeResponse members

    /// <summary>
    /// 网桥ID，用于唯一标识一个网桥。在注册网桥时直接指定，或者由物联网平台分配获得。
    /// </summary>

    std::string getBridgeId() const;
    bool bridgeIdIsSet() const;
    void unsetbridgeId();
    void setBridgeId(const std::string& value);

    /// <summary>
    /// 网桥名称。
    /// </summary>

    std::string getBridgeName() const;
    bool bridgeNameIsSet() const;
    void unsetbridgeName();
    void setBridgeName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BridgeAuthInfo getAuthInfo() const;
    bool authInfoIsSet() const;
    void unsetauthInfo();
    void setAuthInfo(const BridgeAuthInfo& value);

    /// <summary>
    /// 在物联网平台注册网桥的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string bridgeId_;
    bool bridgeIdIsSet_;
    std::string bridgeName_;
    bool bridgeNameIsSet_;
    BridgeAuthInfo authInfo_;
    bool authInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridgeResponse_H_
