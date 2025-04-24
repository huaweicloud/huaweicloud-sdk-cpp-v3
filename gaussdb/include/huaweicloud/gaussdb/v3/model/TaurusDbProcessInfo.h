
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbProcessInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbProcessInfo_H_


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
/// TaurusDB用户会话线程信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusDbProcessInfo
    : public ModelBase
{
public:
    TaurusDbProcessInfo();
    virtual ~TaurusDbProcessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusDbProcessInfo members

    /// <summary>
    /// **参数解释**：  用户会话线程ID。
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// **参数解释**：  启动用户会话线程的用户。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  发送请求的主机和端口。 
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：  当前访问的数据库名。 
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：  当前执行的命令。 
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户会话线程处于当前状态的持续时间，单位为秒。 
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);

    /// <summary>
    /// **参数解释**：  正在执行的SQL语句的当前状态。 
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：  额外信息，通常是正在执行的语句。 
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string command_;
    bool commandIsSet_;
    int64_t time_;
    bool timeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string info_;
    bool infoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusDbProcessInfo_H_
