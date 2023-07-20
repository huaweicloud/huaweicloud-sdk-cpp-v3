
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/QuerySessionResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListSessionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSessionsResponse();
    virtual ~ListSessionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSessionsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 具体信息。
    /// </summary>

    std::vector<QuerySessionResponse>& getSessions();
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(const std::vector<QuerySessionResponse>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<QuerySessionResponse> sessions_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSessionsResponse_H_
