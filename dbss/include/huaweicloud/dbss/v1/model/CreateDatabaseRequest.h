
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/CreateDatabaseRequest_database.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateDatabaseRequest
    : public ModelBase
{
public:
    CreateDatabaseRequest();
    virtual ~CreateDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateDatabaseRequest_database getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const CreateDatabaseRequest_database& value);


protected:
    CreateDatabaseRequest_database database_;
    bool databaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDatabaseRequest_H_
