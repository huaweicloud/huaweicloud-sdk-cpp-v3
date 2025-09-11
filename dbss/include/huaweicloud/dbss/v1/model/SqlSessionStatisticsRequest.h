
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlSessionStatisticsRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlSessionStatisticsRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/dbss/v1/model/Duration.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  SqlSessionStatisticsRequest
    : public ModelBase
{
public:
    SqlSessionStatisticsRequest();
    virtual ~SqlSessionStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlSessionStatisticsRequest members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::vector<std::string>& getDbId();
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Duration getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const Duration& value);


protected:
    std::vector<std::string> dbId_;
    bool dbIdIsSet_;
    Duration time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlSessionStatisticsRequest_H_
