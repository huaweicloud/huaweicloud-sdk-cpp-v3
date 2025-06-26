
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicMessageStatisticsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicMessageStatisticsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/SumCountDetail.h>
#include <string>
#include <huaweicloud/smn/v2/model/StatisticsDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListTopicMessageStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopicMessageStatisticsResponse();
    virtual ~ListTopicMessageStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopicMessageStatisticsResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SumCountDetail getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const SumCountDetail& value);

    /// <summary>
    /// 周期内的发送详情列表
    /// </summary>

    std::vector<StatisticsDetail>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<StatisticsDetail>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    SumCountDetail total_;
    bool totalIsSet_;
    std::vector<StatisticsDetail> statistics_;
    bool statisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicMessageStatisticsResponse_H_
