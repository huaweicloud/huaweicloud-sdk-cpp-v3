
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionResponseBody_rows_info_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionResponseBody_rows_info_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTransactionResponseBody_rows_info
    : public ModelBase
{
public:
    ListTransactionResponseBody_rows_info();
    virtual ~ListTransactionResponseBody_rows_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTransactionResponseBody_rows_info members

    /// <summary>
    /// **参数解释**: 事务ID。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getSessionid() const;
    bool sessionidIsSet() const;
    void unsetsessionid();
    void setSessionid(int32_t value);

    /// <summary>
    /// **参数解释**: 线程ID。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(int32_t value);

    /// <summary>
    /// **参数解释**: SQL查询ID。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(int32_t value);

    /// <summary>
    /// **参数解释**: 数据库。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatname() const;
    bool datnameIsSet() const;
    void unsetdatname();
    void setDatname(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起事务请求的客户端地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientAddr() const;
    bool clientAddrIsSet() const;
    void unsetclientAddr();
    void setClientAddr(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起事务请求的客户端端口。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(int32_t value);

    /// <summary>
    /// **参数解释**: 用户名。 **取值范围**: 不涉及。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUsename() const;
    bool usenameIsSet() const;
    void unsetusename();
    void setUsename(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询的SQL语句。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBackendStart() const;
    bool backendStartIsSet() const;
    void unsetbackendStart();
    void setBackendStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getXactStart() const;
    bool xactStartIsSet() const;
    void unsetxactStart();
    void setXactStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 应用名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务变更时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStateChange() const;
    bool stateChangeIsSet() const;
    void unsetstateChange();
    void setStateChange(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryStart() const;
    bool queryStartIsSet() const;
    void unsetqueryStart();
    void setQueryStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否等待。 **取值范围**: 不涉及。
    /// </summary>

    std::string getWaiting() const;
    bool waitingIsSet() const;
    void unsetwaiting();
    void setWaiting(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化ID。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(int32_t value);

    /// <summary>
    /// **参数解释**: 顶层事务ID。
    /// </summary>

    std::string getTopXid() const;
    bool topXidIsSet() const;
    void unsettopXid();
    void setTopXid(const std::string& value);

    /// <summary>
    /// **参数解释**: 当前事务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCurrentXid() const;
    bool currentXidIsSet() const;
    void unsetcurrentXid();
    void setCurrentXid(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务执行时长。 **取值范围**: 不涉及。
    /// </summary>

    std::string getExecTime() const;
    bool execTimeIsSet() const;
    void unsetexecTime();
    void setExecTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务xlog量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getXlogQuantity() const;
    bool xlogQuantityIsSet() const;
    void unsetxlogQuantity();
    void setXlogQuantity(int32_t value);


protected:
    int32_t sessionid_;
    bool sessionidIsSet_;
    int32_t pid_;
    bool pidIsSet_;
    int32_t queryId_;
    bool queryIdIsSet_;
    std::string datname_;
    bool datnameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    int32_t clientPort_;
    bool clientPortIsSet_;
    std::string usename_;
    bool usenameIsSet_;
    std::string query_;
    bool queryIsSet_;
    std::string backendStart_;
    bool backendStartIsSet_;
    std::string xactStart_;
    bool xactStartIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string stateChange_;
    bool stateChangeIsSet_;
    std::string queryStart_;
    bool queryStartIsSet_;
    std::string waiting_;
    bool waitingIsSet_;
    int32_t uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string topXid_;
    bool topXidIsSet_;
    std::string currentXid_;
    bool currentXidIsSet_;
    std::string execTime_;
    bool execTimeIsSet_;
    int32_t xlogQuantity_;
    bool xlogQuantityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionResponseBody_rows_info_H_
