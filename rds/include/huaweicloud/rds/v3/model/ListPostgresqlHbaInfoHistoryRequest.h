
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlHbaInfoHistoryRequest
    : public ModelBase
{
public:
    ListPostgresqlHbaInfoHistoryRequest();
    virtual ~ListPostgresqlHbaInfoHistoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPostgresqlHbaInfoHistoryRequest members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 开始时间,不传默认当天0点（UTC时区）
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间,不传默认当前时间（UTC时区）
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPostgresqlHbaInfoHistoryRequest& dereference_from_shared_ptr(std::shared_ptr<ListPostgresqlHbaInfoHistoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryRequest_H_
