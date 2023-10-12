
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSqlserverDatabasesRequest
    : public ModelBase
{
public:
    ListSqlserverDatabasesRequest();
    virtual ~ListSqlserverDatabasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlserverDatabasesRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 分页页码，从1开始。
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页数据条数。取值范围[1, 100]。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 数据库名。当指定该参数时，page和limit参数需要传入但不生效。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库恢复健康模式，取值：FULL  ：完整模式，SIMPLE  ：简单模式，BUlK_LOGGED ：大容量日志恢复模式（该参数仅用于SQL server引擎）
    /// </summary>

    std::string getRecoverModel() const;
    bool recoverModelIsSet() const;
    void unsetrecoverModel();
    void setRecoverModel(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string recoverModel_;
    bool recoverModelIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSqlserverDatabasesRequest& dereference_from_shared_ptr(std::shared_ptr<ListSqlserverDatabasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesRequest_H_
