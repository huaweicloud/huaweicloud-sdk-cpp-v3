
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsInfoOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsInfoOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: LTS对接配置信息。 **约束限制**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  LtsInfoOption
    : public ModelBase
{
public:
    LtsInfoOption();
    virtual ~LtsInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsInfoOption members

    /// <summary>
    /// **参数解释**: LTS日志组名称。 **约束限制**: 满足正则匹配表达式校验：^GROUP_GAUSSDB_APS-[a-zA-Z0-9-_]{32}in(14|20)$。 **取值范围**: 通常为GROUP_GAUSSDB_APS-实例ID。 **默认取值**: 不涉及。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志流名称。 **约束限制**: 满足正则匹配表达式校验：^GROUP_GAUSSDB_APS-[a-zA-Z0-9-_]{32}in(14|20)$。 **取值范围**: 通常为STREAM_APS_FULL_SQL-实例ID。 **默认取值**: 不涉及。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsInfoOption_H_
