
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_lts_configs_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_lts_configs_H_


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
/// 单个实例需要设置的LTS策略。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateLtsConfigRequestBody_lts_configs
    : public ModelBase
{
public:
    UpdateLtsConfigRequestBody_lts_configs();
    virtual ~UpdateLtsConfigRequestBody_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLtsConfigRequestBody_lts_configs members

    /// <summary>
    /// 实例ID，可以调用“[查询实例列表和详情](x-wc://file&#x3D;zh-cn_topic_0000001369935045.xml)”接口获取。如果未申请实例，可以调用“[创建实例](x-wc://file&#x3D;zh-cn_topic_0000001369734929.xml)”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LtsLogType getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const LtsLogType& value);

    /// <summary>
    /// LTS日志组ID。可通过云日志服务-“查询账号下所有日志组”API接口获取。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// LTS日志流ID。可通过云日志服务-“查询指定日志组下的所有日志流”API接口获取。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    LtsLogType logType_;
    bool logTypeIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_lts_configs_H_
