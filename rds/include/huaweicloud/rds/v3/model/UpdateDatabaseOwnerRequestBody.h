
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateDatabaseOwnerRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateDatabaseOwnerRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateDatabaseOwnerRequestBody
    : public ModelBase
{
public:
    UpdateDatabaseOwnerRequestBody();
    virtual ~UpdateDatabaseOwnerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDatabaseOwnerRequestBody members

    /// <summary>
    /// 修改后数据库owner
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);


protected:
    std::string owner_;
    bool ownerIsSet_;
    std::string database_;
    bool databaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateDatabaseOwnerRequestBody_H_
