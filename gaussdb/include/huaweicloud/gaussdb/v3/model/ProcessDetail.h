
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProcessDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProcessDetail_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProcessDetail
    : public ModelBase
{
public:
    ProcessDetail();
    virtual ~ProcessDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessDetail members

    /// <summary>
    /// **参数解释**  会话ID。  **取值范围**：  不涉及。
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// **参数解释**：  用户名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：    数据库名。    **取值范围**：    不涉及。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：  执行状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：  命令。  **取值范围**：  不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL语句。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSqlInfo() const;
    bool sqlInfoIsSet() const;
    void unsetsqlInfo();
    void setSqlInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：  状态持续时间，单位是秒。  **取值范围**：  不涉及。
    /// </summary>

    int64_t getStateDuration() const;
    bool stateDurationIsSet() const;
    void unsetstateDuration();
    void setStateDuration(int64_t value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string sqlInfo_;
    bool sqlInfoIsSet_;
    int64_t stateDuration_;
    bool stateDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProcessDetail_H_
