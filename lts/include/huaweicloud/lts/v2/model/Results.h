
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Results_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Results_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Results
    : public ModelBase
{
public:
    Results();
    virtual ~Results();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Results members

    /// <summary>
    /// **参数解释：** 企业项目ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志组名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志组别名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogGroupNameAlias() const;
    bool logGroupNameAliasIsSet() const;
    void unsetlogGroupNameAlias();
    void setLogGroupNameAlias(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流别名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLogStreamNameAlias() const;
    bool logStreamNameAliasIsSet() const;
    void unsetlogStreamNameAlias();
    void setLogStreamNameAlias(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警统计周期，例如：1小时。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::string epsId_;
    bool epsIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logGroupNameAlias_;
    bool logGroupNameAliasIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logStreamNameAlias_;
    bool logStreamNameAliasIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Results_H_
