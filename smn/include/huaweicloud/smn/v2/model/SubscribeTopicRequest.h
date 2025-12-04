
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscribeTopicRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscribeTopicRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  SubscribeTopicRequest
    : public ModelBase
{
public:
    SubscribeTopicRequest();
    virtual ~SubscribeTopicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscribeTopicRequest members

    /// <summary>
    /// Topic的唯一的资源标识，可通过[查询主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 订阅终端地址。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 订阅主题Token信息。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    std::string token_;
    bool tokenIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SubscribeTopicRequest& dereference_from_shared_ptr(std::shared_ptr<SubscribeTopicRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscribeTopicRequest_H_
