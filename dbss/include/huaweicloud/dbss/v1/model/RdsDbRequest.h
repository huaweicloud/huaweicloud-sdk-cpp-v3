
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RdsDbRequest_databases.h>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  RdsDbRequest
    : public ModelBase
{
public:
    RdsDbRequest();
    virtual ~RdsDbRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsDbRequest members

    /// <summary>
    /// 数据库列表
    /// </summary>

    std::vector<RdsDbRequest_databases>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<RdsDbRequest_databases>& value);


protected:
    std::vector<RdsDbRequest_databases> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_H_
