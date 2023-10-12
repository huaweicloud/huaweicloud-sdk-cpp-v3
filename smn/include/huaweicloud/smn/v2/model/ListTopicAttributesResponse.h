
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicAttributesResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicAttributesResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/TopicAttribute.h>
#include <string>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListTopicAttributesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopicAttributesResponse();
    virtual ~ListTopicAttributesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopicAttributesResponse members

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

    TopicAttribute getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const TopicAttribute& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    TopicAttribute attributes_;
    bool attributesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicAttributesResponse_H_
