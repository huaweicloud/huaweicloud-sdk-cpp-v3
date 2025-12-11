
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListRdsDatabasesRequest
    : public ModelBase
{
public:
    ListRdsDatabasesRequest();
    virtual ~ListRdsDatabasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRdsDatabasesRequest members

    /// <summary>
    /// **参数解释**： 数据库类型 **约束限制**： 区分大小写，只能传递取值范围内的值 **取值范围**：   - MYSQL: Mysql   - ORACLE: Oracle   - POSTGRESQL: PostgreSQL   - SQLSERVER: SQL Server   - DAMENG: DAMENG   - TAURUS: TaurusDB   - DWS: GaussDB DWS   - KINGBASE: KINGBASE   - MARIADB: MariaDB   - GAUSSDBOPENGAUSS: GaussDB/openGauss **默认取值**： 不涉及 
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**： 分页偏移量，从第一条数据偏移offset条数据后开始查询 **约束限制**： 仅支持大于等于0的整数 **取值范围**： 大于等于0 **默认取值**： 默认值为0 
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释**： 每页查询记录数。 **约束限制**： 仅支持大于0的整数 **取值范围**： 大于0小于等于10000 **默认取值**： 默认值为100 
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);


protected:
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRdsDatabasesRequest& dereference_from_shared_ptr(std::shared_ptr<ListRdsDatabasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesRequest_H_
