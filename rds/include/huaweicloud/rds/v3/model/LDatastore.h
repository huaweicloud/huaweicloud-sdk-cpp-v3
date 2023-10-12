
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_LDatastore_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_LDatastore_H_


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
/// 数据库版本信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  LDatastore
    : public ModelBase
{
public:
    LDatastore();
    virtual ~LDatastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LDatastore members

    /// <summary>
    /// 数据库版本ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库版本号。 - 对于MySQL引擎可以返回小版本号，例如MySQL 5.6.51版本，将返回5.6.51。 - 对于PostgreSQL和SQL Server引擎，只返回两位数的大版本号，例如PostgreSQL 9.6.X版本，仅返回9.6。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_LDatastore_H_
