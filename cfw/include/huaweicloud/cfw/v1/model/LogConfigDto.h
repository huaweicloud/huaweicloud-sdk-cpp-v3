
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_LogConfigDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_LogConfigDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  LogConfigDto
    : public ModelBase
{
public:
    LogConfigDto();
    virtual ~LogConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogConfigDto members

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 是否开启LTS，1表示是，0表示不是
    /// </summary>

    int32_t getLtsEnable() const;
    bool ltsEnableIsSet() const;
    void unsetltsEnable();
    void setLtsEnable(int32_t value);

    /// <summary>
    /// LTS日志分组id,可通过查询LTS（云日志服务）下查询账号下所有日志组接口获得，通过返回值中的log_groups.log_group_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getLtsLogGroupId() const;
    bool ltsLogGroupIdIsSet() const;
    void unsetltsLogGroupId();
    void setLtsLogGroupId(const std::string& value);

    /// <summary>
    /// 攻击日志流id,可通过查询LTS（云日志服务）下查询指定日志组下的所有日志流接口获得，通过返回值中的log_streams.log_stream_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getLtsAttackLogStreamId() const;
    bool ltsAttackLogStreamIdIsSet() const;
    void unsetltsAttackLogStreamId();
    void setLtsAttackLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启攻击日志流，1表示是，0表示不是
    /// </summary>

    int32_t getLtsAttackLogStreamEnable() const;
    bool ltsAttackLogStreamEnableIsSet() const;
    void unsetltsAttackLogStreamEnable();
    void setLtsAttackLogStreamEnable(int32_t value);

    /// <summary>
    /// 访问控制日志流id,可通过查询LTS（云日志服务）下查询指定日志组下的所有日志流接口获得，通过返回值中的log_streams.log_stream_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getLtsAccessLogStreamId() const;
    bool ltsAccessLogStreamIdIsSet() const;
    void unsetltsAccessLogStreamId();
    void setLtsAccessLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启访问控制流，1表示是，0表示不是
    /// </summary>

    int32_t getLtsAccessLogStreamEnable() const;
    bool ltsAccessLogStreamEnableIsSet() const;
    void unsetltsAccessLogStreamEnable();
    void setLtsAccessLogStreamEnable(int32_t value);

    /// <summary>
    /// 流量日志id,可通过查询LTS（云日志服务）下查询指定日志组下的所有日志流接口获得，通过返回值中的log_streams.log_stream_id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getLtsFlowLogStreamId() const;
    bool ltsFlowLogStreamIdIsSet() const;
    void unsetltsFlowLogStreamId();
    void setLtsFlowLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启流量日志，1表示是，0表示不是
    /// </summary>

    int32_t getLtsFlowLogStreamEnable() const;
    bool ltsFlowLogStreamEnableIsSet() const;
    void unsetltsFlowLogStreamEnable();
    void setLtsFlowLogStreamEnable(int32_t value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t ltsEnable_;
    bool ltsEnableIsSet_;
    std::string ltsLogGroupId_;
    bool ltsLogGroupIdIsSet_;
    std::string ltsAttackLogStreamId_;
    bool ltsAttackLogStreamIdIsSet_;
    int32_t ltsAttackLogStreamEnable_;
    bool ltsAttackLogStreamEnableIsSet_;
    std::string ltsAccessLogStreamId_;
    bool ltsAccessLogStreamIdIsSet_;
    int32_t ltsAccessLogStreamEnable_;
    bool ltsAccessLogStreamEnableIsSet_;
    std::string ltsFlowLogStreamId_;
    bool ltsFlowLogStreamIdIsSet_;
    int32_t ltsFlowLogStreamEnable_;
    bool ltsFlowLogStreamEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_LogConfigDto_H_
