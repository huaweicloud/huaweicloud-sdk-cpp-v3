
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SaveRedisDisabledCommandsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SaveRedisDisabledCommandsRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/RedisDisabledCommandsDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SaveRedisDisabledCommandsRequestBody
    : public ModelBase
{
public:
    SaveRedisDisabledCommandsRequestBody();
    virtual ~SaveRedisDisabledCommandsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveRedisDisabledCommandsRequestBody members

    /// <summary>
    /// 禁用类型。
    /// </summary>

    std::string getDisabledType() const;
    bool disabledTypeIsSet() const;
    void unsetdisabledType();
    void setDisabledType(const std::string& value);

    /// <summary>
    /// disabled_type为command时传入该参数。
    /// </summary>

    std::vector<std::string>& getCommands();
    bool commandsIsSet() const;
    void unsetcommands();
    void setCommands(const std::vector<std::string>& value);

    /// <summary>
    /// disabled_type为key时传入该参数，最多20个。
    /// </summary>

    std::vector<RedisDisabledCommandsDetail>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<RedisDisabledCommandsDetail>& value);


protected:
    std::string disabledType_;
    bool disabledTypeIsSet_;
    std::vector<std::string> commands_;
    bool commandsIsSet_;
    std::vector<RedisDisabledCommandsDetail> keys_;
    bool keysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SaveRedisDisabledCommandsRequestBody_H_
