
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateStatisticsRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateStatisticsRequestBody_H_


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
/// 统计信息更新内容
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateStatisticsRequestBody
    : public ModelBase
{
public:
    UpdateStatisticsRequestBody();
    virtual ~UpdateStatisticsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStatisticsRequestBody members

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateStatisticsRequestBody_H_
