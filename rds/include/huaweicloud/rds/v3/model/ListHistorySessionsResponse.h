
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistorySessionsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistorySessionsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Session.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListHistorySessionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistorySessionsResponse();
    virtual ~ListHistorySessionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistorySessionsResponse members

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 会话信息列表
    /// </summary>

    std::vector<Session>& getSessions();
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(const std::vector<Session>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Session> sessions_;
    bool sessionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistorySessionsResponse_H_
