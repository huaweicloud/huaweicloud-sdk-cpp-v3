
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTopicsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTopicsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Topics.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListNotificationTopicsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotificationTopicsResponse();
    virtual ~ListNotificationTopicsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListNotificationTopicsResponse members

    /// <summary>
    /// request_id
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// topics数量
    /// </summary>

    int32_t getTopicCount() const;
    bool topicCountIsSet() const;
    void unsettopicCount();
    void setTopicCount(int32_t value);

    /// <summary>
    /// 主题信息
    /// </summary>

    std::vector<Topics>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<Topics>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t topicCount_;
    bool topicCountIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListNotificationTopicsResponse_H_
