
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopIoInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopIoInfo_H_


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
/// Top IO信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  TopIoInfo
    : public ModelBase
{
public:
    TopIoInfo();
    virtual ~TopIoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopIoInfo members

    /// <summary>
    /// 线程ID
    /// </summary>

    std::string getThreadId() const;
    bool threadIdIsSet() const;
    void unsetthreadId();
    void setThreadId(const std::string& value);

    /// <summary>
    /// 线程分类标识，取值：业务（worker）和后台（background）。需将GUC参数\&quot;enable_thread_pool\&quot;设置为on
    /// </summary>

    std::string getThreadType() const;
    bool threadTypeIsSet() const;
    void unsetthreadType();
    void setThreadType(const std::string& value);

    /// <summary>
    /// 从磁盘读取数据速率, 单位：KB/s
    /// </summary>

    int32_t getDiskReadRate() const;
    bool diskReadRateIsSet() const;
    void unsetdiskReadRate();
    void setDiskReadRate(int32_t value);

    /// <summary>
    /// 写入磁盘数据速率, 单位：KB/s
    /// </summary>

    int32_t getDiskWriteRate() const;
    bool diskWriteRateIsSet() const;
    void unsetdiskWriteRate();
    void setDiskWriteRate(int32_t value);

    /// <summary>
    /// 会话ID
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// SQL ID
    /// </summary>

    std::string getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(const std::string& value);

    /// <summary>
    /// 数据库
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 客户端IP
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 语句开始时间
    /// </summary>

    int64_t getSqlStart() const;
    bool sqlStartIsSet() const;
    void unsetsqlStart();
    void setSqlStart(int64_t value);


protected:
    std::string threadId_;
    bool threadIdIsSet_;
    std::string threadType_;
    bool threadTypeIsSet_;
    int32_t diskReadRate_;
    bool diskReadRateIsSet_;
    int32_t diskWriteRate_;
    bool diskWriteRateIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string state_;
    bool stateIsSet_;
    int64_t sqlStart_;
    bool sqlStartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopIoInfo_H_
