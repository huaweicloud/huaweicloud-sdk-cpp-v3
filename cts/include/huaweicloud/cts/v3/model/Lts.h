
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Lts_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Lts_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云日志服务配置
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Lts
    : public ModelBase
{
public:
    Lts();
    virtual ~Lts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Lts members

    /// <summary>
    /// 是否启用日志服务检索功能。
    /// </summary>

    bool isIsLtsEnabled() const;
    bool isLtsEnabledIsSet() const;
    void unsetisLtsEnabled();
    void setIsLtsEnabled(bool value);

    /// <summary>
    /// 云审计服务在日志服务中创建的日志组名称。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 云审计服务在日志服务中创建的日志主题名称。
    /// </summary>

    std::string getLogTopicName() const;
    bool logTopicNameIsSet() const;
    void unsetlogTopicName();
    void setLogTopicName(const std::string& value);


protected:
    bool isLtsEnabled_;
    bool isLtsEnabledIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logTopicName_;
    bool logTopicNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Lts_H_
