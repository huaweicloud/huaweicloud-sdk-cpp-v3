
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsWithAssociatedResourcesResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsWithAssociatedResourcesResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/ListTopicsWithAssociatedResourcesItem.h>
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
class HUAWEICLOUD_SMN_V2_EXPORT  ListTopicsWithAssociatedResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopicsWithAssociatedResourcesResponse();
    virtual ~ListTopicsWithAssociatedResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopicsWithAssociatedResourcesResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 返回的Topic个数。该参数不受offset和limit影响，即返回的是您账户下所有的Topic个数。
    /// </summary>

    int32_t getTopicCount() const;
    bool topicCountIsSet() const;
    void unsettopicCount();
    void setTopicCount(int32_t value);

    /// <summary>
    /// Topic及关联资源信息结构体数组。
    /// </summary>

    std::vector<ListTopicsWithAssociatedResourcesItem>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<ListTopicsWithAssociatedResourcesItem>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t topicCount_;
    bool topicCountIsSet_;
    std::vector<ListTopicsWithAssociatedResourcesItem> topics_;
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsWithAssociatedResourcesResponse_H_
