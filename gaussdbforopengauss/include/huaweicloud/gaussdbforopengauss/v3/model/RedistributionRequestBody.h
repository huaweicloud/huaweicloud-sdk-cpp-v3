
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RedistributionRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RedistributionRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RedistributionRequestBody
    : public ModelBase
{
public:
    RedistributionRequestBody();
    virtual ~RedistributionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RedistributionRequestBody members

    /// <summary>
    /// 具有JOIN关系的表，指定该参数则启用多表扩容模式，扩容前设置生效。 如果指定过该参数，后续调用可以传入空数组清除多表扩容配置。  本次扩容结束后自动清除该配置，下次扩容需要重新设置。 按照“database名称、schema1名称、table1名称、schema2名称、table2名称...”的格式指定，带有大小写或特殊字符的表名需要加\&quot;\&quot;转义。 多个数组则表示存在多个join group。
    /// </summary>

    std::vector<std::vector<std::string>>& getRedisJoinTables();
    bool redisJoinTablesIsSet() const;
    void unsetredisJoinTables();
    void setRedisJoinTables(const std::vector<std::vector<std::string>>& value);

    /// <summary>
    /// 重分布并发数，扩容前设置生效。
    /// </summary>

    int32_t getRedisParallelJobs() const;
    bool redisParallelJobsIsSet() const;
    void unsetredisParallelJobs();
    void setRedisParallelJobs(int32_t value);

    /// <summary>
    /// 重分布资源管控级别，扩容前或扩容重分布结束前设置生效。
    /// </summary>

    std::string getRedisResourceLevel() const;
    bool redisResourceLevelIsSet() const;
    void unsetredisResourceLevel();
    void setRedisResourceLevel(const std::string& value);


protected:
    std::vector<std::vector<std::string>> redisJoinTables_;
    bool redisJoinTablesIsSet_;
    int32_t redisParallelJobs_;
    bool redisParallelJobsIsSet_;
    std::string redisResourceLevel_;
    bool redisResourceLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RedistributionRequestBody_H_
