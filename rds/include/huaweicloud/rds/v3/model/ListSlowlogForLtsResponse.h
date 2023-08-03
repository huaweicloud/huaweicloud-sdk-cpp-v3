
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogForLtsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogForLtsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MysqlSlowLogDetailsItem.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowlogForLtsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSlowlogForLtsResponse();
    virtual ~ListSlowlogForLtsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSlowlogForLtsResponse members

    /// <summary>
    /// 日志数据集合。
    /// </summary>

    std::vector<MysqlSlowLogDetailsItem>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<MysqlSlowLogDetailsItem>& value);

    /// <summary>
    /// 当前慢日志阈值时间。
    /// </summary>

    std::string getLongQueryTime() const;
    bool longQueryTimeIsSet() const;
    void unsetlongQueryTime();
    void setLongQueryTime(const std::string& value);


protected:
    std::vector<MysqlSlowLogDetailsItem> slowLogList_;
    bool slowLogListIsSet_;
    std::string longQueryTime_;
    bool longQueryTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogForLtsResponse_H_
