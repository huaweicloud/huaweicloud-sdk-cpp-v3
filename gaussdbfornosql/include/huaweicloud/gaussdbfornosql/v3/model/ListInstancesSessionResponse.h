
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionRespondBody_sessions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesSessionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesSessionResponse();
    virtual ~ListInstancesSessionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSessionResponse members

    /// <summary>
    /// 符合查询条件的总会话数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例会话详细信息列表。
    /// </summary>

    std::vector<ListInstancesSessionRespondBody_sessions>& getSessions();
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(const std::vector<ListInstancesSessionRespondBody_sessions>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ListInstancesSessionRespondBody_sessions> sessions_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionResponse_H_
