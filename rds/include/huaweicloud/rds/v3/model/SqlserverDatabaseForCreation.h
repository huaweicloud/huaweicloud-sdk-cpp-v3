
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForCreation_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForCreation_H_


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
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SqlserverDatabaseForCreation
    : public ModelBase
{
public:
    SqlserverDatabaseForCreation();
    virtual ~SqlserverDatabaseForCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlserverDatabaseForCreation members

    /// <summary>
    /// 数据库名称。 数据库名称长度可在1～64个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符，且不能以RDS for SQL Server系统库开头或结尾。 RDS for SQL Server系统库包括master，msdb，model，tempdb，resource以及rdsadmin。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForCreation_H_
