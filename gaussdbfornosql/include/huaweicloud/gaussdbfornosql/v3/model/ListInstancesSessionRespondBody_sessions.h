
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionRespondBody_sessions_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionRespondBody_sessions_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesSessionRespondBody_sessions
    : public ModelBase
{
public:
    ListInstancesSessionRespondBody_sessions();
    virtual ~ListInstancesSessionRespondBody_sessions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSessionRespondBody_sessions members

    /// <summary>
    /// 客户端的地址和端口。
    /// </summary>

    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);

    /// <summary>
    /// 会话id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 连接名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 最近一次执行的命令。
    /// </summary>

    std::string getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const std::string& value);

    /// <summary>
    /// 以秒计算的已连接时长。
    /// </summary>

    std::string getAge() const;
    bool ageIsSet() const;
    void unsetage();
    void setAge(const std::string& value);

    /// <summary>
    /// 以秒计算的空闲时长。
    /// </summary>

    std::string getIdle() const;
    bool idleIsSet() const;
    void unsetidle();
    void setIdle(const std::string& value);

    /// <summary>
    /// 该客户端正在使用的数据库 ID。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// 套接字所使用的文件描述符。
    /// </summary>

    std::string getFd() const;
    bool fdIsSet() const;
    void unsetfd();
    void setFd(const std::string& value);

    /// <summary>
    /// 已订阅频道的数量。
    /// </summary>

    std::string getSub() const;
    bool subIsSet() const;
    void unsetsub();
    void setSub(const std::string& value);

    /// <summary>
    /// 已订阅模式的数量。
    /// </summary>

    std::string getPsub() const;
    bool psubIsSet() const;
    void unsetpsub();
    void setPsub(const std::string& value);

    /// <summary>
    /// 在事务中被执行的命令数量。
    /// </summary>

    std::string getMulti() const;
    bool multiIsSet() const;
    void unsetmulti();
    void setMulti(const std::string& value);


protected:
    std::string addr_;
    bool addrIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string cmd_;
    bool cmdIsSet_;
    std::string age_;
    bool ageIsSet_;
    std::string idle_;
    bool idleIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string fd_;
    bool fdIsSet_;
    std::string sub_;
    bool subIsSet_;
    std::string psub_;
    bool psubIsSet_;
    std::string multi_;
    bool multiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionRespondBody_sessions_H_
