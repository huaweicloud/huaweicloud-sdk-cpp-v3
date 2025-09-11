
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/RealTimeSessionResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListRealTimeSessionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRealTimeSessionsResponse();
    virtual ~ListRealTimeSessionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRealTimeSessionsResponse members

    /// <summary>
    /// **参数解释**： 数据库实例的实时会话列表。
    /// </summary>

    std::vector<RealTimeSessionResult>& getSessions();
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(const std::vector<RealTimeSessionResult>& value);


protected:
    std::vector<RealTimeSessionResult> sessions_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsResponse_H_
