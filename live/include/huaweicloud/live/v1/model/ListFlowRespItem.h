
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowRespItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowRespItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 响应流列表项
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListFlowRespItem
    : public ModelBase
{
public:
    ListFlowRespItem();
    virtual ~ListFlowRespItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlowRespItem members

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 流id
    /// </summary>

    std::string getFlowId() const;
    bool flowIdIsSet() const;
    void unsetflowId();
    void setFlowId(const std::string& value);

    /// <summary>
    /// 当前状态，ACTIVE运行中，STANDBY未启动
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 协议，srt-caller，srt-listener
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string flowId_;
    bool flowIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowRespItem_H_
