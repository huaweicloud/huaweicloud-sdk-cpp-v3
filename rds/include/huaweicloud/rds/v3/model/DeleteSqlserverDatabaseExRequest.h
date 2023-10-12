
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSqlserverDatabaseExRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSqlserverDatabaseExRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/DropDatabaseV3Req.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteSqlserverDatabaseExRequest
    : public ModelBase
{
public:
    DeleteSqlserverDatabaseExRequest();
    virtual ~DeleteSqlserverDatabaseExRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSqlserverDatabaseExRequest members

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
    /// 需要删除的数据库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DropDatabaseV3Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DropDatabaseV3Req& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    DropDatabaseV3Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSqlserverDatabaseExRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSqlserverDatabaseExRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSqlserverDatabaseExRequest_H_
