
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/QueryConnectionsResponse.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ShowConnectionStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowConnectionStatisticsResponse();
    virtual ~ShowConnectionStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowConnectionStatisticsResponse members

    /// <summary>
    /// 总连接数，包括内部连接与外部连接。
    /// </summary>

    int32_t getTotalConnections() const;
    bool totalConnectionsIsSet() const;
    void unsettotalConnections();
    void setTotalConnections(int32_t value);

    /// <summary>
    /// 内部总连接数。
    /// </summary>

    int32_t getTotalInnerConnections() const;
    bool totalInnerConnectionsIsSet() const;
    void unsettotalInnerConnections();
    void setTotalInnerConnections(int32_t value);

    /// <summary>
    /// 外部总连接数。
    /// </summary>

    int32_t getTotalOuterConnections() const;
    bool totalOuterConnectionsIsSet() const;
    void unsettotalOuterConnections();
    void setTotalOuterConnections(int32_t value);

    /// <summary>
    /// 内部连接统计信息数组，最大记录数为200条。
    /// </summary>

    std::vector<QueryConnectionsResponse>& getInnerConnections();
    bool innerConnectionsIsSet() const;
    void unsetinnerConnections();
    void setInnerConnections(const std::vector<QueryConnectionsResponse>& value);

    /// <summary>
    /// 外部连接统计信息数组，最大记录数为200条。
    /// </summary>

    std::vector<QueryConnectionsResponse>& getOuterConnections();
    bool outerConnectionsIsSet() const;
    void unsetouterConnections();
    void setOuterConnections(const std::vector<QueryConnectionsResponse>& value);


protected:
    int32_t totalConnections_;
    bool totalConnectionsIsSet_;
    int32_t totalInnerConnections_;
    bool totalInnerConnectionsIsSet_;
    int32_t totalOuterConnections_;
    bool totalOuterConnectionsIsSet_;
    std::vector<QueryConnectionsResponse> innerConnections_;
    bool innerConnectionsIsSet_;
    std::vector<QueryConnectionsResponse> outerConnections_;
    bool outerConnectionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsResponse_H_
