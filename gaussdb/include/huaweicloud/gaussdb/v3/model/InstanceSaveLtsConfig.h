
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceSaveLtsConfig_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceSaveLtsConfig_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  InstanceSaveLtsConfig
    : public ModelBase
{
public:
    InstanceSaveLtsConfig();
    virtual ~InstanceSaveLtsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceSaveLtsConfig members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 日志类型。
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// 日志组ID。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string logType_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceSaveLtsConfig_H_
