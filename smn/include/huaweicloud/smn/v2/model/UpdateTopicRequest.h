
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/UpdateTopicRequestBody.h>
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
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateTopicRequest
    : public ModelBase
{
public:
    UpdateTopicRequest();
    virtual ~UpdateTopicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTopicRequest members

    /// <summary>
    /// Topic的唯一的资源标识。可以通过[查看主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateTopicRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateTopicRequestBody& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    UpdateTopicRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTopicRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTopicRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequest_H_
