
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapProcessInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapProcessInfo_H_


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
/// HTAP标准版的会话信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapProcessInfo
    : public ModelBase
{
public:
    HtapProcessInfo();
    virtual ~HtapProcessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapProcessInfo members

    /// <summary>
    /// **参数解释**：  会话ID。    **取值范围**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话用户名。    **取值范围**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话主机。    **取值范围**：  不涉及。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话对应数据库。    **取值范围**：  不涉及。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话执行的SQL语句。    **取值范围**：  不涉及。
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话持续时间，单位是秒。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话命令类型。    **取值范围**：  不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string duration_;
    bool durationIsSet_;
    std::string command_;
    bool commandIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapProcessInfo_H_
