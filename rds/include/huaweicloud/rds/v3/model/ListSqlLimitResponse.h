
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlLimitResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlLimitResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/SqlLimitObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSqlLimitResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlLimitResponse();
    virtual ~ListSqlLimitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlLimitResponse members

    /// <summary>
    /// SQL限流总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// SQL限流详情
    /// </summary>

    std::vector<SqlLimitObject>& getSqlLimitObjects();
    bool sqlLimitObjectsIsSet() const;
    void unsetsqlLimitObjects();
    void setSqlLimitObjects(const std::vector<SqlLimitObject>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<SqlLimitObject> sqlLimitObjects_;
    bool sqlLimitObjectsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlLimitResponse_H_
