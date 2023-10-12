
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisDeleteDbUserRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisDeleteDbUserRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除账号请求
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RedisDeleteDbUserRequest
    : public ModelBase
{
public:
    RedisDeleteDbUserRequest();
    virtual ~RedisDeleteDbUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RedisDeleteDbUserRequest members

    /// <summary>
    /// 需要删除的数据库账号名称列表。
    /// </summary>

    std::vector<std::string>& getNames();
    bool namesIsSet() const;
    void unsetnames();
    void setNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> names_;
    bool namesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RedisDeleteDbUserRequest_H_
