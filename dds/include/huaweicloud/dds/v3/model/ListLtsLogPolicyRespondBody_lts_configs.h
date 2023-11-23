
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_lts_configs_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_lts_configs_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/LtsLogType.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsLogPolicyRespondBody_lts_configs
    : public ModelBase
{
public:
    ListLtsLogPolicyRespondBody_lts_configs();
    virtual ~ListLtsLogPolicyRespondBody_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsLogPolicyRespondBody_lts_configs members

    /// <summary>
    /// 
    /// </summary>

    LtsLogType getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const LtsLogType& value);

    /// <summary>
    /// 云日志服务LTS日志组ID。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// 云日志服务LTS日志流ID。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);

    /// <summary>
    /// 是否上传。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    LtsLogType logType_;
    bool logTypeIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_lts_configs_H_
