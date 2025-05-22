
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticReq_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/SCTE35StatisticReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询OTT频道统计信息消息体。
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowChannelStatisticReq
    : public ModelBase
{
public:
    ShowChannelStatisticReq();
    virtual ~ShowChannelStatisticReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowChannelStatisticReq members

    /// <summary>
    /// 频道推流域名。
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 组名或应用名。
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 频道ID。频道唯一标识，为必填项。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 统计信息的类型，scte35。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SCTE35StatisticReq getScte35() const;
    bool scte35IsSet() const;
    void unsetscte35();
    void setScte35(const SCTE35StatisticReq& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    SCTE35StatisticReq scte35_;
    bool scte35IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticReq_H_
