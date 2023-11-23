
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
    /// 防火墙id
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 是否开启LTS
    /// </summary>

    int32_t getLtsEnable() const;
    bool ltsEnableIsSet() const;
    void unsetltsEnable();
    void setLtsEnable(int32_t value);

    /// <summary>
    /// LTS日志分组id
    /// </summary>

    std::string getLtsLogGroupId() const;
    bool ltsLogGroupIdIsSet() const;
    void unsetltsLogGroupId();
    void setLtsLogGroupId(const std::string& value);

    /// <summary>
    /// 攻击日志流id
    /// </summary>

    std::string getLtsAttackLogStreamId() const;
    bool ltsAttackLogStreamIdIsSet() const;
    void unsetltsAttackLogStreamId();
    void setLtsAttackLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启攻击日志流
    /// </summary>

    int32_t getLtsAttackLogStreamEnable() const;
    bool ltsAttackLogStreamEnableIsSet() const;
    void unsetltsAttackLogStreamEnable();
    void setLtsAttackLogStreamEnable(int32_t value);

    /// <summary>
    /// 访问控制日志流id
    /// </summary>

    std::string getLtsAccessLogStreamId() const;
    bool ltsAccessLogStreamIdIsSet() const;
    void unsetltsAccessLogStreamId();
    void setLtsAccessLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启访问控制流
    /// </summary>

    int32_t getLtsAccessLogStreamEnable() const;
    bool ltsAccessLogStreamEnableIsSet() const;
    void unsetltsAccessLogStreamEnable();
    void setLtsAccessLogStreamEnable(int32_t value);

    /// <summary>
    /// 流量日志id
    /// </summary>

    std::string getLtsFlowLogStreamId() const;
    bool ltsFlowLogStreamIdIsSet() const;
    void unsetltsFlowLogStreamId();
    void setLtsFlowLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启流量日志
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
